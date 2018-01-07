//Problema 4 - Laboratorul 5

#include"Rezervatie.h";

CAnimalCarnivor::CAnimalCarnivor(const char valueofnume[], const char valueofdataaducerii[], const float valueofgreutate, const char valueofhranapreferata[], const float valueofcantitatepezi) : CAnimal (valueofnume, valueofdataaducerii, valueofgreutate, valueofhranapreferata, valueofcantitatepezi)
{
	carnivor = new bool;
	*carnivor = true;
}

CAnimalCarnivor::~CAnimalCarnivor()
{
	delete carnivor;
}