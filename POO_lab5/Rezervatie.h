//Problema 4 - Laboratorul 5

#pragma once

class CAnimal
{
private:
	char *nume, *dataaducerii, *hranapreferata;
	float *greutate, *cantitatepezi;
protected:
	CAnimal(const char[], const char[], const float, const char[], const float);
	~CAnimal();
	char* Get_nume();
	char* Get_dataaducerii();
	char* Get_hranapreferata();
	float* Get_greutate();
	float* Get_cantitatepezi();
};

class CAnimalCarnivor : protected CAnimal
{
private:
	bool *carnivor;
protected:
	CAnimalCarnivor(const char[], const char[], const float, const char[], const float);
	~CAnimalCarnivor();
};

class CAnimalIerbivor : protected CAnimal
{
private:
	bool *ierbivor;
protected:
	CAnimalIerbivor(const char[], const char[], const float, const char[], const float);
	~CAnimalIerbivor();
};

class CCaprioara : private CAnimalIerbivor
{
private:
	int *nrpui;
public:
	CCaprioara(const char[], const char[], const float, const char[], const float, const int);
	~CCaprioara();
};

class CIepure : private CAnimalIerbivor
{
private:
	float *suprafataminima;
public:
	CIepure(const char[], const char[], const float, const char[], const float, const float);
	~CIepure();
};

class CLeu : private CAnimalCarnivor
{
private:
	float *temperaturaminima;
	char *taraprovenienta;
public:
	CLeu(const char[], const char[], const float, const char[], const float, const float, const char[]);
	~CLeu();
};

class CUrs : private CAnimalIerbivor, private CAnimalCarnivor
{
private:
	int *perioadahibernare;
public:
	CUrs(const char[], const char[], const float, const char[], const float, const int);
	~CUrs();
};

class CVulpe : private CAnimalIerbivor, private CAnimalCarnivor
{
private:
	float *temperaturamaxima;
	char *tip;
public:
	CVulpe(const char[], const char[], const float, const char[], const float, const float, const char[]);
	~CVulpe();
};