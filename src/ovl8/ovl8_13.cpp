#include "ovl8/ovl8_13.hpp"
#include "ovl8/ovl8_13_2.hpp"

extern "C" {
#include <sys/controller.h>
}

extern "C" void func_ovl8_80377134(SYColorRGBA*, s32);
extern "C" void func_ovl8_8037726C(Vec2h*);
extern "C" void func_ovl8_803798A0(Sprite* sprite, u8* dst, s32 dst_w, s32 dst_h, Vec2h* pos, s32 arg5);

GObj* D_ovl8_8038A860 = NULL;
s16 D_ovl8_8038A864 = 16;
OSTime D_ovl8_8038A868 = 0;
OSTime D_ovl8_8038A870 = 0;
OSTime D_ovl8_8038A878 = 250000;
OSTime D_ovl8_8038A880 = 500000;
UNUSED s32 D_8038A888_1A70D8 = 0;
UNUSED s32 D_8038A888_1A70DC = 0;

extern u8 D_8038F050_1AB8A0[1];
extern u8 D_8038F290_1ABAE0[1];
extern s16 D_8038EFFC_1AB6CC;
extern menuCursorStruct D_8038EFE0_1AB6B0;
extern s32 D_8038EFEC_1AB6BC;
extern menuCursorStruct D_8038EFF0_1AB6C0;
extern Vec2h D_8038F000_1AB6D0;
extern DBFont D_8038F008_1AB6D8;
extern Unk8038F020 D_8038F020_1AB6F0;
extern u16 D_8038F030_1AB700;
extern u16 D_8038F032_1AB702;
extern f32 D_8038F034_1AB704;
extern f32 D_8038F038_1AB708;
extern void(*D_8038F03C_1AB70C)(u16 arg0, u16 arg1, u8* arg2, u8* arg3);
extern void(*D_8038F040_1AB710)(u16 arg0, u16 arg1, u8* arg2, u8* arg3);
extern u16 D_8038F044_1AB714;
extern u16 D_8038F046_1AB716;
extern u16 D_8038F048_1AB718;
extern Unk8038FB90 D_8038FB90_1AC260;
extern SYColorRGBA D_8038FB98_1AC268;
extern u8 D_8038FBA8_1AC278[];

void func_ovl8_8037D000(GObj* arg0) {
    menuCursorStruct sp54;
    s32 sp50;
    s32 sp4C;
    SYController* controller = &gSYControllerMain;
    OSTime temp_v0;

    if (1) {}

    sp54.button_tap = controller->button_tap;
    sp54.button_update = controller->button_update;
    func_ovl8_8037726C(&sp54.cursor_pos);
    sp50 = 0;
    if (D_ovl8_8038A868 != 0) {
        temp_v0 = osGetTime() * 64ULL / 3000ULL;
        if ((temp_v0 - D_ovl8_8038A868) > D_ovl8_8038A878) {
            sp50 = 1;
        }
    }
    sp54.button_tap &= 0xFFFF;
    sp54.button_update &= 0xFFFF;
    sp4C = func_ovl8_8037D28C();
    if (sp50) {
        temp_v0 = osGetTime() * 64ULL / 3000ULL;
        if (D_ovl8_8038A868 == D_ovl8_8038A870 || (temp_v0 - D_ovl8_8038A870) > D_ovl8_8038A880) {
            sp54.button_update |= sp4C;
            D_ovl8_8038A870 = temp_v0;
        }
    } else if (D_ovl8_8038A868 == 0) {
        sp54.button_tap |= sp4C;
        sp54.button_update |= sp4C;
    }
    if (!sp50 && (sp54.button_tap >> 0x10)) {
        temp_v0 = osGetTime() * 64ULL / 3000ULL;

        D_ovl8_8038A868 = D_ovl8_8038A870 = temp_v0;
    } else if (sp4C == 0) {
        D_ovl8_8038A868 = 0;
    }
    func_ovl8_8037D3DC(&sp54);
}

s32 func_ovl8_8037D28C(void) {
    SYController* controller = &gSYControllerMain;
    s32 var_v1 = 0;
    s32 var_a0;
    s32 var_v0;

    var_v0 = D_ovl8_8038A864; var_a0 = controller->stick_range.x;

    if (var_v0 < var_a0) {
        var_v1 |= 0x40000;
    }
    if (var_a0 < -var_v0) {
        var_v1 |= 0x80000;
    }
    var_a0 = controller->stick_range.y;
    if (var_v0 < var_a0) {
        var_v1 |= 0x10000;
    }
    if (var_a0 < -var_v0) {
        var_v1 |= 0x20000;
    }
    return var_v1;
}

s32 func_ovl8_8037D2F0(void) {

    D_ovl8_8038A860 = gcMakeGObjSPAfter(-0x1FA, func_ovl8_8037D000, 0, -1);
    if (D_ovl8_8038A860 == NULL) {
        return -1;
    }
    func_ovl8_8037D45C();
    D_8038EFFC_1AB6CC = 0;
    return 0;
}

void func_ovl8_8037D34C(void) {
    if (D_ovl8_8038A860 != NULL) {
        gcEjectGObj(D_ovl8_8038A860);
        D_ovl8_8038A860 = NULL;
    }
}

s32 func_ovl8_8037D384(void) {
    return D_8038EFE0_1AB6B0.button_tap || D_8038EFE0_1AB6B0.button_update;
}

menuCursorStruct* func_ovl8_8037D3AC(menuCursorStruct* arg0) {
    *arg0 = D_8038EFE0_1AB6B0;
    D_8038EFE0_1AB6B0.button_tap = 0;
    D_8038EFE0_1AB6B0.button_update = 0;
    return arg0;
}

menuCursorStruct* func_ovl8_8037D3DC(menuCursorStruct* arg0) {
    D_8038EFE0_1AB6B0 = *arg0;
    return arg0;
}

menuCursorStruct* func_ovl8_8037D404(menuCursorStruct* arg0, s32 arg1) {
    D_8038EFEC_1AB6BC = arg1;
    D_8038EFF0_1AB6C0 = *arg0;
    return arg0;
}

menuCursorStruct* func_ovl8_8037D434(menuCursorStruct* arg0) {
    D_8038EFE0_1AB6B0 = *arg0;
    return arg0;
}

void func_ovl8_8037D45C(void) {
    D_8038EFE0_1AB6B0.button_tap = D_8038EFE0_1AB6B0.button_update = 0;
}

void func_ovl8_8037D470(u16 arg0, u16 arg1, u8* arg2, u8* arg3) {
    s32 var_v0;
    s32 var_v1;

    var_v0 = 0;
    var_v1 = 0;
    while (arg0) {
        *arg3++ = (var_v0 & 1) ? *arg2 & 0xF : (*arg2 >> 4) & 0xF;

        if ((var_v0++) & 1) {
            var_v0 = 0;
            arg2++;
        }
        var_v1++;
        if (var_v1 == arg1) {
            if (var_v0 != 0) {
                arg2++;
            }
            var_v0 = 0;
            var_v1 = 0;
        }
        arg0--;
    }
}

void func_ovl8_8037D518(u16 arg0, u16 arg1, u8* arg2, u8* arg3) {
    s32 var_v0;
    s32 var_v1;

    var_v0 = 0;
    var_v1 = 0;
    while (arg0) {
        *arg3++ = (*arg2 >> ((3 - (var_v0 & 3)) * 2)) & 3;
        if (((var_v0++) & 3) == 3) {
            var_v0 = 0;
            arg2++;
        }
        var_v1++;
        if (var_v1 == arg1) {
            if (var_v0 != 0) {
                arg2++;
            }
            var_v0 = 0;
            var_v1 = 0;
        }
        arg0--;
    }
}

void func_ovl8_8037D5AC(u16 arg0, u16 arg1, u8* arg2, u8* arg3) {
    s32 var_v0;
    s32 var_v1;

    var_v0 = 0;
    var_v1 = 0;
    while (arg0) {
        *arg3++ = (*arg2 >> (7 - (var_v0 & 7))) & 1;
        if (((var_v0++) & 7) == 7) {
            var_v0 = 0;
            arg2++;
        }
        var_v1++;
        if (var_v1 == arg1) {
            if (var_v0 != 0) {
                arg2++;
            }
            var_v0 = 0;
            var_v1 = 0;
        }
        arg0--;
    }
}

void func_ovl8_8037D63C(void) {
    SYColorRGBA sp1C = { 255, 255, 255, 255 };
    SYColorRGBA sp18 = { 0, 0, 0, 255 };

    D_8038F000_1AB6D0.x = D_8038F000_1AB6D0.y = 0;
    D_8038F048_1AB718 = 0;
    func_ovl8_8037D990(0x10);
    func_ovl8_8037D9D0(&sp1C);
    func_ovl8_8037D9B4(&sp18);
    func_ovl8_8037D9EC(0, 0);
    func_ovl8_8037D99C(0);
    func_ovl8_8037D9A8(0);
}

extern "C" void func_ovl8_8037D6D4(DBFont* arg0) {
    u16 temp_a1;
    s32 var_v0;

    D_8038F008_1AB6D8 = *arg0;

    temp_a1 = D_8038F008_1AB6D8.width * D_8038F008_1AB6D8.bits_per_pixel;

    if (temp_a1 & 7) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    D_8038F030_1AB700 = ((temp_a1 / 8) + var_v0) * D_8038F008_1AB6D8.height;
    if (D_8038F008_1AB6D8.bits_per_pixel == 1) {
        D_8038F034_1AB704 = 1.0f;
    } else {
        D_8038F034_1AB704 = 1 << D_8038F008_1AB6D8.bits_per_pixel;
    }
    if (D_8038F008_1AB6D8.bits_per_pixel == 1) {
        D_8038F03C_1AB70C = func_ovl8_8037D5AC;
    } else if (D_8038F008_1AB6D8.bits_per_pixel == 2) {
        D_8038F03C_1AB70C = func_ovl8_8037D518;
    } else {
        D_8038F03C_1AB70C = func_ovl8_8037D470;
    }
}

void func_ovl8_8037D7D4(Unk8038F020* arg0) {
    u16 temp_a1;
    s32 var_v0;

    D_8038F020_1AB6F0 = *arg0;

    temp_a1 = D_8038F020_1AB6F0.width * D_8038F020_1AB6F0.bits_per_pixel;
    if (temp_a1 & 7) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    D_8038F032_1AB702 = ((temp_a1 / 8) + var_v0) * D_8038F020_1AB6F0.height;
    if (D_8038F020_1AB6F0.bits_per_pixel == 1) {
        D_8038F038_1AB708 = 1.0f;
    } else {
        D_8038F038_1AB708 = 1 << D_8038F020_1AB6F0.bits_per_pixel;
    }
    if (D_8038F020_1AB6F0.bits_per_pixel == 1) {
        D_8038F040_1AB710 = func_ovl8_8037D5AC;
    } else if (D_8038F020_1AB6F0.bits_per_pixel == 2) {
        D_8038F040_1AB710 = func_ovl8_8037D518;
    } else {
        D_8038F040_1AB710 = func_ovl8_8037D470;
    }
}

void func_ovl8_8037D8CC(u8* arg0) {
    s32 i = 16;
    u8* var_v0 = D_8038FBA8_1AC278;

    while (i--) {
        *var_v0++ = *arg0++;
    }
}

extern "C" void func_ovl8_8037D908(Unk8038FB90* arg0) {
    D_8038FB90_1AC260 = *arg0;
    func_ovl8_8037D9B4(&D_8038FB98_1AC268);
}

extern "C" void func_ovl8_8037D95C(Unk8038FB90* arg0) {
    *arg0 = D_8038FB90_1AC260;
}

void func_ovl8_8037D990(s32 arg0) {
    D_8038FB90_1AC260.unk0 = arg0;
}

void func_ovl8_8037D99C(s32 arg0) {
    D_8038FB90_1AC260.unkC = arg0;
}

void func_ovl8_8037D9A8(s32 arg0) {
    D_8038FB90_1AC260.unk10 = arg0;
}

extern "C" void func_ovl8_8037D9B4(SYColorRGBA* arg0) {
    D_8038FB90_1AC260.unk8 = *arg0;
}

extern "C" void func_ovl8_8037D9D0(SYColorRGBA* arg0) {
    D_8038FB90_1AC260.unk4 = *arg0;
}

void func_ovl8_8037D9EC(u16 arg0, u16 arg1) {
    D_8038F044_1AB714 = arg0;
    D_8038F046_1AB716 = arg1;
}

s32 func_ovl8_8037DA08(u8 arg0, u8 arg1) {

    arg0 &= 0x7F;
    arg1 &= 0x7F;
    if (arg0 & 1) {
        arg1 += 0x1F;
    } else {
        arg1 += 0x7D;
    }

    arg0 = (((arg0 - 0x21) >> 1) + 0x81);

    if (arg1 >= 0x7F) {
        arg1++;
    }

    if (arg0 >= 0xA0) {
        arg0 += 0x40;
    }
    return (((arg0 * 0xC0) + arg1) - 0x6100) * D_8038F032_1AB702;
}

void func_ovl8_8037DAA0(Sprite* arg0, u8 arg1) {
    s32 var_s1;
    u8* var_a2;
    s32 pad = 0;

    func_ovl8_80377134(&D_8038FB98_1AC268, arg0->bmsiz);
    if (D_8038F048_1AB718 & 0xFF00) {
        D_8038F048_1AB718 += arg1;
        var_a2 = &D_8038F020_1AB6F0.unkC[func_ovl8_8037DA08(D_8038F048_1AB718 >> 8, D_8038F048_1AB718)];
        D_8038F040_1AB710(D_8038F020_1AB6F0.width * D_8038F020_1AB6F0.height, D_8038F020_1AB6F0.width, var_a2, D_8038F050_1AB8A0);
        func_ovl8_8037DFF8(arg0, D_8038F020_1AB6F0.width, D_8038F020_1AB6F0.height, 0, 0, D_8038F050_1AB8A0, D_8038F290_1ABAE0, D_8038F038_1AB708);
        func_ovl8_803798A0(arg0, D_8038F290_1ABAE0, D_8038F020_1AB6F0.width, D_8038F020_1AB6F0.height, &D_8038F000_1AB6D0, D_8038FB90_1AC260.unk0);
        D_8038F000_1AB6D0.x += D_8038F020_1AB6F0.width + D_8038F044_1AB714;
        D_8038F048_1AB718 = 0;
    } else if (arg1 & 0x80) {
        D_8038F048_1AB718 = (arg1 << 8) & 0xFF00;
    } else if (((arg1 >= 0x20) && (arg1 < 0x7F)) || ((arg1 >= 0xA0) && (arg1 < 0xE0))) {
        var_s1 = (arg1 > 0xA0) ? arg1 - 0x41 : arg1 - 0x20;
        var_a2 = &D_8038F008_1AB6D8.unk10[D_8038F030_1AB700 * var_s1];
        D_8038F03C_1AB70C(D_8038F008_1AB6D8.width * D_8038F008_1AB6D8.height, D_8038F008_1AB6D8.width, var_a2, D_8038F050_1AB8A0);
        func_ovl8_8037DFF8(arg0, D_8038F008_1AB6D8.width, D_8038F008_1AB6D8.height, D_8038F008_1AB6D8.unk8[var_s1].left_padding, D_8038F008_1AB6D8.unk8[var_s1].right_padding, D_8038F050_1AB8A0, D_8038F290_1ABAE0, D_8038F034_1AB704);
        func_ovl8_803798A0(arg0, D_8038F290_1ABAE0, (D_8038F008_1AB6D8.width - D_8038F008_1AB6D8.unk8[var_s1].left_padding) - D_8038F008_1AB6D8.unk8[var_s1].right_padding, D_8038F008_1AB6D8.height, &D_8038F000_1AB6D0, D_8038FB90_1AC260.unk0);
        D_8038F000_1AB6D0.x = (((D_8038F000_1AB6D0.x + D_8038F008_1AB6D8.width) - D_8038F008_1AB6D8.unk8[var_s1].left_padding) - D_8038F008_1AB6D8.unk8[var_s1].right_padding) + D_8038F044_1AB714;
    }
}
