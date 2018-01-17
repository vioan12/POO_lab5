//Problema 4 - Laboratorul 5

#include"Rezervatie.h";

CUrs::CUrs(const char valueofnume[], const char valueofdataaducerii[], const float valueofgreutate, const char valueofhranapreferata[], const float valueofcantitatepezi, const int valueofperioadahibernare) : CAnimalIerbivor(valueofnume, valueofdataaducerii, valueofgreutate, valueofhranapreferata, valueofcantitatepezi), CAnimalCarnivor(valueofnume, valueofdataaducerii, valueofgreutate, valueofhranapreferata, valueofcantitatepezi)
{
	perioadahibernare = new int;
	*perioadahibernare = valueofperioadahibernare;
}

CUrs::CUrs(const CUrs &urs) : CAnimalIerbivor(urs), CAnimalCarnivor(urs)
{
	perioadahibernare = new int;
	*perioadahibernare = *urs.perioadahibernare;
}

CUrs::~CUrs()
{
	delete perioadahibernare;
}

int* CUrs::Get_perioadahibernare()
{
	return perioadahibernare;
}