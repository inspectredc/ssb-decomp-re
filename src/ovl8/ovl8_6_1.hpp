#ifndef _OVL8_6_1_H
#define _OVL8_6_1_H

#include "ovl8/ovl8_2.hpp"
#include "ovl8/ovl8_3.hpp"
#include "ovl8/ovl8_3_2.hpp"

typedef struct Vec2hPair {
    Vec2h unk0;
    Vec2h unk4;
} Vec2hPair;

class Unk80375920 : public Unk80371FB0 {
public:
    Unk80375920();
    Unk80375920(UnkA1* arg2, Sprite* arg3);
    virtual ~Unk80375920();

    void func_ovl8_80375B8C(u16 arg1, u16 arg2);
    void func_ovl8_80375BA0(u16* arg1, u16* arg2);
    static void func_ovl8_80375BB4(Vec2h* arg0);
    static void func_ovl8_80375BD0(Vec2h* arg0);
    virtual void func_ovl8_80371ACC(GObj* arg1);
    void func_ovl8_80375C54(void);
    s16 func_ovl8_80375CB8(s16 arg1);
    void func_ovl8_80375D44(s32 arg1);
    s32 func_ovl8_80375D4C(void);
    void func_ovl8_80375D54(Vec2hPair* arg1);
    void func_ovl8_80375D84();
    void func_ovl8_80375E00(s32 arg1);
    void func_ovl8_80375E08(Sprite* arg1, s32 arg2, u16 arg3, u16 arg4);
    void func_ovl8_80375E60(void);

protected:
// 0x14 start
    u16 unk14;
    u16 unk16;
    s32 unk18;
    s32 unk1C;
};

class Unk80376010 : public Unk80372790, public Unk80371FB0 {
public:
    Unk80376010(UnkA1* arg1, s32 arg2);
    Unk80376010* func_ovl8_80376164(UnkA1* arg1);
    virtual ~Unk80376010();

    virtual GObj* func_ovl8_80372A3C(void);
    virtual void func_ovl8_80371ABC(void);
    virtual s32 func_ovl8_80371C1C(menuCursorStruct* arg1);
};

#endif // _OVL8_6_1_H
