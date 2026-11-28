#include "ovl8/ovl8_14.hpp"
#include "ovl8/ovl8_13_2.hpp"

extern SYColorRGBA D_ovl8_80389F4C;
extern SYColorRGBA D_ovl8_80389F50;

extern "C" void func_ovl8_8037B434(Sprite*, DBMenuPosition*, s32, SYColorRGBA*);
extern "C" void func_ovl8_8037A5B8(Sprite*, Vec2h*,SYColorRGBA*);

Unk8037EE64* Unk8037EE64::func_ovl8_8037E830(Unk80372790* arg0, UnkA1* arg1) {
    void* raw;

    raw = ::operator new(sizeof(Unk8037EE64));
    return new (raw) Unk8037EE64(arg1, (char*)arg1->unk24, arg0);
}

Unk8037EE64::Unk8037EE64() {
}

Unk8037EE64::Unk8037EE64(UnkA1* arg1, char* arg2, Unk80372790* arg3) : Unk80373C10(arg1, arg3) {
    s32 var_v0;

    this->func_ovl8_80373930(arg2);

    switch (arg1->unk14) {
        case 'BTXB':
            var_v0 = 0;
            break;
        case 'BTTB':
            var_v0 = 1;
            break;
        case 'BTOB':
            var_v0 = 2;
            break;
        default:
            var_v0 = 0;
            break;
    }

    this->unk3C = var_v0;
    func_ovl8_80371D00();
}

void Unk8037EE64::func_ovl8_80371D00() {
    Sprite* sp5C;
    s32 sp58;
    DBMenuPosition sp50;
    Vec2h sp4C;
    SYColorRGBA sp48;
    Unk8038FB90 sp34;

    sp58 = func_ovl8_8037E7A8(this->ovl85unkC);
    func_ovl8_8037D95C(&sp34);
    sp5C = this->func_ovl8_80371CB8();
    this->func_ovl8_80371C50(&sp50);
    func_ovl8_8037D990(0x10);
    if (this->ovl85unk0 != 0.0f) {
        func_ovl8_8037B434(sp5C, &sp50, 1, &this->unk18);
        func_ovl8_8037D9D0(&D_ovl8_80389F50);
        sp4C.x = sp50.x + 6; sp4C.y = sp50.y + 6;
        func_ovl8_8037A5B8(sp5C, &sp4C, &sp48);
        func_ovl8_8037D9B4(&sp48);
        func_ovl8_8037DFCC(sp50.x + (sp50.w / 2) - (sp58 / 2) + 1, sp50.y + 3);
    } else {
        func_ovl8_8037B434(sp5C, &sp50, 0, &this->unk18);
        func_ovl8_8037D9D0(&D_ovl8_80389F4C);
        sp4C.x = sp50.x + 6; sp4C.y = sp50.y + 6;
        func_ovl8_8037A5B8(sp5C, &sp4C, &sp48);
        func_ovl8_8037D9B4(&sp48);
        func_ovl8_8037DFCC(sp50.x + (sp50.w / 2) - (sp58 / 2), sp50.y + (sp50.h / 2) - (func_ovl8_8037E80C() / 2));
    }
    func_ovl8_8037DD60(sp5C, this->ovl85unkC);
    func_ovl8_8037D908(&sp34);
}

Unk8037EE64::~Unk8037EE64() {
}
