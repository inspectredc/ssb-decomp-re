#include "ovl8/ovl8_6_1.hpp"

extern "C" {
#include <sys/obj.h>
#include <sys/objman.h>
#include <sys/controller.h>
#include <sys/video.h>
}

extern Unk80375920* D_8038EFCC_1AB7EC;
extern Vec2h D_8038EFB0_1AB7D0;
extern Vec2hPair D_8038EFB8_1AB7D8;

void func_ovl8_803758B0(void) {
    D_8038EFCC_1AB7EC->func_ovl8_80371DD0();
}

void func_ovl8_803758E8(void) {
    D_8038EFCC_1AB7EC->func_ovl8_80371DDC();
}

Unk80375920::Unk80375920() {
    this->unk14 = 0;
    this->unk16 = 0;
    D_8038EFB0_1AB7D0.x = gSYVideoResWidth / 2;
    D_8038EFB0_1AB7D0.y = gSYVideoResHeight / 2;
}

Unk80375920::Unk80375920(UnkA1* arg2, Sprite* arg3) : Unk80371FB0(arg2, arg3) {
    this->unk14 = 0;
    this->unk16 = 0;
    D_8038EFB0_1AB7D0.x = gSYVideoResWidth / 2;
    D_8038EFB0_1AB7D0.y = gSYVideoResHeight / 2;
    this->unk18 = 0;
    D_8038EFB8_1AB7D8.unk0.x = D_8038EFB8_1AB7D8.unk0.y = 0;
    D_8038EFB8_1AB7D8.unk4.x = gSYVideoResWidth - 1;
    D_8038EFB8_1AB7D8.unk4.y = gSYVideoResHeight - 1;
    this->unk1C = 1;
}

Unk80375920::~Unk80375920() {
}

void Unk80375920::func_ovl8_80375B8C(u16 arg1, u16 arg2) {
    this->unk14 = arg1; this->unk16 = arg2;
}

void Unk80375920::func_ovl8_80375BA0(u16* arg1, u16* arg2) {
    *arg1 = this->unk14;
    *arg2 = this->unk16;
}

void Unk80375920::func_ovl8_80375BB4(Vec2h* arg0) {
    *arg0 = D_8038EFB0_1AB7D0;
}

void Unk80375920::func_ovl8_80375BD0(Vec2h* arg0) {
    D_8038EFB0_1AB7D0 = *arg0;
}

void Unk80375920::func_ovl8_80371ACC(GObj* arg1) {
    s32 x;
    s32 y;
    SObj* temp_v0;

    temp_v0 = SObjGetStruct(arg1);
    if (this->unk1C != 0) {
        func_ovl8_80375E60();
    }
    x = D_8038EFB0_1AB7D0.x - this->unk14;
    y = D_8038EFB0_1AB7D0.y - this->unk16;
    spMove(&temp_v0->sprite, x, y);
}

void Unk80375920::func_ovl8_80375C54() {

    if (this->ovl83unk0 != 0) {
        func_8000A24C(this->ovl83unk0, 0);
    }

    if (this->ovl83unk4 != NULL) {
        func_80009C90(this->ovl83unk4, 0, -1);
        this->ovl83unk4->id = -0x1FE;
    }
}

s16 Unk80375920::func_ovl8_80375CB8(s16 arg1) {
    s16 var_v0;

    var_v0 = (arg1 * arg1) / 64;
    if (var_v0 == 0) {
        return 0;
    }
    var_v0 /= 12;
    if (var_v0 == 0) {
        var_v0 = 1;
    } else if (var_v0 > 0x10) {
        var_v0 = 0x10;
    }
    
    return (arg1 < 0) ? -var_v0 : var_v0;
}

void Unk80375920::func_ovl8_80375D44(s32 arg1) {
    this->unk18 = arg1;
}

s32 Unk80375920::func_ovl8_80375D4C() {
    return this->unk18;
}

void Unk80375920::func_ovl8_80375D54(Vec2hPair* arg1) {
    D_8038EFB8_1AB7D8 = *arg1;
}

void Unk80375920::func_ovl8_80375D84() {

    if (D_8038EFB0_1AB7D0.x < D_8038EFB8_1AB7D8.unk0.x) {
        D_8038EFB0_1AB7D0.x = D_8038EFB8_1AB7D8.unk0.x;
    } else if (D_8038EFB8_1AB7D8.unk4.x < D_8038EFB0_1AB7D0.x) {
        D_8038EFB0_1AB7D0.x = D_8038EFB8_1AB7D8.unk4.x;
    }
    if (D_8038EFB0_1AB7D0.y < D_8038EFB8_1AB7D8.unk0.y) {
        D_8038EFB0_1AB7D0.y = D_8038EFB8_1AB7D8.unk0.y;
    } else if (D_8038EFB8_1AB7D8.unk4.y < D_8038EFB0_1AB7D0.y) {
        D_8038EFB0_1AB7D0.y = D_8038EFB8_1AB7D8.unk4.y;
    }
}

void Unk80375920::func_ovl8_80375E00(s32 arg1) {
    this->unk1C = arg1;
}

void Unk80375920::func_ovl8_80375E08(Sprite* arg1, s32 arg2, u16 arg3, u16 arg4) {

    this->func_ovl8_80372360(arg1);
    func_ovl8_80375B8C(arg3, arg4);
    this->unkC = arg2;
}

extern u16 D_ovl8_80389F30;
extern u16 D_ovl8_80389F34;
extern u16 D_ovl8_80389F3C;
extern u16 D_ovl8_80389F38;
extern s16 D_ovl8_80389F40;
extern s16 D_ovl8_80389F44;
extern "C" u32 func_ovl8_80377244(void);

void Unk80375920::func_ovl8_80375E60() {
    s32 temp_v0;
    s16 sp1A;
    s16 sp18;
    SYController* controller = &gSYControllerMain;
    u32 x;
    u32 y;

    if (this->unk18 == 1) {
        return;
    }
    if (D_ovl8_80389F30 == 0xFFFF) {
        // FAKE
        D_8038EFB0_1AB7D0.x = (gSYVideoResWidth / 2) + (gSYControllerMain.stick_range.x * 2);
        D_8038EFB0_1AB7D0.y = (y = ((gSYVideoResHeight / 2) - (controller->stick_range.y * 2))) & 0xFFFF;
    } else if (D_ovl8_80389F30 == 0xFFFE) {
        D_8038EFB0_1AB7D0.x += func_ovl8_80375CB8(controller->stick_range.x);
        D_8038EFB0_1AB7D0.y -= func_ovl8_80375CB8(controller->stick_range.y);
    } else {
        sp18 = 0;
        sp1A = 0;
        temp_v0 = func_ovl8_80377244();
        if (temp_v0 & D_ovl8_80389F30) {
            sp18 = -D_ovl8_80389F44;
        }
        if (temp_v0 & D_ovl8_80389F34) {
            sp18 = D_ovl8_80389F44;
        }
        if (temp_v0 & D_ovl8_80389F3C) {
            sp1A = -D_ovl8_80389F40;
        }
        if (temp_v0 & D_ovl8_80389F38) {
            sp1A = D_ovl8_80389F40;
        }
        D_8038EFB0_1AB7D0.x += sp1A; D_8038EFB0_1AB7D0.y += sp18;
    }
    func_ovl8_80375D84();
}

// New File?

extern "C" void func_ovl8_8037BE34(GObj* arg0);
extern "C" void func_ovl8_8037BE94(GObj* arg0);
extern "C" void func_ovl8_803772AC(void* arg0);

Unk80376010::Unk80376010(UnkA1* arg1, s32 arg2) : Unk80372790(arg1), Unk80371FB0(arg1, NULL) {
    if ((arg1->unk14 == 'FHWN') || (arg1->unk14 == 'FFHW')) {
        this->func_ovl8_803755C4();
    }
    func_ovl8_803723AC((s32)this, NULL, func_ovl8_8037BE34, func_ovl8_8037BE94, arg2);
    if (arg1->unk0.x == -0x2710) {
        func_ovl8_803772AC(this);
    }
}

Unk80376010* Unk80376010::func_ovl8_80376164(UnkA1* arg1) {
    s32 sp20;
    void* raw;

    switch (arg1->unk14) {
        case 'FFHW':
        case 'FFWN':
            sp20 = 1;
            break;
        default:
            sp20 = 0;
            break;
    }

    raw = ::operator new(sizeof(Unk80376010));
    return new (raw) Unk80376010(arg1, sp20);
}

Unk80376010::~Unk80376010() {
// same compiler diff as constructor issues?
}

GObj* Unk80376010::func_ovl8_80372A3C() {
    return this->ovl83unk0;
}

void Unk80376010::func_ovl8_80371ABC() {
    Gfx* gfx; // todo: need to remove gfx stack

    if (this->unk18.a != 0) {
        gDPPipeSync(gSYTaskmanDLHeads[0]++);
        gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_FILL);
        gDPSetFillColor(gSYTaskmanDLHeads[0]++, syVideoGetFillColor(GPACK_RGBA8888(this->unk18.r, this->unk18.g, this->unk18.b, this->unk18.a)));
        gfx = gSYTaskmanDLHeads[0]++;
        gDPFillRectangle(gfx, this->unk2.x, this->unk2.y, this->unk2.x + this->unk2.w - 1, this->unk2.y + this->unk2.h - 1);
        gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
    }
    Unk803751C0::func_ovl8_80371ABC();
    this->func_ovl8_80372FEC();
}

s32 Unk80376010::func_ovl8_80371C1C(menuCursorStruct* arg1) {
    s32 temp_a0;

    temp_a0 = this->func_ovl8_80373044(arg1);

    if (this->unk18.a == 0) {
        return temp_a0;
    }
    return 1;
}
