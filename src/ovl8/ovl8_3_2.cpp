#include "ovl8/ovl8_3_2.hpp"
#include "ovl8/ovl8_4.hpp"

Unk80372430::Unk80372430() { func_ovl8_8037277C(); }

Unk80372430::Unk80372430(UnkA1* arg2, Unk80372790* arg3, Sprite* arg4) : Unk80371FB0(arg2, arg4)
{
	this->set4C(arg3);
	func_ovl8_8037277C();
}

Unk80372430::~Unk80372430() {}

void Unk80372430::func_ovl8_80371ABC()
{
	Sprite* temp_v0;
	s32 pad = 0;
	s32 pad2 = 0;
	DBMenuPosition sp3C;
	DBMenuPosition sp34;

	temp_v0 = this->func_ovl8_80371CB8();
	if (temp_v0 != NULL)
	{
		this->get4C()->func_ovl8_80371C2C(&sp3C);
		this->func_ovl8_80371C2C(&sp34);
		spMove(temp_v0, sp3C.x + sp34.x, sp3C.y + sp34.y);
		temp_v0->rsp_dl_next = gSYTaskmanDLHeads[0];
		spDraw(temp_v0);
		gSYTaskmanDLHeads[0] = temp_v0->rsp_dl_next - 1;
		gDPPipeSync(gSYTaskmanDLHeads[0]++);
	}
}

void Unk80372430::func_ovl8_80371DEC()
{
	Unk80372790* temp_a2;
	DBMenuPosition sp2C;
	DBMenuPosition sp24;

	temp_a2 = this->get4C();
	if (temp_a2 != NULL)
	{
		temp_a2->func_ovl8_80371C2C(&sp2C);
		this->func_ovl8_80371C2C(&sp24);
		this->func_ovl8_80372348(sp2C.x + sp24.x, sp2C.y + sp24.y);
	}
}

void Unk80372430::func_ovl8_8037277C() {}
