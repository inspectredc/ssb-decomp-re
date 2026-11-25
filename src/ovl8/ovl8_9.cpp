#include "ovl8_2.hpp"

Unk8037C2D0::Unk8037C2D0() {

}

Unk8037C2D0::~Unk8037C2D0() {

}

s32 Unk8037C2D0::func_ovl8_8037C344(s32 arg1, void* arg2) {
	return 0;
}

s32 Unk8037C2D0::func_ovl8_8037C358(s32 arg1, void* arg2) {
	if (this->unk4 == NULL)
	{
		return 0;
	}

    if (this->unk4->unk4C == NULL)
    {
        return 0;
    }

    return this->unk4->unk4C->func_ovl8_8037C344(arg1, arg2);
}

void Unk8037C2D0::func_ovl8_8037C3AC(ovl8_803717E0* arg1) {
	this->unk4 = arg1;
}
