#include "ovl8/ovl8_2.hpp"

extern "C"
{
#include <sys/controller.h>
#include <sys/objhelper.h>
}

extern "C" void func_ovl8_8037726C(Vec2h*);
extern "C" void stringCopyCount(char* target, char* source, s32 count);
extern "C" u32 func_ovl8_80377244(void);

Unk80372790_Unk28* func_ovl8_80373350(Unk80372790* arg1, UnkA1* arg2)
{
	void* raw = ::operator new(sizeof(Unk80372790_Unk28));

	return new (raw) Unk80372790_Unk28(arg2, arg1);
}

Unk80372790_Unk28::Unk80372790_Unk28() { func_ovl8_803735E4(); }

Unk80372790_Unk28::Unk80372790_Unk28(UnkA1* arg1, Unk80372790* arg2)
{
	func_ovl8_80371ECC(arg1);
	func_ovl8_803735E4();
	this->set4C(arg2);
	this->ovl85unk1E = arg1->unk1C;
	arg2->func_ovl8_80372A48(this);
}

Unk80372790_Unk28::~Unk80372790_Unk28() {}

void Unk80372790_Unk28::func_ovl8_803735E4()
{
	this->ovl85unkC[0] = '\0';
	this->ovl85unk24 = NULL;
	this->ovl85unk28 = NULL;
	this->ovl85unk2C = NULL;
	this->ovl85unk0 = 0.0f;
	this->ovl85unk20 = 0.0f;
	this->ovl85unk4 = 0.0f;
	this->ovl85unk8 = 1.0f;
	this->func_ovl8_8037C3AC(this);
}

void Unk80372790_Unk28::func_ovl8_80371D00() {}

void Unk80372790_Unk28::func_ovl8_80371ABC() {}

s32 Unk80372790_Unk28::func_ovl8_80371C1C(menuCursorStruct* arg1) { return this->func_ovl8_8037383C(arg1); }

f32 Unk80372790_Unk28::func_ovl8_8037367C() { return this->ovl85unk0; }

f32 Unk80372790_Unk28::func_ovl8_80373684() { return this->ovl85unk4; }

f32 Unk80372790_Unk28::func_ovl8_8037368C() { return this->ovl85unk8; }

void Unk80372790_Unk28::func_ovl8_80373694(f32 arg1)
{
	if (arg1 < this->ovl85unk4)
	{
		arg1 = this->ovl85unk4;
	}
	else if (this->ovl85unk8 < arg1)
	{
		arg1 = this->ovl85unk8;
	}

	if (this->ovl85unk0 != arg1)
	{
		this->ovl85unk0 = arg1;
		this->func_ovl8_8037C358(this->unkC, this);
		this->func_ovl8_80371E04(1);
	}
}

void Unk80372790_Unk28::func_ovl8_80373750(f32 arg1) {
    this->func_ovl8_80373694(this->ovl85unk0 + arg1);
}

void Unk80372790_Unk28::func_ovl8_80373790(f32 arg1)
{
	this->ovl85unk4 = arg1;
	if (this->ovl85unk0 < arg1)
	{
		this->func_ovl8_80373694(arg1);
	}
}

void Unk80372790_Unk28::func_ovl8_803737DC(f32 arg1)
{
	this->ovl85unk8 = arg1;
	if (this->ovl85unk0 > arg1)
	{
		this->func_ovl8_80373694(arg1);
	}
}

s32 Unk80372790_Unk28::func_ovl8_80373828(menuCursorStruct* /* arg1 */)
{
	this->ovl85unk20 = 0.0f;
	return 0;
}

s32 Unk80372790_Unk28::func_ovl8_8037383C(menuCursorStruct* arg1)
{
	Vec2h sp34;
	s32 pad = 0;
	DBMenuPosition sp28;

	sp34 = arg1->cursor_pos;
	this->func_ovl8_803719C8(&sp34);
	this->func_ovl8_80371C8C(&sp28);
	if (func_ovl8_80377168(sp34, &sp28) == 0)
	{
		return 0;
	}
	if (this->func_ovl8_80373AC4(sp34) <= 0)
	{
		return 0;
	}

	return this->func_ovl8_80373828(arg1);
}

void Unk80372790_Unk28::func_ovl8_80373930(char* arg1)
{
	if (arg1 != NULL)
	{
		stringCopyCount(this->ovl85unkC, arg1, 0x10);
	}
	else
	{
		this->ovl85unkC[0] = '\0';
	}
	this->func_ovl8_80371D00();
}

Unk80372790_Unk28* Unk80372790_Unk28::func_ovl8_80373980() { return this->ovl85unk28; }

void Unk80372790_Unk28::func_ovl8_80373988(void (*arg1)(Unk80372790_Unk28*)) { this->ovl85unk2C = arg1; }

void Unk80372790_Unk28::func_ovl8_80373990(UnkA1* arg1)
{
	arg1->unk0 = this->unk2;
	arg1->unk8 = this->unk14;
	arg1->unkC = this->unk18;
	arg1->unk18 = this->unkC;
	arg1->unk14 = this->unk10;
	arg1->unk1C = this->ovl85unk1E;
}

void Unk80372790_Unk28::func_ovl8_80373A28(f32 arg1)
{
	Unk80372790_Unk28* temp_v0;

	temp_v0 = ((Unk80372790*)(void*)(this->get4C()))->func_ovl8_80373160();
	if (temp_v0 == NULL)
	{
		return;
	}

	while (temp_v0 != NULL)
	{
		if ((temp_v0->ovl85unk1E > 0) && (this != temp_v0) && (this->ovl85unk1E == temp_v0->ovl85unk1E))
		{
			// compiler diff?
			temp_v0->func_ovl8_80373694(arg1);
		}
		temp_v0 = temp_v0->ovl85unk28;
	}
}

void Unk80372790_Unk28::func_ovl8_80373ABC() {}

s32 Unk80372790_Unk28::func_ovl8_80373AC4(Vec2h arg1)
{
	DBMenuPosition sp20;

	this->func_ovl8_80371C8C(&sp20);

	return (func_ovl8_80377168(arg1, &sp20) != 0) ? 1 : 0;
}

s32 Unk80372790_Unk28::func_ovl8_80373B28(Vec2h arg1, s32 /* arg2 */)
{
	DBMenuPosition sp20;

	this->func_ovl8_80371C8C(&sp20);
	return func_ovl8_80377168(arg1, &sp20);
}

void Unk80372790_Unk28::func_ovl8_80373B84(s32 arg1, s32 arg2, s32 arg3, Vec2h* arg4)
{
	this->func_ovl8_80373BC0(arg1, arg2, arg3, arg4);
}

void Unk80372790_Unk28::func_ovl8_80373BC0(s32 /* arg1 */, s32 /* arg2 */, s32 /* arg3 */, Vec2h* /* arg4 */) {}

void Unk80372790_Unk28::func_ovl8_80373BD4(s32 arg1, s32 arg2, s32 arg3, Vec2h* arg4)
{
	this->func_ovl8_80373BC0(arg1, arg2, arg3, arg4);
}

class Unk80373C10 : public Unk80372790_Unk28
{
  public:
	Unk80373C10();
	Unk80373C10(UnkA1* arg1, Unk80372790* arg2);
	virtual ~Unk80373C10();

	virtual s32 func_ovl8_80373828(menuCursorStruct* arg1); // func_ovl8_80373E24
	virtual s32 func_ovl8_8037383C(menuCursorStruct* arg1); // func_ovl8_80373EA8
	virtual void func_ovl8_803743C0(u16 arg1);
	void func_ovl8_803743CC(u16 arg1);
	virtual void func_ovl8_80373BC0(s32 arg1, s32 arg2, s32 arg3, Vec2h* arg4); // func_ovl8_803743D8

  protected:
	u16 unk3C;
};

Unk80373C10::Unk80373C10() { func_ovl8_803743CC(0); }

Unk80373C10::Unk80373C10(UnkA1* arg1, Unk80372790* arg2) : Unk80372790_Unk28(arg1, arg2) { func_ovl8_803743CC(0); }

Unk80373C10::~Unk80373C10() {}

s32 Unk80373C10::func_ovl8_80373828(menuCursorStruct* /* arg1 */)
{
	if (this->unk3C == 3)
	{
		this->func_ovl8_8037C358(this->unkC, this);
		this->ovl85unk20 = 1.0f;
		return 1;
	}
	this->ovl85unk20 = 0.0f;
	return 0;
}

s32 Unk80373C10::func_ovl8_8037383C(menuCursorStruct* arg1)
{
	Vec2h sp6C;
	s32 var_s6;
	s32 var_s5;
	s32 var_s4;
	s32 var_v1;
	u32 sp58;
	s32 var_v0;

	if (var_s6) {}

	var_s5 = 1;
	var_s4 = 0;

	sp58 = this->ovl85unk0;
	sp6C = arg1->cursor_pos;
	this->func_ovl8_803719C8(&sp6C);

	var_s6 = this->func_ovl8_80373AC4(sp6C);
	if (var_s6 <= 0)
	{
		return 0;
	}

	if (this->func_ovl8_80373828(arg1) != 0)
	{
		return 1;
	}

	if ((this->unk3C == 2) && (1.0f == this->ovl85unk0))
	{
		this->func_ovl8_8037C358(this->unkC, this);
		return 1;
	}

	this->func_ovl8_80373B84(var_s6, 1, 0, &sp6C);

	if (this->unk2C == NULL)
	{
		while (func_ovl8_80377244() & this->unk30)
		{
			func_ovl8_8037726C(&sp6C);
			this->func_ovl8_803719C8(&sp6C);
			var_s4 = var_s5;
			var_s5 = this->func_ovl8_80373B28(sp6C, var_s6);
			this->func_ovl8_80373BC0(var_s6, var_s5, var_s4, &sp6C);

			if (this->ovl85unk2C != NULL)
			{
				this->ovl85unk2C(this);
			}
			else
			{
				this->func_ovl8_80373ABC();
			}
			gcSleepCurrentGObjThread(1);
			if ((this->unk3C == 0) && (gSYControllerMain.button_update != 0))
			{
				this->func_ovl8_8037C358(this->unkC, this);
			}
		}
		if (this->unk3C == 0)
		{
			this->func_ovl8_80373BD4(var_s6, 0, var_s4, &sp6C);
		}
		func_ovl8_8037726C(&sp6C);
		this->func_ovl8_803719C8(&sp6C);
		var_v1 = this->func_ovl8_80373B28(sp6C, var_s6);
	}
	else
	{
		var_v1 = var_s6;
	}

	var_v0 = 0;
	switch (this->unk3C)
	{
	case 0:
		if (var_v1 == var_s6)
		{
			var_v0 = 1;
		}
		break;
	case 1:
		if (this->ovl85unk0 != sp58)
		{
			var_v0 = 1;
		}
		break;
	case 2:
		if (this->ovl85unk0 != sp58)
		{
			var_v0 = 1;
		}
		break;
	}
	if (var_v0 != 0)
	{
		this->func_ovl8_8037C358(this->unkC, this);

		if (this->ovl85unk0 != 0.0f)
		{
			this->func_ovl8_80373A28(0.0f);
		}
		this->ovl85unk20 = 1.0f;
	}
	else
	{
		this->ovl85unk20 = 0.0f;
	}

	return 1;
}

void Unk80373C10::func_ovl8_803743C0(u16 arg1) { this->unk3C = arg1; }

void Unk80373C10::func_ovl8_803743CC(u16 arg1) { this->unk3C = arg1; }

void Unk80373C10::func_ovl8_80373BC0(s32 /* arg1 */, s32 arg2, s32 arg3, Vec2h* /* arg4 */)
{
	if (arg2 != arg3)
	{
		this->ovl85unk0 = this->ovl85unk0 ? 0 : 1;
		this->func_ovl8_80371E04(1);
	}
}
