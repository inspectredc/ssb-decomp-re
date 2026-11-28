#ifndef _OVL8_5_H
#define _OVL8_5_H

#include "ovl8/ovl8_9.hpp"

class Unk80372790_Unk28 : virtual public ovl8_803717E0, virtual public Unk8037C2D0 {
public:
    Unk80372790_Unk28* func_ovl8_80373350(Unk80372790* arg1, UnkA1* arg2);
    Unk80372790_Unk28();
    Unk80372790_Unk28(UnkA1* arg1, Unk80372790* arg2);

    virtual ~Unk80372790_Unk28();

    void func_ovl8_803735E4(void);
    virtual void func_ovl8_80371D00(void);
    virtual void func_ovl8_80371ABC(void);
    virtual s32 func_ovl8_80371C1C(menuCursorStruct* arg1);
    virtual f32 func_ovl8_8037367C(void);
    virtual f32 func_ovl8_80373684(void);
    virtual f32 func_ovl8_8037368C(void);
    virtual void func_ovl8_80373694(f32 arg1);
    virtual void func_ovl8_80373750(f32 arg1);
    virtual void func_ovl8_80373790(f32 arg1);
    virtual void func_ovl8_803737DC(f32 arg1);
    virtual s32 func_ovl8_80373828(menuCursorStruct* arg1);
    virtual s32 func_ovl8_8037383C(menuCursorStruct* arg1);
    virtual void func_ovl8_80373930(char* arg1);
    virtual Unk80372790_Unk28* func_ovl8_80373980(void);
    virtual void func_ovl8_80373988(void (*arg1)(Unk80372790_Unk28*));
    virtual void func_ovl8_80373990(UnkA1* arg1);
    virtual void func_ovl8_80373A28(f32 arg1);
    virtual void func_ovl8_80373ABC(void);
    virtual s32 func_ovl8_80373AC4(Vec2h arg1);
    virtual s32 func_ovl8_80373B28(Vec2h arg1, s32 arg2);
    virtual void func_ovl8_80373B84(s32 arg1, s32 arg2, s32 arg3, Vec2h* arg4);
    virtual void func_ovl8_80373BC0(s32 arg1, s32 arg2, s32 arg3, Vec2h* arg4);
    virtual void func_ovl8_80373BD4(s32 arg1, s32 arg2, s32 arg3, Vec2h* arg4);

    f32 ovl85unk0;
    f32 ovl85unk4;
    f32 ovl85unk8;
    char ovl85unkC[1];
    u8 padD[0x11];
    s16 ovl85unk1E;
    f32 ovl85unk20;
    Unk80372790_Unk28* ovl85unk24;
    Unk80372790_Unk28* ovl85unk28;
    void (*ovl85unk2C)(Unk80372790_Unk28*);
};

class Unk80373C10 : public Unk80372790_Unk28 {
public:
	Unk80373C10();
	Unk80373C10(UnkA1* arg1, Unk80372790* arg2);
	virtual ~Unk80373C10();

	virtual s32 func_ovl8_80373828(menuCursorStruct* arg1);
	virtual s32 func_ovl8_8037383C(menuCursorStruct* arg1);
	virtual void func_ovl8_803743C0(u16 arg1);
	void func_ovl8_803743CC(u16 arg1);
	virtual void func_ovl8_80373BC0(s32 arg1, s32 arg2, s32 arg3, Vec2h* arg4);

protected:
	u16 unk3C;
};

#endif // _OVL8_5_H
