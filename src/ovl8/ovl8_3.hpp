#include "ovl8/ovl8_2.hpp"

class Unk80371FB0 : virtual public ovl8_803717E0 {
public:
    Unk80371FB0();
    Unk80371FB0(UnkA1* arg2, Sprite* arg3);
    virtual ~Unk80371FB0();

    virtual void func_ovl8_80371ABC(void);
    virtual void func_ovl8_803721E8(DBMenuPosition* arg1);
    virtual void func_ovl8_80371C50(DBMenuPosition* arg1);
    virtual void func_ovl8_80372250(s16* arg1, SYColorRGBA* arg2, s32 arg3);
    virtual void func_ovl8_803722A0(Sprite* arg1, DBMenuPosition* arg2, Vec2h* arg3);
    virtual void func_ovl8_803722F0(s16* arg1);
    virtual void func_ovl8_80372348(s16 arg1, s16 arg2);
    virtual Sprite* func_ovl8_80371CB8(void);
    virtual void func_ovl8_80372360(Sprite* arg1);
    s32 func_ovl8_803723AC(s32 arg1, Sprite* arg2, void (*arg3)(GObj*), void (*arg4)(GObj*), s32 arg5);
    void func_ovl8_80372420(Sprite* arg0);

protected:
    GObj* unk0;
    GObj* unk4;
    Sprite* unk8;

    static const SYColorRGBA D_ovl8_80388C98;
};
