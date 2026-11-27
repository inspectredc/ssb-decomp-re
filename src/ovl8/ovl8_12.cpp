#include "ovl8_12.hpp"

extern "C" {
#include <sys/objman.h>
}

Unk8037CE40::Unk8037CE40() {
    func_ovl8_8037CF4C();
}

Unk8037CE40::Unk8037CE40(UnkA1* arg1) : ovl8_803717E0(arg1) {
    func_ovl8_8037CF4C();
}

Unk8037CE40::~Unk8037CE40() {
#line 16
    gcEjectGObj(this->unk48);
#line 10
}

void Unk8037CE40::func_ovl8_8037CF4C() {
    this->unk64 = 0;
    this->unk5C = this->unk2;
    this->unk48 = gcMakeGObjSPAfter(-0x1FB, 0, 0x1F, 0);
}

void Unk8037CE40::func_ovl8_8037CFAC() {
    if (this->unk64 != NULL) {
        this->unk64();
    }
}

void Unk8037CE40::func_ovl8_8037CFD8(void* arg1) {
    this->get48()->user_data.p = arg1;
}
