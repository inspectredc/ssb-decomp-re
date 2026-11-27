#include "ovl8/ovl8_11_1.hpp"

extern "C" void func_ovl8_803787C0(Sprite* src_sprite, Sprite* dst_sprite, DBMenuPosition* src_rect, Vec2h* dst_rect);

Unk8037CAF0* Unk8037CAF0::func_ovl8_8037CA60(Unk80372790* arg0, UnkA1* arg1) {
    void* raw;
    Sprite* sp2C;
    Sprite* sp28;

    sp2C = NULL;
    sp28 = NULL;
    if (arg1->unk24 != NULL) {
        sp2C = ((Sprite**)arg1->unk24)[0];
        sp28 = ((Sprite**)arg1->unk24)[1];
    }

    raw = ::operator new(sizeof(Unk8037CAF0));
    return new (raw) Unk8037CAF0(arg1, sp2C, sp28, arg0);
}

Unk8037CAF0::Unk8037CAF0 () {
    func_ovl8_8037CE30();
}

Unk8037CAF0::Unk8037CAF0(UnkA1* arg1, Sprite* arg2, Sprite* arg3, Unk80372790* arg4) : Unk80373C10(arg1, arg4) {
    s32 var_v0;

    func_ovl8_8037CE30();
    this->unk40 = arg3;
    this->unk44 = arg2;
    switch (arg1->unk14) {
        case 'BBTN':
            var_v0 = 0;
            break;
        case 'BTGB':
            var_v0 = 1;
            break;
        case 'BOPB':
            var_v0 = 2;
            break;
        default:
            var_v0 = 0;
            break;
    }
    this->unk3C = var_v0;
    func_ovl8_80371D00();
}

Unk8037CAF0::~Unk8037CAF0() {
}

void Unk8037CAF0::func_ovl8_80371D00() {
    Sprite* sp34;
    Sprite* sp30;
    DBMenuPosition sp28;
    Vec2h sp24;

    sp30 = (this->ovl85unk0 != 0.0f) ? (this->unk40 ? this->unk40 : this->unk44) : this->unk44;
    if (sp30 != NULL) {
        this->func_ovl8_80371C50(&sp28);
        sp24.x = sp28.x;
        sp24.y = sp28.y;
        sp28.x = sp28.y = 0;
        sp34 = this->func_ovl8_80371CB8();
        func_ovl8_803787C0(sp30, sp34, &sp28, &sp24);
    }
}

void Unk8037CAF0::func_ovl8_8037CE30() {
}
