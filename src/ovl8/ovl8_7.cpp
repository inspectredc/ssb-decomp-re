#include "ovl8/ovl8_7.hpp"

extern "C" void func_ovl8_8037B3E4(Sprite*);
extern "C" Sprite* func_ovl8_8037ACAC(s32, s32, s32, s32, s32);
extern "C" void func_ovl8_8037B46C(Sprite*, DBMenuPosition*, void*, s32);
extern "C" void func_ovl8_80376B60(s32 arg0, SYColorRGBA* arg1, void* arg2);
extern "C" void func_ovl8_80377AEC(Sprite* arg0, DBMenuPosition* arg1, SYColorRGBA* arg2, s32 arg3);
extern "C" void func_ovl8_8037BE34(GObj* arg0);
extern "C" void func_ovl8_8037BE94(GObj* arg0);
extern "C" void func_ovl8_803772AC(void* arg0);

Unk80376530::Unk80376530(UnkA1* arg1, Sprite* arg2, s32 arg3) : Unk80372790(arg1), Unk80371FB0(arg1, arg2) {
    s32 sp4C;
    DBMenuPosition sp44;
    s32 sp40;
    s32 sp3C;
    
    
    if ((arg1->unk14 == 'BHWN') || (arg1->unk14 == 'BFHW')) {
        this->func_ovl8_803755C4();
    }

    if (arg1->unk10 == 1) {
        sp4C = 2;
        sp40 = 0x40;
        sp3C = 0x20;
    } else if (arg1->unk10 == 4) {
        sp4C = 3;
        sp40 = 0x20;
        sp3C = 0x20;
    } else if (arg1->unk10 == 6) {
        sp4C = 1;
        sp40 = 0x40;
        sp3C = 0x20;
    }
    this->unkA8 = NULL;
    if (arg2 == NULL) {
        this->unkA8 = this->ovl83unk8 = func_ovl8_8037ACAC(arg1->unk0.w, arg1->unk0.h, sp4C, sp40, sp3C);
        if (arg1->unk10 == 6) {
            s32 sp34;
            func_ovl8_80376B60(2, &this->unk14, &sp34);
            *(s16*)this->ovl83unk8->LUT = sp34;
            func_ovl8_80376B60(2, &this->unk18, &sp34);
            *((s16*)this->ovl83unk8->LUT + 255) = sp34;
        } else {
            sp44 = arg1->unk0;
            sp44.x = 0;
            sp44.y = 0;
            func_ovl8_80377AEC(this->ovl83unk8, &sp44, &arg1->unkC, 4);
        }
        func_ovl8_803723AC((s32)this, this->ovl83unk8, func_ovl8_8037BE34, func_ovl8_8037BE94, arg3);
        this->unk2.x = arg1->unk0.x;
        this->unk2.y = arg1->unk0.y;
        func_ovl8_80371DC0(arg1->unk0.x, arg1->unk0.y);
    } else if (arg2 != (void* )-1) {
        this->ovl83unk8 = arg2;
        func_ovl8_803723AC((s32)this, arg2, func_ovl8_8037BE34, func_ovl8_8037BE94, arg3);
        this->unk2.x = arg1->unk0.x;
        this->unk2.y = arg1->unk0.y;
        func_ovl8_80371DC0(arg1->unk0.x, arg1->unk0.y);
    }
    if (arg1->unk0.x == -0x2710) {
        func_ovl8_803772AC(this);
    }
}

Unk80376530* Unk80376530::func_ovl8_80376848(UnkA1* arg1) {
    s32 sp20;
    void* raw;

    switch (arg1->unk14) {
        case 'BFHW':
        case 'BFWN':
            sp20 = 1;
            break;
        default:
            sp20 = 0;
            break;
    }

    raw = ::operator new(sizeof(Unk80376530));
    return new (raw) Unk80376530(arg1, arg1->unk24, sp20);
}

Unk80376530::~Unk80376530() {
    if (this->unkA8) {
        func_ovl8_8037B3E4(this->unkA8);
    }
}

GObj* Unk80376530::func_ovl8_80372A3C() {
    return this->ovl83unk0;
}

void Unk80376530::func_ovl8_80372A48(Unk80372790_Unk28* arg1) {
    Unk80372790::func_ovl8_80372A48(arg1);
}

s32 Unk80376530::func_ovl8_80371C1C(menuCursorStruct* arg1) {

    this->func_ovl8_80373044(arg1);
    return 1;
}

void Unk80376530::func_ovl8_80371ABC() {

    Unk80371FB0::func_ovl8_80371ABC();
    Unk803751C0::func_ovl8_80371ABC();
    this->func_ovl8_80372FEC();
}

void Unk80376530::func_ovl8_80371D64(s16 arg1, s16 arg2) {
    spMove(this->ovl83unk8, this->unk2.x + arg1, this->unk2.y + arg2);
}

void Unk80376530::func_ovl8_80371DC0(s16 arg1, s16 arg2) {
    spMove(this->ovl83unk8, arg1, arg2);
}

void Unk80376530::func_ovl8_80372FEC(void) {
    Unk80372790_Unk28* temp_v0;
    void* temp_v1;

    temp_v0 = func_ovl8_80373160();

    if (temp_v0 == NULL) {
        return;
    }
    while (temp_v0 != NULL) {
        if (temp_v0->func_ovl8_80371E0C() != 0) {
            temp_v0->func_ovl8_80371A2C();
        }
        temp_v0 = temp_v0->ovl85unk28;
    }
}
