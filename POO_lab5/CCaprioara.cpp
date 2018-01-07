//Problema 4 - Laboratorul 5

#include"Rezervatie.h";

CCaprioara::CCaprioara(const char valueofnume[], const char valueofdataaducerii[], const float valueofgreutate, const char valueofhranapreferata[], const float valueofcantitatepezi, const int valueofnrpui) : CAnimalIerbivor(valueofnume, valueofdataaducerii, valueofgreutate, valueofhranapreferata, valueofcantitatepezi)
{
	nrpui = new int;
	*nrpui = valueofnrpui;
}

CCaprioara::~CCaprioara()
{
	delete nrpui;
}