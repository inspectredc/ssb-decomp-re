#ifndef _OVL8_4_H
#define _OVL8_4_H

#include "ovl8/ovl8_5.hpp"
#include "ovl8/ovl8_6.hpp"

class Unk80372790 : public Unk803751C0 {
public:
    Unk80372790();
    Unk80372790(UnkA1* arg3);
    Unk80372790* func_ovl8_80372908(UnkA1* arg1);
    virtual ~Unk80372790();

    virtual GObj* func_ovl8_80372A3C(void);
    virtual void func_ovl8_80372A48(Unk80372790_Unk28* arg1);
    virtual void func_ovl8_80371ACC(GObj* arg1);
    virtual void func_ovl8_80371ABC(void);
    virtual s32 func_ovl8_80371C1C(menuCursorStruct* arg1);
    s32 func_ovl8_80372B98(menuCursorStruct* arg1);
    void func_ovl8_80372C00(void);
    virtual void func_ovl8_80371D74(s16 arg1, s16 arg2);
    virtual void func_ovl8_80371D08(s16 arg1, s16 arg2);
    virtual void func_ovl8_80371D64(s16 arg1, s16 arg2);
    virtual void func_ovl8_80371DC0(s16 arg1, s16 arg2);
    virtual void func_ovl8_80371DFC(void);
    virtual void func_ovl8_80372E40(void);
    s32 func_ovl8_80372E98(void);
    void func_ovl8_80372F04(void);
    virtual void func_ovl8_80372FEC(void);
    virtual s32 func_ovl8_80373044(menuCursorStruct* arg1);
    virtual s32 func_ovl8_8037C344(s32, void*);
    virtual void func_ovl8_80371DD0(void);
    virtual void func_ovl8_80371DDC(void);
    void func_ovl8_80373158(s32 (*arg1)(s32, void*));
    Unk80372790_Unk28* func_ovl8_80373160(void);
    Unk80372790_Unk28* func_ovl8_80373168(void);
    Unk80372790_Unk28* func_ovl8_8037319C(s32 arg1);
    Unk80372790_Unk28* func_ovl8_80373218(Vec2h arg1);
    virtual void func_ovl8_80371E1C(void);
    void func_ovl8_80373308(UnkA1* arg1);


protected:
// 0x24 start
    s32 (*unk24)(s32 arg1, void* arg2);
    Unk80372790_Unk28* unk28;
    u8 pad8[0xC];
};

#endif // _OVL8_4_H
