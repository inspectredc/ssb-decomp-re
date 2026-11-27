#ifndef _OVL8_11_H
#define _OVL8_11_H

#include "ovl8/ovl8_3_2.hpp"
#include "ovl8/ovl8_5.hpp"
extern "C" {
#include <sys/objtypes.h>
}

class Unk8037C710 : public Unk80373C10, public Unk80372430 {
public:
    static Unk8037C710* func_ovl8_8037C660(Unk80372790* arg0, UnkA1* arg1);
    static void func_ovl8_8037C6DC(UnkA1* arg0, Sprite** arg1, Sprite** arg2);
    Unk8037C710();
    Unk8037C710(UnkA1* arg1, Sprite* arg2, Sprite* arg3, Unk80372790* arg4);
    virtual ~Unk8037C710();


    virtual void func_ovl8_80371ABC(void);
    virtual void func_ovl8_8037CA48(void);
    void func_ovl8_8037CA50(void);

    Sprite* unkB0;
    Sprite* unkB4;
};

#endif // _OVL8_11_H
