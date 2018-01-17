//Problema 4 - Laboratorul 5

#include"Rezervatie.h";

CCaprioara::CCaprioara(const char valueofnume[], const char valueofdataaducerii[], const float valueofgreutate, const char valueofhranapreferata[], const float valueofcantitatepezi, const int valueofnrpui) : CAnimalIerbivor(valueofnume, valueofdataaducerii, valueofgreutate, valueofhranapreferata, valueofcantitatepezi)
{
	nrpui = new int;
	*nrpui = valueofnrpui;
}

CCaprioara::CCaprioara(const CCaprioara &caprioara) : CAnimalIerbivor(caprioara)
{
	nrpui = new int;
	*nrpui = *caprioara.nrpui;
}

CCaprioara::~CCaprioara()
{
	delete nrpui;
}

int* CCaprioara::Get_nrpui()
{
	return nrpui;
}