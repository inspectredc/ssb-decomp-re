#ifndef _OVL8_LIBC_H
#define _OVL8_LIBC_H

extern "C" {
#include "common.h"
}

extern void *__osMalloc(size_t bytes);
extern void __osFree(void *ptr);

inline void *operator new(size_t /* size */, void* ptr) {
    return ptr;
}

extern void *operator new(size_t size);
extern void operator delete(void* ptr);

#endif // _OVL8_LIBC_H
