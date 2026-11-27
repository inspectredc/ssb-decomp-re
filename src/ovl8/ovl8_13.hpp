#ifndef _OVL8_13_H
#define _OVL8_13_H

#include "ovl8/ovl8_2.hpp"

extern "C" {
#include <sys/obj.h>
}

typedef struct DBFontPadding {
    u8 left_padding;
    u8 right_padding;
} DBFontPadding;

typedef struct DBFont {
	u16 unk0;
	u16 width;
	u16 height;
	DBFontPadding* unk8;
	u8 bits_per_pixel;
	u8* unk10;
} DBFont;

typedef struct Unk8038F020 {
	u8 pad0[0x2];
	u16 width;
	u16 height;
	u8 pad6[0x2];
	u8 bits_per_pixel;
    u8* unkC;
} Unk8038F020;

typedef struct Unk8038FB90 {
    s32 unk0;
    SYColorRGBA unk4;
    SYColorRGBA unk8;
    s32 unkC;
    s32 unk10;
} Unk8038FB90;

s32 func_ovl8_8037D28C(void);
s32 func_ovl8_8037D384(void);
menuCursorStruct* func_ovl8_8037D3AC(menuCursorStruct*);
menuCursorStruct* func_ovl8_8037D3DC(menuCursorStruct*);
menuCursorStruct* func_ovl8_8037D434(menuCursorStruct*);
void func_ovl8_8037D45C(void);
void func_ovl8_8037D990(s32);
extern "C" void func_ovl8_8037D9D0(SYColorRGBA*);
extern "C" void func_ovl8_8037D9B4(SYColorRGBA*);
void func_ovl8_8037D9EC(u16, u16);
void func_ovl8_8037D99C(s32);
void func_ovl8_8037D9A8(s32);

#endif // _OVL8_13_H
