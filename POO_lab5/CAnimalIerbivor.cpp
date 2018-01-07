//Problema 4 - Laboratorul 5

#include"Rezervatie.h";

CAnimalIerbivor::CAnimalIerbivor(const char valueofnume[], const char valueofdataaducerii[], const float valueofgreutate, const char valueofhranapreferata[], const float valueofcantitatepezi) : CAnimal(valueofnume, valueofdataaducerii, valueofgreutate, valueofhranapreferata, valueofcantitatepezi)
{
	ierbivor = new bool;
	*ierbivor = true;
}

CAnimalIerbivor::~CAnimalIerbivor()
{
	delete ierbivor;
}