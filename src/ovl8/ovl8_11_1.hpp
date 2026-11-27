#ifndef _OVL8_11_1_H
#define _OVL8_11_1_H

#include "ovl8/ovl8_5.hpp"
extern "C" {
#include <sys/objtypes.h>
}

class Unk8037CAF0 : public Unk80373C10 {
public:
    static Unk8037CAF0* func_ovl8_8037CA60(Unk80372790* arg0, UnkA1* arg1);
    Unk8037CAF0();
    Unk8037CAF0(UnkA1* arg1, Sprite* arg2, Sprite* arg3, Unk80372790* arg4);
    virtual ~Unk8037CAF0();

    virtual void func_ovl8_80371D00(void);
    void func_ovl8_8037CE30(void);

    Sprite* unk40;
    Sprite* unk44;
    u8 pad48[0x8];
};

#endif // _OVL8_11_1_H
