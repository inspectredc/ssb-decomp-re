#include "ovl8_11.hpp"

Unk8037C710* Unk8037C710::func_ovl8_8037C660(Unk80372790* arg0, UnkA1* arg1) {
    void* raw;
    Sprite* sp34;
    Sprite* sp30;

    func_ovl8_8037C6DC(arg1, &sp34, &sp30);

    raw = ::operator new(sizeof(Unk8037C710));
    return new (raw) Unk8037C710(arg1, sp34, sp30, arg0);
}

void Unk8037C710::func_ovl8_8037C6DC(UnkA1* arg0, Sprite** arg1, Sprite** arg2) {
    if (arg0->unk24 != NULL) {
        *arg1 = ((Sprite**)arg0->unk24)[0];
        *arg2 = ((Sprite**)arg0->unk24)[1];
    } else {
        *arg1 = *arg2 = NULL;
    }
}

Unk8037C710::Unk8037C710() {
    func_ovl8_8037CA50();
}

Unk8037C710::Unk8037C710(UnkA1* arg1, Sprite* arg2, Sprite* arg3, Unk80372790* arg4) : Unk80373C10(arg1, arg4), Unk80372430(arg1, arg4, (arg2 != NULL) ? arg2 : arg3) {
    s32 var_v0;
    func_ovl8_8037CA50();
    this->unkB0 = arg3;
    this->unkB4 = arg2;
    switch (arg1->unk14) {
        case 'SBTN':
            var_v0 = 0;
            break;
        case 'STGB':
            var_v0 = 1;
            break;
        case 'SOPB':
            var_v0 = 2;
            break;
        default:
            var_v0 = 0;
            break;
    }
    this->unk3C = var_v0;
}

Unk8037C710::~Unk8037C710() {
// FAKE
#line 53
}

void Unk8037C710::func_ovl8_80371ABC() {
    this->ovl83unk8 = (this->ovl85unk0 != 0.0f) ? (this->unkB0 ? this->unkB0 : this->unkB4) : this->unkB4;
    Unk80372430::func_ovl8_80371ABC();
}

void Unk8037C710::func_ovl8_8037CA48() {

}

void Unk8037C710::func_ovl8_8037CA50() {
    this->unkB0 = this->unkB4 = NULL;
}
