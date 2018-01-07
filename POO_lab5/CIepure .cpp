//Problema 4 - Laboratorul 5

#include"Rezervatie.h";

CIepure::CIepure(const char valueofnume[], const char valueofdataaducerii[], const float valueofgreutate, const char valueofhranapreferata[], const float valueofcantitatepezi, const float valueofsuprafataminima) : CAnimalIerbivor(valueofnume, valueofdataaducerii, valueofgreutate, valueofhranapreferata, valueofcantitatepezi)
{
	suprafataminima = new float;
	*suprafataminima = valueofsuprafataminima;
}

CIepure::~CIepure()
{
	delete suprafataminima;
}