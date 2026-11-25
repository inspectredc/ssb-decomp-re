#include "ovl8/ovl8_10.hpp"

extern "C" {
#include <sys/objman.h>
#include <sys/objhelper.h>
}

s32 Unk8037C3C0::D_ovl8_8038A1B8 = 0;
s32 Unk8037C3C0::D_ovl8_8038A1BC = 0;
GObj* Unk8037C3C0::D_ovl8_8038A1C0 = 0;
GObj* Unk8037C3C0::D_ovl8_8038A1C4 = 0;
GObj* Unk8037C3C0::D_ovl8_8038A1C8 = 0;

u8 D_8038EFD0_1AB7F0;
s32 D_8038EFD4_1AB7F4;

Unk8037C3C0::Unk8037C3C0() {
    this->unk4 = NULL;
    D_ovl8_8038A1BC = 0;
    D_ovl8_8038A1C0 = 0;
    D_ovl8_8038A1C4 = 0;
    D_ovl8_8038A1C8 = 0;
    this->unk8 = gcMakeGObjSPAfter(-0x200, NULL, 0x1F, 3);
}

Unk8037C3C0::~Unk8037C3C0() {
    gcEjectGObj(this->unk8);
}

void Unk8037C3C0::func_ovl8_8037C498(void* arg1) {
    this->unk8->user_data.p = arg1;
}

void Unk8037C3C0::func_ovl8_8037C4A4(s32 arg1) {

    if (this->unk4 != NULL) {
        this->unk4();
    }
    if (D_ovl8_8038A1C0 != 0) {
        func_80009CC8(D_ovl8_8038A1C0, D_8038EFD0_1AB7F0, D_8038EFD4_1AB7F4);
        D_ovl8_8038A1C0 = 0;
        D_ovl8_8038A1B8 = 1;
    }
    D_ovl8_8038A1BC = 0;
}

GObj* Unk8037C3C0::func_ovl8_8037C510() {
    return this->unk8;
}

void Unk8037C3C0::func_ovl8_8037C518(GObj* arg0, u8 arg1, s32 arg2) {
    D_ovl8_8038A1C4 = gcFindGObjByLinkAndID(0x1F, -0x1FD);
    D_ovl8_8038A1C8 = gcFindGObjByLinkAndID(0x1F, -0x1FC);
    D_ovl8_8038A1C0 = arg0;
    D_8038EFD0_1AB7F0 = arg1;
    D_8038EFD4_1AB7F4 = arg2;
}

void* Unk8037C3C0::func_ovl8_8037C584(s32 arg0) {
    void* var_v1;

    D_ovl8_8038A1C4 = gcFindGObjByLinkAndID(0x1F, -0x1FD);
    D_ovl8_8038A1C8 = gcFindGObjByLinkAndID(0x1F, -0x1FC);
    if (arg0 == 0) {
        var_v1 = D_ovl8_8038A1C4;
    } else {
        var_v1 = D_ovl8_8038A1C8;
    }
    return var_v1;
}

void* Unk8037C3C0::func_ovl8_8037C5E8(s32 arg0) {
    GObj* var_v1;

    D_ovl8_8038A1C4 = gcFindGObjByLinkAndID(0x1F, -0x1FD);
    D_ovl8_8038A1C8 = gcFindGObjByLinkAndID(0x1F, -0x1FC);
    if (arg0 == 0) {
        var_v1 = D_ovl8_8038A1C4;
    } else {
        var_v1 = D_ovl8_8038A1C8;
    }
    if (var_v1 == NULL) {
        return NULL;
    }
    return var_v1->user_data.p;
}
