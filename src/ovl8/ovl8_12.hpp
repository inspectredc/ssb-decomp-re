#ifndef _OVL8_12_H
#define _OVL8_12_H

#include "ovl8/ovl8_2.hpp"

class Unk8037CE40 : public ovl8_803717E0 {
public:
    Unk8037CE40();
    Unk8037CE40(UnkA1* arg1);
    virtual ~Unk8037CE40();

    void func_ovl8_8037CF4C(void);
    void func_ovl8_8037CFAC(void);
    void func_ovl8_8037CFD8(void* arg1);

    DBMenuPosition unk5C;
    void (*unk64)(void);
};

#endif // _OVL8_12_H
