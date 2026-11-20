#include "ovl8/ovl8_2.hpp"

ovl8_803717E0::ovl8_803717E0() {
    func_ovl8_80371EA0();
}

ovl8_803717E0::ovl8_803717E0(UnkA1* arg1) {
    func_ovl8_80371ECC(arg1);
}

ovl8_803717E0* ovl8_803717E0::func_ovl8_80371878(UnkA1* arg1) {
    void* raw = ::operator new (sizeof(ovl8_803717E0));

    return new (raw) ovl8_803717E0(arg1);
}

ovl8_803717E0::~ovl8_803717E0() {
    
}

void ovl8_803717E0::func_ovl8_803718FC() {
    this->unk20 = 1;
    this->func_ovl8_80371960();
}

void ovl8_803717E0::func_ovl8_80371930() {
    this->unk20 = 0;
    this->func_ovl8_80371968();
}

void ovl8_803717E0::func_ovl8_80371960() {
}

void ovl8_803717E0::func_ovl8_80371968() {
}

void ovl8_803717E0::func_ovl8_80371970() {
}

void ovl8_803717E0::func_ovl8_80371978() {
}

void ovl8_803717E0::func_ovl8_80371980(Vec2h* arg1) {
    arg1->x -= this->unk2.x;
    arg1->y -= this->unk2.y;
}

void ovl8_803717E0::func_ovl8_803719A4(Sprite* arg1) {
    arg1->x += this->unk2.x;
    arg1->y += this->unk2.y;
}

void ovl8_803717E0::func_ovl8_803719C8(Vec2h* arg1) {

    this->func_ovl8_80371AD8(arg1);

    if (this->unk4C != NULL) {
        this->func_ovl8_80371980(arg1);
    }
}

void ovl8_803717E0::func_ovl8_80371A2C() {

    ovl8_803717E0::func_ovl8_80371E58();
    if (this->func_ovl8_80371E0C() != 0) {
        this->func_ovl8_80371D00();
    }
    if (this->unk1C != 0) {
        this->func_ovl8_80371ABC();
    }
    this->func_ovl8_80371E04(0);
}

void ovl8_803717E0::func_ovl8_80371ABC() {
}

void ovl8_803717E0::func_ovl8_80371AC4() {
}

void ovl8_803717E0::func_ovl8_80371ACC(s32 /* arg1 */) {
}

void ovl8_803717E0::func_ovl8_80371AD8(Vec2h* arg1) {

    if (this->unk4C != NULL) {
        this->unk4C->func_ovl8_80371AD8(arg1);
    } else {
        this->func_ovl8_80371980(arg1);
    }
}

s32 ovl8_803717E0::func_ovl8_80371B34(Vec2h* arg1) {

    if (this->unk4C != NULL) {
        this->func_ovl8_80371AD8(arg1);
    }
    return this->func_ovl8_80371B98(arg1);
}

s32 ovl8_803717E0::func_ovl8_80371B98(Vec2h* arg1) {
    return func_ovl8_80377168(*arg1, &this->unk2);
}

s32 ovl8_803717E0::func_ovl8_80371BCC(menuCursorStruct* arg1) {

    if ((this->unk1C == 0) || (this->unk20 == 0)) {
        return 0;
    }

    return this->func_ovl8_80371C1C(arg1);
}

s32 ovl8_803717E0::func_ovl8_80371C1C(menuCursorStruct* /* arg1 */) {
    return 0;
}

void ovl8_803717E0::func_ovl8_80371C2C(DBMenuPosition* arg1) {
    *arg1 = this->unk2;
}

void ovl8_803717E0::func_ovl8_80371C50(DBMenuPosition* arg1) {
    *arg1 = this->unk2;
    if (this->unk4C == 0) {
        arg1->x = arg1->y = 0;
    }
}

void ovl8_803717E0::func_ovl8_80371C8C(DBMenuPosition* arg1) {
    *arg1 = this->unk2;
    arg1->x = arg1->y = 0;
}

Sprite* ovl8_803717E0::func_ovl8_80371CB8() {

    if (this->unk4C != NULL) {
        return this->unk4C->func_ovl8_80371CB8();
    }
    return NULL;
}

void ovl8_803717E0::func_ovl8_80371D00() {
}

void ovl8_803717E0::func_ovl8_80371D08(s16 arg1, s16 arg2) {
    // clang-format off
    this->unk2.x += arg1; this->unk2.y += arg2;
    // clang-format on
    this->func_ovl8_80371D64(arg1, arg2);
}

void ovl8_803717E0::func_ovl8_80371D64(s16 /* arg1 */, s16 /* arg2 */) {
}

void ovl8_803717E0::func_ovl8_80371D74(s16 arg1, s16 arg2) {
    // clang-format off
    this->unk2.x = arg1; this->unk2.y = arg2;
    // clang-format on
    this->func_ovl8_80371DC0(arg1, arg2);
}

void ovl8_803717E0::func_ovl8_80371DC0(s16 /* arg1 */, s16 /* arg2 */) {
}

void ovl8_803717E0::func_ovl8_80371DD0() {
    this->unk1C = 1;
}

void ovl8_803717E0::func_ovl8_80371DDC() {
    this->unk1C = 0;
}

s32 ovl8_803717E0::func_ovl8_80371DE4() {
    return this->unkC;
}

void ovl8_803717E0::func_ovl8_80371DEC() {
}

void ovl8_803717E0::func_ovl8_80371DF4() {
}

void ovl8_803717E0::func_ovl8_80371DFC() {
}

void ovl8_803717E0::func_ovl8_80371E04(s32 arg1) {
    this->unk28 = arg1;
}

s32 ovl8_803717E0::func_ovl8_80371E0C() {
    return this->unk28;
}

void ovl8_803717E0::func_ovl8_80371E14() {
}

void ovl8_803717E0::func_ovl8_80371E1C() {
}

void ovl8_803717E0::func_ovl8_80371E24(void (*arg1)(void)) {
    this->unk54 = arg1;
}

void ovl8_803717E0::func_ovl8_80371E2C() {
    this->func_ovl8_80371E14();
}

void ovl8_803717E0::func_ovl8_80371E58() {

    if (this->unk54 != NULL) {
        this->unk54();
    }
    this->func_ovl8_80371E1C();
}

void ovl8_803717E0::func_ovl8_80371EA0() {
    this->unk4C = 0;
    this->unk48 = NULL;
    this->unkC = 'PANE';
    this->unk1C = 1;
    this->unk20 = 1;
    this->unk28 = 0;
    this->unk54 = NULL;
}

void ovl8_803717E0::func_ovl8_80371ECC(UnkA1* arg1) {
    func_ovl8_80371EA0();
    this->unk2 = arg1->unk0;
    this->unk14 = arg1->unk8;
    this->unk18 = arg1->unkC;
    this->unk50 = arg1->unkC.r;
    this->unk51 = arg1->unkC.g;
    this->unk52 = arg1->unkC.b;
    this->unk53 = arg1->unkC.a;
    this->unkC = arg1->unk18;
    this->unk10 = arg1->unk14;
    this->unk24 = arg1->unk10;
    this->unk2C = 0;
    this->unk30 = 0x8000;
    this->unk34 = 0x4000;
    this->unk38 = 0x800;
    this->unk3C = 0x400;
    this->unk40 = 0x100;
    this->unk44 = 0x200;
}
