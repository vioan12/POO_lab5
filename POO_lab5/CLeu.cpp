//Problema 4 - Laboratorul 5

#include"Rezervatie.h";
#include<string.h>

CLeu::CLeu(const char valueofnume[], const char valueofdataaducerii[], const float valueofgreutate, const char valueofhranapreferata[], const float valueofcantitatepezi, const float valueoftemperaturaminima, const char valueoftaraprovenienta[]) : CAnimalCarnivor(valueofnume, valueofdataaducerii, valueofgreutate, valueofhranapreferata, valueofcantitatepezi)
{
	temperaturaminima = new float;
	taraprovenienta = new char[strlen(valueoftaraprovenienta) + 1];

	*temperaturaminima = valueoftemperaturaminima;
	strcpy(taraprovenienta, valueoftaraprovenienta);
}

CLeu::CLeu(const CLeu &leu) : CAnimalCarnivor(leu)
{
	temperaturaminima = new float;
	taraprovenienta = new char[strlen(leu.taraprovenienta) + 1];

	*temperaturaminima = *leu.temperaturaminima;
	strcpy(taraprovenienta, leu.taraprovenienta);
}

CLeu::~CLeu()
{
	delete temperaturaminima;
	delete[] taraprovenienta;
}

float* CLeu::Get_temperaturaminima()
{
	return temperaturaminima;
}

char* CLeu::Get_taraprovenienta()
{
	return taraprovenienta;
}