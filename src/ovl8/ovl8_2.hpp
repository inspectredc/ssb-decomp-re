#ifndef _OVL8_2_H
#define _OVL8_2_H

#include "ovl8/libC.hpp"
extern "C" {
#include <sys/objtypes.h>
}

class Unk80372790;

typedef struct menuCursorStruct {
    u32 button_tap;
    u32 button_update;
    Vec2h cursor_pos;
} menuCursorStruct;

typedef struct DBMenuPosition {
	s16 x;
	s16 y;
	u16 w;
	u16 h;
} DBMenuPosition;

typedef struct UnkA1 {
    DBMenuPosition unk0;
    SYColorRGBA unk8;
    SYColorRGBA unkC;
    u16 unk10;
    s32 unk14;
    s32 unk18;
    s16 unk1C;
    u8 pad20[0x4];
    Sprite* unk24;
} UnkA1;

class ovl8_803717E0 {
public:
    ovl8_803717E0();
    ovl8_803717E0(UnkA1* arg1);
    ovl8_803717E0* func_ovl8_80371878(UnkA1* arg1);
    virtual ~ovl8_803717E0();

    virtual void func_ovl8_803718FC(void);
    virtual void func_ovl8_80371930(void);
    virtual void func_ovl8_80371960(void);
    virtual void func_ovl8_80371968(void);
    virtual void func_ovl8_80371970(void);
    virtual void func_ovl8_80371978(void);
    virtual void func_ovl8_80371980(Vec2h* arg1);
    virtual void func_ovl8_803719A4(Sprite* arg1);
    virtual void func_ovl8_803719C8(Vec2h* arg1);
    virtual void func_ovl8_80371A2C(void);
    virtual void func_ovl8_80371ABC(void);
    virtual void func_ovl8_80371AC4(void);
    virtual void func_ovl8_80371ACC(GObj* arg1);
    virtual void func_ovl8_80371AD8(Vec2h* arg1);
    virtual s32 func_ovl8_80371B34(Vec2h* arg1);
    virtual s32 func_ovl8_80371B98(Vec2h* arg1);
    virtual s32 func_ovl8_80371BCC(menuCursorStruct* arg1);
    virtual s32 func_ovl8_80371C1C(menuCursorStruct* arg1);
    virtual void func_ovl8_80371C2C(DBMenuPosition* arg1);
    virtual void func_ovl8_80371C50(DBMenuPosition* arg1);
    virtual void func_ovl8_80371C8C(DBMenuPosition* arg1);
    virtual Sprite* func_ovl8_80371CB8(void);
    virtual void func_ovl8_80371D00(void);
    virtual void func_ovl8_80371D08(s16 arg1, s16 arg2);
    virtual void func_ovl8_80371D64(s16 arg1, s16 arg2);
    virtual void func_ovl8_80371D74(s16 arg1, s16 arg2);
    virtual void func_ovl8_80371DC0(s16 arg1, s16 arg2);
    virtual void func_ovl8_80371DD0(void);
    virtual void func_ovl8_80371DDC(void);
    virtual s32 func_ovl8_80371DE4(void);
    virtual void func_ovl8_80371DEC(void);
    virtual void func_ovl8_80371DF4(void);
    virtual void func_ovl8_80371DFC(void);
    virtual void func_ovl8_80371E04(s32 arg1);
    virtual s32 func_ovl8_80371E0C(void);
    virtual void func_ovl8_80371E14(void);
    virtual void func_ovl8_80371E1C(void);
    virtual void func_ovl8_80371E24(void (*arg1)(void));
    virtual void func_ovl8_80371E2C(void);
    virtual void func_ovl8_80371E58(void);

    void func_ovl8_80371EA0(void);
    void func_ovl8_80371ECC(UnkA1* arg1);

    GObj* get48(void) { return this->unk48; }
    void set48(GObj* arg1) { this->unk48 = arg1; }
    Unk80372790* get4C(void) { return this->unk4C; }
    void set4C(Unk80372790* arg1) { this->unk4C = arg1; }

    u8 pad0[0x2];
    DBMenuPosition unk2;
    u8 padA[0x2];
    s32 unkC;
    s32 unk10;
    SYColorRGBA unk14;
    SYColorRGBA unk18;
    s32 unk1C;
    s32 unk20;
    u16 unk24;
    s32 unk28;
    u16 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    GObj* unk48;
    Unk80372790* unk4C;
    u8 unk50;
    u8 unk51;
    u8 unk52;
    u8 unk53;
    void (*unk54)(void);
};

extern "C" s32 func_ovl8_80377168(Vec2h, DBMenuPosition*);

#endif // _OVL8_2_H
