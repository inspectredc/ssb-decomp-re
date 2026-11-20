#include "ovl8/ovl8_3.hpp"
extern "C"
{
#include "sys/obj.h"
#include "sys/objman.h"
}

Unk80371FB0::Unk80371FB0() { func_ovl8_80372420(NULL); }

Unk80371FB0::Unk80371FB0(UnkA1* arg2, Sprite* arg3)
{
	func_ovl8_80371ECC(arg2);
	func_ovl8_80372420(arg3);
}

Unk80371FB0::~Unk80371FB0()
{
	if (this->unk0)
	{
		gcEjectGObj(this->unk0);
	}

	if (this->unk4)
	{
		gcEjectGObj(this->unk4);
	}
}

void Unk80371FB0::func_ovl8_80371ABC()
{
	GObj* gobj = this->get48();
	SObj* sobj;

	sobj = SObjGetStruct(gobj);
	sobj->sprite.rsp_dl_next = gSYTaskmanDLHeads[0];
	spDraw(&sobj->sprite);
	gSYTaskmanDLHeads[0] = sobj->sprite.rsp_dl_next - 1;
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
}

void Unk80371FB0::func_ovl8_803721E8(DBMenuPosition* arg1)
{
	arg1->x = arg1->y = 0;
	if (this->unk8 != NULL)
	{
		arg1->w = this->unk8->width;
		arg1->h = this->unk8->height;
	}
	else
	{
		arg1->w = arg1->h = 0;
	}
}

void Unk80371FB0::func_ovl8_80371C50(DBMenuPosition* arg1) { this->func_ovl8_803721E8(arg1); }

extern "C" void func_ovl8_80377AEC(Sprite* arg0, s16* arg1, SYColorRGBA* arg2, s32 arg3);
extern "C" void func_ovl8_803787C0(Sprite* src_sprite, Sprite* dst_sprite, DBMenuPosition* src_rect, Vec2h* dst_rect);
extern "C" s32 func_ovl8_8037BF68(s32 user_data, Sprite* sprite, void (*proc)(GObj*), void (*proc_display)(GObj*),
								  GObj** camera_out, GObj** sprite_out, s32 low_priority);

void Unk80371FB0::func_ovl8_80372250(s16* arg1, SYColorRGBA* arg2, s32 arg3)
{
	func_ovl8_80377AEC(this->func_ovl8_80371CB8(), arg1, arg2, arg3);
}

void Unk80371FB0::func_ovl8_803722A0(Sprite* arg1, DBMenuPosition* arg2, Vec2h* arg3)
{
	func_ovl8_803787C0(arg1, this->func_ovl8_80371CB8(), arg2, arg3);
}

const SYColorRGBA Unk80371FB0::D_ovl8_80388C98 = { 0xFF, 0xFF, 0xFF, 0xFF };

void Unk80371FB0::func_ovl8_803722F0(s16* arg1)
{
	SYColorRGBA sp1C = D_ovl8_80388C98;

	this->func_ovl8_80372250(arg1, &sp1C, 1);
}

void Unk80371FB0::func_ovl8_80372348(s16 arg1, s16 arg2) {}

Sprite* Unk80371FB0::func_ovl8_80371CB8() { return this->unk8; }

void Unk80371FB0::func_ovl8_80372360(Sprite* arg1)
{
	SObj* sobj;

	this->unk8 = arg1;
	sobj = SObjGetStruct(this->unk4);
	sobj->sprite = *arg1;
}

s32 Unk80371FB0::func_ovl8_803723AC(s32 arg1, Sprite* arg2, void (*arg3)(GObj*), void (*arg4)(GObj*), s32 arg5)
{
	SObj* sobj;
	s32 temp_v0;

	temp_v0 = func_ovl8_8037BF68(arg1, arg2, arg3, arg4, &this->unk0, &this->unk4, arg5);
	this->set48(this->unk4);
	sobj = SObjGetStruct(this->unk4);
	this->unk8 = &sobj->sprite;

	return temp_v0;
}

void Unk80371FB0::func_ovl8_80372420(Sprite* arg1)
{
	this->unk0 = this->unk4 = NULL;
	this->unk8 = arg1;
}
