#include "ovl8_2.hpp"
#include "ovl8_3.hpp"
#include "ovl8_3_2.hpp"

class Unk80376530 : public Unk80372790, public Unk80371FB0 {
public:
    Unk80376530(UnkA1* arg1, Sprite* arg2, s32 arg3);
    Unk80376530* func_ovl8_80376848(UnkA1* arg1);
    virtual ~Unk80376530();
    virtual GObj* func_ovl8_80372A3C(void);
    virtual void func_ovl8_80372A48(Unk80372790_Unk28*);
    virtual s32 func_ovl8_80371C1C(menuCursorStruct* arg1);
    virtual void func_ovl8_80371ABC(void);
    virtual void func_ovl8_80371D64(s16 arg1, s16 arg2);
    virtual void func_ovl8_80371DC0(s16 arg1, s16 arg2);
    virtual void func_ovl8_80372FEC(void);


    Sprite* unkA8;
};
