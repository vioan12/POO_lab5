//Problema 4 - Laboratorul 5

#include"Rezervatie.h";
#include<string.h>

CAnimal::CAnimal(const char valueofnume[], const char valueofdataaducerii[], const float valueofgreutate, const char valueofhranapreferata[], const float valueofcantitatepezi)
{
	nume = new char[strlen(valueofnume) + 1];
	dataaducerii = new char[strlen(valueofdataaducerii) + 1];
	greutate = new float;
	hranapreferata = new char[strlen(valueofhranapreferata)+1];
	cantitatepezi = new float;

	strcpy(nume, valueofnume);
	strcpy(dataaducerii, valueofdataaducerii);
	*greutate = valueofgreutate;
	strcpy(hranapreferata, valueofhranapreferata);
	*cantitatepezi = valueofcantitatepezi;
}

CAnimal::CAnimal(const CAnimal &animal)
{
	nume = new char[strlen(animal.nume) + 1];
	dataaducerii = new char[strlen(animal.dataaducerii) + 1];
	greutate = new float;
	hranapreferata = new char[strlen(animal.hranapreferata) + 1];
	cantitatepezi = new float;

	strcpy(nume, animal.nume);
	strcpy(dataaducerii, animal.dataaducerii);
	*greutate = *animal.greutate;
	strcpy(hranapreferata, animal.hranapreferata);
	*cantitatepezi = *animal.cantitatepezi;
}

CAnimal::~CAnimal()
{
	delete[] nume;
	delete[] dataaducerii;
	delete greutate;
	delete[] hranapreferata;
	delete cantitatepezi;
}

char* CAnimal::Get_nume()
{
	return nume;
}

char* CAnimal::Get_dataaducerii()
{
	return dataaducerii;
}

char* CAnimal::Get_hranapreferata()
{
	return hranapreferata;
}

float* CAnimal::Get_greutate()
{
	return greutate;
}

float* CAnimal::Get_cantitatepezi()
{
	return cantitatepezi;
}