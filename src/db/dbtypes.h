#ifndef _DBTYPES_H_
#define _DBTYPES_H_

#include <ssb_types.h>
#include <sys/obj.h>
#include <sys/controller.h>

#include "dbdef.h"

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
	u32* unk10;
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

struct DBMenuOption
{
	s32 type;
	void (*proc_a)();
	char *label;

	union
	{
		void *def;		// So that no complaints are made by the compiler about incompatible pointer assignment...
		s32 *s;
		u32 *w;
		u8 *b;
		f32 *f;
		void **p;

	} value;

	f32 min;
	f32 max;
	f32 unknown18;
};

struct DBMenuPosition
{
	s16 x;
	s16 y;
	u16 w;
	u16 h;
};

struct DBMenu
{
	DBMenuPosition position;
	SYColorRGBA text_color;
    SYColorRGBA bg_color;
    u16 unk_dbmenu_0x10;
    u16 unk_dbmenu_0x12;
    s32 id;
    s32 unk_dbmenu_0x18;
    s16 unk_dbmenu_0x1C;
    s32 unk_dbmenu_0x20;
    s32 unk_dbmenu_0x24;
};

struct DBFighter
{
	u8 fkind;
	u8 costume;
	GObj *fighter_gobj;
};

struct DBTextBuffer
{
	void *font_buffer;
	u32 font_buffer_size;
	u32 unk_dbtextbuf_0x8;
};

#endif
