#include "ovl8/ovl8_2.hpp"
#include "ovl8/ovl8_10.hpp"
extern "C"
{
#include <sys/objhelper.h>
#include <sys/objman.h>
}

extern "C" s32 func_ovl8_8037D384(void);
extern "C" menuCursorStruct* func_ovl8_8037D3AC(menuCursorStruct*);
extern "C" menuCursorStruct* func_ovl8_8037D434(menuCursorStruct*);
extern "C" void func_ovl8_8037726C(Vec2h*);
extern "C" u32 func_ovl8_80377244(void);
extern "C" void func_ovl8_8037D45C(void);

Unk80372790::Unk80372790() { func_ovl8_80373308(0); }

Unk80372790::Unk80372790(UnkA1* arg3)
{
	func_ovl8_80371ECC(arg3);
	func_ovl8_80373308(arg3);
}

Unk80372790* Unk80372790::func_ovl8_80372908(UnkA1* arg1)
{
	void* raw = (Unk80372790*)new u8[sizeof(Unk80372790)];

	return new (raw) Unk80372790(arg1);
}

Unk80372790::~Unk80372790()
{
	Unk80372790_Unk28* temp_v0;
	Unk80372790_Unk28* var_v1;

	temp_v0 = func_ovl8_80373160();

	if (temp_v0)
	{
		while (temp_v0)
		{
			var_v1 = temp_v0->ovl85unk28;
			delete temp_v0;
			temp_v0 = var_v1;
		}
	}
}

GObj* Unk80372790::func_ovl8_80372A3C() { return NULL; }

void Unk80372790::func_ovl8_80372A48(Unk80372790_Unk28* arg1)
{
	Unk80372790_Unk28* temp_v0;

	temp_v0 = func_ovl8_80373168();
	if (temp_v0 != NULL)
	{
		temp_v0->ovl85unk28 = arg1;
		arg1->ovl85unk24 = temp_v0;
		arg1->ovl85unk28 = NULL;
	}
	else
	{
		this->unk28 = arg1;
		arg1->ovl85unk24 = NULL;
		arg1->ovl85unk28 = NULL;
	}
}

void Unk80372790::func_ovl8_80371ACC(GObj* /* arg1 */)
{
	menuCursorStruct sp1C;

	ovl8_803717E0::func_ovl8_80371E2C();
	if ((Unk8037C3C0::D_ovl8_8038A1BC == 0) && (func_ovl8_8037D384() != 0))
	{
		func_ovl8_8037D3AC(&sp1C);
		if (sp1C.button_tap & this->unk30)
		{
			if (func_ovl8_80372B98(&sp1C) == 0)
			{
				func_ovl8_8037D434(&sp1C);
			}
		}
		else
		{
			func_ovl8_8037D434(&sp1C);
		}
	}
}

void Unk80372790::func_ovl8_80371ABC() { this->func_ovl8_80372FEC(); }

s32 Unk80372790::func_ovl8_80371C1C(menuCursorStruct* arg1) { return this->func_ovl8_80373044(arg1); }

s32 Unk80372790::func_ovl8_80372B98(menuCursorStruct* arg1)
{
	if (this->func_ovl8_80371B34(&arg1->cursor_pos) == 0)
	{
		return 0;
	}

	return this->func_ovl8_80371BCC(arg1);
}

void Unk80372790::func_ovl8_80372C00()
{
	Vec2h sp34;
	Vec2h sp30;

	func_ovl8_8037726C(&sp30);
	while (func_ovl8_80377244() & this->unk30)
	{
		func_ovl8_8037726C(&sp34);
		if ((sp34.x != sp30.x) || (sp34.y != sp30.y))
		{
			this->func_ovl8_80371D08(sp34.x - sp30.x, sp34.y - sp30.y);
			sp30 = sp34;
		}
		func_ovl8_8037D45C();
		gcSleepCurrentGObjThread(1);
	}
	func_ovl8_8037D45C();
}

void Unk80372790::func_ovl8_80371D74(s16 arg1, s16 arg2)
{
	ovl8_803717E0::func_ovl8_80371D74(arg1, arg2);
	this->func_ovl8_80372E40();
}

void Unk80372790::func_ovl8_80371D08(s16 arg1, s16 arg2)
{
	ovl8_803717E0::func_ovl8_80371D08(arg1, arg2);
	this->func_ovl8_80372E40();
}

void Unk80372790::func_ovl8_80371D64(s16 arg1, s16 arg2) {}

void Unk80372790::func_ovl8_80371DC0(s16 arg1, s16 arg2) {}

void Unk80372790::func_ovl8_80371DFC(void)
{
	Unk80372790_Unk28* temp_v0;

	temp_v0 = func_ovl8_80373160();
	if (temp_v0)
	{
		while (temp_v0)
		{
			temp_v0->func_ovl8_80371DFC();
			temp_v0 = temp_v0->ovl85unk28;
		}
	}
}

void Unk80372790::func_ovl8_80372E40(void)
{
	Unk80372790_Unk28* temp_v0;

	temp_v0 = func_ovl8_80373160();
	if (temp_v0)
	{
		while (temp_v0)
		{
			temp_v0->func_ovl8_80371DEC();
			temp_v0 = temp_v0->ovl85unk28;
		}
	}
}

s32 Unk80372790::func_ovl8_80372E98()
{
	s32 var_v1;

	var_v1 = (this->unk48->id == -0x1FD) ? 0 : 1;

	return Unk8037C3C0::func_ovl8_8037C584(var_v1) == this->unk48;
}

void Unk80372790::func_ovl8_80372F04()
{
	if (this->unk48->id == -0x1FC)
	{
		Unk8037C3C0::func_ovl8_8037C518(this->unk48, 0x1F, 2);
		// somthing wrong here?
		func_8000A24C((GObj*)this->unk48->camera_tag, 1);
	}
	else
	{
		Unk8037C3C0::func_ovl8_8037C518(this->unk48, 0x1F, 1);
		// somthing wrong here?
		func_8000A24C((GObj*)this->unk48->camera_tag, 2);
	}
	this->func_ovl8_80371DFC();
}

void Unk80372790::func_ovl8_80372FEC(void)
{
	Unk80372790_Unk28* temp_v0;

	temp_v0 = func_ovl8_80373160();
	if (temp_v0)
	{
		while (temp_v0)
		{
			temp_v0->func_ovl8_80371A2C();
			temp_v0 = temp_v0->ovl85unk28;
		}
	}
}

s32 Unk80372790::func_ovl8_80373044(menuCursorStruct* arg1)
{
	Unk80372790_Unk28* temp_v0;

	temp_v0 = func_ovl8_80373168();
	if (temp_v0)
	{
		while (temp_v0)
		{
			if (temp_v0->func_ovl8_80371BCC(arg1))
			{
				return 1;
			}

			temp_v0 = temp_v0->ovl85unk24;
		}
	}

	this->func_ovl8_8037C344(-1, this);
	return 0;
}

s32 Unk80372790::func_ovl8_8037C344(s32 arg1, void* arg2)
{
	if (this->unk24 != NULL)
	{
		return this->unk24(arg1, arg2);
	}
	return 0;
}

void Unk80372790::func_ovl8_80371DD0() { ovl8_803717E0::func_ovl8_80371DD0(); }

void Unk80372790::func_ovl8_80371DDC() { ovl8_803717E0::func_ovl8_80371DDC(); }

void Unk80372790::func_ovl8_80373158(s32 (*arg1)(s32, void*)) { this->unk24 = arg1; }

Unk80372790_Unk28* Unk80372790::func_ovl8_80373160() { return this->unk28; }

Unk80372790_Unk28* Unk80372790::func_ovl8_80373168()
{
	Unk80372790_Unk28* var_v0;
	Unk80372790_Unk28* var_v1;

	var_v1 = this->unk28;
	if (var_v1 != NULL)
	{
		var_v0 = var_v1->ovl85unk28;
		while (var_v0 != NULL)
		{
			var_v1 = var_v0;
			if (var_v0 == NULL)
			{
				break;
			}
			var_v0 = var_v1->ovl85unk28;
		}
	}
	return var_v1;
}

Unk80372790_Unk28* Unk80372790::func_ovl8_8037319C(s32 arg1)
{
	Unk80372790_Unk28* temp_v0;
	void* temp_v0_2;
	void* temp_v1;
	void* var_s0;

	temp_v0 = func_ovl8_80373168();
	if (temp_v0 == NULL)
	{
		return NULL;
	}
	while (temp_v0 != NULL)
	{
		if (temp_v0->func_ovl8_80371DE4() == arg1)
		{
			return temp_v0;
		}
		temp_v0 = temp_v0->ovl85unk24;
	}
	return NULL;
}

Unk80372790_Unk28* Unk80372790::func_ovl8_80373218(Vec2h arg1)
{
	Unk80372790_Unk28* temp_v0;

	temp_v0 = func_ovl8_80373168();
	if (temp_v0 == NULL)
	{
		return NULL;
	}
	while (temp_v0 != NULL)
	{
		if (temp_v0->func_ovl8_80371B98(&arg1) != 0)
		{
			if (temp_v0->unk1C != 0)
			{
				return temp_v0;
			}
		}
		temp_v0 = temp_v0->ovl85unk24;
	}

	return NULL;
}

void Unk80372790::func_ovl8_80371E1C(void)
{
	Unk80372790_Unk28* temp_v0;

	temp_v0 = func_ovl8_80373160();
	if (temp_v0 == NULL)
	{
		return;
	}
	while (temp_v0 != NULL)
	{
		temp_v0->func_ovl8_80371E58();
		temp_v0 = temp_v0->ovl85unk28;
	}
}

void Unk80372790::func_ovl8_80373308(UnkA1* arg1)
{
	this->unk28 = NULL;
	this->unk24 = NULL;

	func_ovl8_8037C3AC(this);
}
