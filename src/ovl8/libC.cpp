#include "ovl8/libC.hpp"

typedef struct Arena_s
{
	Arena_s* prevBlock;
	s32 size;
	s32 isAllocated;
	Arena_s* next;
	Arena_s* prev;
} Arena;

Arena* gArenaStart;
s32 gArenaSize;
Arena* gArenaEnd;
Arena gArena;

#define ARENA_END(node, size) (Arena*)((uintptr_t)(node) + (size))
#define offsetof(structure, member) ((size_t)&(((structure*)0)->member))

void Heap_InsertNode(Arena* prevNode, Arena* node, Arena* nextNode)
{
	prevNode->next = node;
	node->next = nextNode;
	nextNode->prev = node;
	node->prev = prevNode;
}

void Heap_AppendNode(Arena* node) { Heap_InsertNode(gArena.prev, node, &gArena); }

void Heap_RemoveNode(Arena* node)
{
	Arena* prev;
	Arena* next;

	prev = node->prev;
	next = node->next;
	prev->next = next;
	next->prev = prev;
}

Arena* Heap_FindBlock(s32 blockSize)
{
	Arena* node;

	node = gArena.next;
	while (node != &gArena)
	{
		if (node->size >= blockSize)
		{
			return node;
		}
		node = node->next;
	}
	return NULL;
}

void Heap_SplitBlock(Arena* node, s32 blockSize)
{
	Arena* newNode;
	Arena* temp_v0;

	newNode = ARENA_END(node, blockSize);
	newNode->prevBlock = node;
	newNode->size = node->size - blockSize;
	newNode->isAllocated = 0;
	temp_v0 = ARENA_END(newNode, newNode->size);
	if (temp_v0 < gArenaEnd)
	{
		temp_v0->prevBlock = newNode;
	}
	Heap_AppendNode(newNode);
	node->size = blockSize;
}

void Heap_Free(Arena* node)
{
	Arena* temp_a0;
	Arena* temp_a2;
	Arena* temp_v0;

	temp_v0 = node->prevBlock;
	temp_a2 = ARENA_END(node, node->size);
	if ((temp_v0 != NULL) && (temp_v0->isAllocated == 0))
	{
		temp_v0->size += node->size;
		if (temp_a2 < gArenaEnd)
		{
			temp_a2->prevBlock = temp_v0;
		}
		node = temp_v0;
	}
	else
	{
		Heap_AppendNode(node);
		node->isAllocated = 0;
	}
	if ((temp_a2 < gArenaEnd) && (temp_a2->isAllocated == 0))
	{
		temp_a0 = ARENA_END(temp_a2, temp_a2->size);
		if (temp_a0 < gArenaEnd)
		{
			temp_a0->prevBlock = node;
		}
		node->size += temp_a2->size;
		Heap_RemoveNode(temp_a2);
	}
}

void Heap_Init(Arena* node, s32 size)
{
	Arena* firstNode;

	gArenaSize = size;
	gArenaStart = node;
	gArenaEnd = ARENA_END(gArenaStart, size);
	firstNode = gArenaStart;
	firstNode->prevBlock = NULL;
	firstNode->size = size;
	firstNode->isAllocated = 0;
	Heap_InsertNode(&gArena, firstNode, &gArena);
}

s32 Heap_CanAllocate(size_t size)
{
	if (size < 8)
	{
		size = 8;
	}
	return Heap_FindBlock((size + 0xF) & ~3) != NULL;
}

void* __osMalloc(size_t size)
{
	Arena* allocNode;
	size_t blockSize;

	if (size < 8)
	{
		size = 8;
	}
	blockSize = (size + 0xF) & ~3;
	allocNode = Heap_FindBlock(blockSize);
	if (allocNode == NULL)
	{
		return NULL;
	}
	if (allocNode->size - blockSize > 20)
	{
		Heap_SplitBlock(allocNode, blockSize);
	}
	Heap_RemoveNode(allocNode);
	allocNode->isAllocated = 1;
	return &allocNode->next;
}

void __osFree(void* ptr) { Heap_Free((Arena*)((u8*)ptr - offsetof(Arena, next))); }
