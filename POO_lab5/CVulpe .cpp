//Problema 4 - Laboratorul 5

#include"Rezervatie.h";
#include<string.h>

CVulpe::CVulpe(const char valueofnume[], const char valueofdataaducerii[], const float valueofgreutate, const char valueofhranapreferata[], const float valueofcantitatepezi, const float valueoftemperaturamaxima, const char valueoftip[]) : CAnimalIerbivor(valueofnume, valueofdataaducerii, valueofgreutate, valueofhranapreferata, valueofcantitatepezi), CAnimalCarnivor(valueofnume, valueofdataaducerii, valueofgreutate, valueofhranapreferata, valueofcantitatepezi)
{
	temperaturamaxima = new float;
	tip = new char[strlen(valueoftip) + 1];

	*temperaturamaxima = valueoftemperaturamaxima;
	strcpy(tip, valueoftip);
}

CVulpe::~CVulpe()
{
	delete temperaturamaxima;
	delete[] tip;
}