#include "ovl8/ovl8_13.hpp"

extern Vec2h D_8038F000_1AB6D0;
extern DBFont D_8038F008_1AB6D8;
extern Unk8038F020 D_8038F020_1AB6F0;
extern Unk8038FB90 D_8038FB90_1AC260;
extern u16 D_8038F044_1AB714;
extern u16 D_8038F046_1AB716;
extern u16 D_8038F048_1AB718;
extern u8 D_8038FBA8_1AC278[];

extern "C" void func_ovl8_8037DD60(Sprite* arg0, char* arg1) {
    s32 temp_s5;

    temp_s5 = D_8038F000_1AB6D0.x;
    while (*arg1) {
        if (*arg1 == '\n') {
            D_8038F000_1AB6D0.x = temp_s5;
            D_8038F000_1AB6D0.y += D_8038F008_1AB6D8.height + D_8038F046_1AB716;
        } else {
            func_ovl8_8037DAA0(arg0, *arg1);
        }
        arg1++;
    }
}

void func_ovl8_8037DE1C(Sprite* arg0, u8* arg1, DBMenuPosition* arg2) {
    s32 temp_s6;
    s32 var_s3;
    s32 var_v1;

    temp_s6 = D_8038F000_1AB6D0.x;
    while (*arg1) {
        if (*arg1 == 0xA) {
            D_8038F000_1AB6D0.x = temp_s6;
            D_8038F000_1AB6D0.y += D_8038F008_1AB6D8.height + D_8038F046_1AB716;
        } else {
            if (!(D_8038F048_1AB718 & 0xFF00)) {
                if (*arg1 & 0x80) {
                    var_s3 = D_8038F020_1AB6F0.width + D_8038F044_1AB714;
                } else if (((*arg1 >= 0x20) && (*arg1 < 0x7F)) || ((*arg1 >= 0xA0) && (*arg1 < 0xE0))) {
                    if (*arg1 > 0xA0) {
                        var_v1 = *arg1 - 0x41;
                    } else {
                        var_v1 = *arg1 - 0x20;
                    }
                    var_s3 = ((D_8038F008_1AB6D8.width - D_8038F008_1AB6D8.unk8[var_v1].left_padding) - D_8038F008_1AB6D8.unk8[var_v1].right_padding) + D_8038F044_1AB714;
                }
                if ((D_8038F000_1AB6D0.x + var_s3) >= (arg2->x + arg2->w)) {
                    D_8038F000_1AB6D0.x = temp_s6;
                    D_8038F000_1AB6D0.y += D_8038F008_1AB6D8.height + D_8038F046_1AB716;
                }
            }
            func_ovl8_8037DAA0(arg0, *arg1);
        }
        arg1++;
    }
}

extern "C" void func_ovl8_8037DFCC(s16 arg0, s16 arg1) {
    D_8038F000_1AB6D0.x = arg0; D_8038F000_1AB6D0.y = arg1;
}

void func_ovl8_8037DFF8(Sprite* arg0, u16 arg1, u16 arg2, u8 arg3, u8 arg4, u8* arg5, u8* arg6, f32 arg7) {
    f32 var_f0;
    f32 var_f2;
    f32 var_f14;
    u16 var_s3;
    u16 var_t1;
    u16 temp_v0;
    u16 temp_a1_2;
    u8 var_a1;
    u8 var_a2;
    u8 var_a3;
    u8 var_t0;
    s32 temp_v0_2;

    if (arg7 == 1.0f) {
        var_f14 = var_f2 = var_f0 = 0.0f;
    } else {
        var_f14 = (D_8038FB90_1AC260.unk8.r - D_8038FB90_1AC260.unk4.r) / arg7;
        var_f2 = (D_8038FB90_1AC260.unk8.g - D_8038FB90_1AC260.unk4.g) / arg7;
        var_f0 = (D_8038FB90_1AC260.unk8.b - D_8038FB90_1AC260.unk4.b) / arg7;
    }

    temp_v0 = arg1 - arg4;

    for (var_s3 = 0; var_s3 < arg2; var_s3++) {

        for (var_t1 = arg3; var_t1 < temp_v0; var_t1++) {


            var_a1 = arg5[var_t1];
            temp_v0_2 = var_a1 == 0;
            if (D_8038FB90_1AC260.unkC != 0) {
                var_a1 = ~var_a1;
            }
            if (arg0->bmsiz == 1) {
                *arg6++ = D_8038FBA8_1AC278[arg5[var_t1]];
            } else if (arg0->bmsiz == 2) {
                if (temp_v0_2 != 0) {
                    var_a2 = D_8038FB90_1AC260.unk8.r;
                    var_a3 = D_8038FB90_1AC260.unk8.g;
                    var_t0 = D_8038FB90_1AC260.unk8.b;
                } else {
                    var_a2 = (var_f14 * var_a1) + D_8038FB90_1AC260.unk4.r;
                    var_a3 = (var_f2 * var_a1) + D_8038FB90_1AC260.unk4.g;
                    var_t0 = (var_f0 * var_a1) + D_8038FB90_1AC260.unk4.b;
                }

                temp_a1_2 = ((((var_a2 & 0xF8) << 8)) + (((var_a3 & 0xF8) << 3) & 0x7c0) + (((var_t0 & 0xF8) >> 2) & 0x3e)) + 1;
                *arg6++ = temp_a1_2 >> 8;
                *arg6++ = temp_a1_2;
            } else if (arg0->bmsiz == 3) {
                if (temp_v0_2 != 0) {
                    *arg6++ = D_8038FB90_1AC260.unk8.r;
                    *arg6++ = D_8038FB90_1AC260.unk8.g;
                    *arg6++ = D_8038FB90_1AC260.unk8.b;
                    *arg6++ = D_8038FB90_1AC260.unk8.a;
                } else {
                    *arg6++ = (var_f14 * var_a1) + D_8038FB90_1AC260.unk4.r;
                    *arg6++ = (var_f2 * var_a1) + D_8038FB90_1AC260.unk4.g;
                    *arg6++ = (var_f0 * var_a1) + D_8038FB90_1AC260.unk4.b;
                    *arg6++ = D_8038FB90_1AC260.unk4.a;
                }
            }
        }
        arg5 += arg1;
    }
}

s32 func_ovl8_8037E6F4(char arg0) {
    s32 var_a0;
    s32 var_v0;

    if (D_8038F048_1AB718 & 0xFF00) {
        D_8038F048_1AB718 = 0;
        var_v0 = D_8038F020_1AB6F0.width;
    } else if (arg0 & 0x80) {
        D_8038F048_1AB718 = (arg0 << 8) & 0xFFFF;
        var_v0 = 0;
    } else if (((arg0 >= 0x20) && (arg0 < 0x7F)) || ((arg0 >= 0xA0) && (arg0 < 0xE0))) {
        if (arg0 > 0xA0) {
            var_a0 = arg0 - 0x41;
        } else {
            var_a0 = arg0 - 0x20;
        }
        var_v0 = (D_8038F008_1AB6D8.width - D_8038F008_1AB6D8.unk8[var_a0].left_padding) - D_8038F008_1AB6D8.unk8[var_a0].right_padding;
    } else {
        var_v0 = 0;
    }
    return var_v0;
}

s32 func_ovl8_8037E7A8(char* arg0) {
    s32 var_s1;

    var_s1 = 0;
    if (arg0 == NULL) {
        return 0;
    }
    while (*arg0) {
        var_s1 += func_ovl8_8037E6F4(*arg0++);
    }
    return var_s1;
}

u16 func_ovl8_8037E80C(void) {
    return D_8038F008_1AB6D8.height;
}

u16 func_ovl8_8037E818(void) {
    return D_8038F044_1AB714;
}

u16 func_ovl8_8037E824(void) {
    return D_8038F046_1AB716;
}
