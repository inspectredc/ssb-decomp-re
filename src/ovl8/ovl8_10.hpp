#ifndef _OVL8_10_H
#define _OVL8_10_H

#include "ovl8/libC.hpp"
extern "C" {
#include <sys/objtypes.h>
}

class Unk8037C3C0 {
public:
    Unk8037C3C0();
    virtual ~Unk8037C3C0();
    void func_ovl8_8037C498(void* arg1);
    void func_ovl8_8037C4A4(s32 arg1);
    GObj* func_ovl8_8037C510(void);
    static void func_ovl8_8037C518(GObj* arg0, u8 arg1, s32 arg2);
    static void* func_ovl8_8037C584(s32 arg0);
    static void* func_ovl8_8037C5E8(s32 arg0);

    u8 pad0[0x4];
    void (*unk4)(void);
    GObj* unk8;

    static s32 D_ovl8_8038A1B8;
    static s32 D_ovl8_8038A1BC;
    static GObj* D_ovl8_8038A1C0;
    static GObj* D_ovl8_8038A1C4;
    static GObj* D_ovl8_8038A1C8;
};

#endif // _OVL8_10_H
