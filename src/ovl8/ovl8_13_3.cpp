#include "ovl8/ovl8_13_3.hpp"
#include "ovl8/ovl8_13_2.hpp"
#include "ovl8/ovl8_13.hpp"

extern SYColorRGBA D_ovl8_80389F4C;
extern SYColorRGBA D_ovl8_80389F50;

extern "C" void func_ovl8_8037B85C(s32, s32*, s32*);
extern "C" Sprite* func_ovl8_8037ACAC(s32, s32, s32, s32, s32);
extern "C" void func_ovl8_8037B3E4(Sprite*);
extern "C" void func_ovl8_8037D9B4(SYColorRGBA*);
extern "C" void func_ovl8_8037B434(Sprite*, DBMenuPosition*, s32, SYColorRGBA*);
extern "C" void func_ovl8_8037D9D0(SYColorRGBA*);
extern "C" void func_ovl8_8037A5B8(Sprite*, Vec2h*, SYColorRGBA*);

Unk8037E830* Unk8037E830::func_ovl8_8037E830(Unk80372790* arg0, UnkA1* arg1) {
    void* raw;
    s32 sp2C;

    if (arg1->unk10 == 2) {
        sp2C = 2;
    } else if (arg1->unk10 == 5) {
        sp2C = 3;
    }

    raw = ::operator new(sizeof(Unk8037E830));
    return new (raw) Unk8037E830(arg1, sp2C, (char*)arg1->unk24, arg0);
}

Unk8037E830::Unk8037E830() {
}

Unk8037E830::Unk8037E830(UnkA1* arg1, s32 arg2, char* arg3, Unk80372790* arg4) : Unk8037C710(arg1, NULL, NULL, arg4) {
    s32 pad = 0;
    Sprite* temp_v0;
    s32 var_v0;
    s32 sp40;
    s32 sp3C;

    sp40 = arg1->unk0.w;
    sp3C = arg1->unk0.h;
    func_ovl8_8037B85C(arg2, &sp40, &sp3C);
    temp_v0 = func_ovl8_8037ACAC(arg1->unk0.w, arg1->unk0.h, arg2, sp40, sp3C);
    this->unkB0 = temp_v0;
    this->unkB4 = temp_v0;
    this->ovl83unk8 = temp_v0;
    this->func_ovl8_80373930(arg3);

    switch (arg1->unk14) {
        case 'STBN':
            var_v0 = 0;
            break;
        case 'STTB':
            var_v0 = 1;
            break;
        case 'STOB':
            var_v0 = 2;
            break;
        default:
            var_v0 = 0;
            break;
    }

    this->unk3C = var_v0;
    func_ovl8_80371D00();
}

Unk8037E830::~Unk8037E830() {
    Sprite* temp_a0;

    temp_a0 = this->unkB0;
    this->ovl83unk8 = NULL;
    this->unkB0 = NULL;
    this->unkB4 = NULL;

    if (temp_a0) {
        func_ovl8_8037B3E4(temp_a0);
    }
}

void Unk8037E830::func_ovl8_80371D00(void) {
    DBMenuPosition sp50;
    s32 sp4C;
    Unk8038FB90 sp38;
    Vec2h sp34;
    SYColorRGBA sp30;

    if (this->ovl83unk8 == NULL) {
        return;
    }

    sp4C = func_ovl8_8037E7A8(this->ovl85unkC);
    this->func_ovl8_80371C50(&sp50);
    func_ovl8_8037D95C(&sp38);
    func_ovl8_8037D990(0x10);
    if (0.0f == this->ovl85unk0) {
        func_ovl8_8037B434(this->unkB4, &sp50, 0, &this->unk18);
        func_ovl8_8037D9D0(&D_ovl8_80389F4C);
        sp34.x = sp34.y = 6;
        func_ovl8_8037A5B8(this->unkB4, &sp34, &sp30);
        func_ovl8_8037D9B4(&sp30);
        func_ovl8_8037DFCC((sp50.w / 2) - (sp4C / 2), (sp50.h / 2) - (func_ovl8_8037E80C() / 2));
        func_ovl8_8037DD60(this->unkB4, this->ovl85unkC);
    } else {
        func_ovl8_8037B434(this->unkB0, &sp50, 1, &this->unk18);
        func_ovl8_8037D9D0(&D_ovl8_80389F50);
        sp34.x = sp34.y = 6;
        func_ovl8_8037A5B8(this->unkB0, &sp34, &sp30);
        func_ovl8_8037D9B4(&sp30);
        func_ovl8_8037DFCC((sp50.w / 2) - (sp4C / 2) + 1, (sp50.h / 2) - (func_ovl8_8037E80C() / 2) + 1);
        func_ovl8_8037DD60(this->unkB0, this->ovl85unkC);
    }
    func_ovl8_8037D908(&sp38);
}
