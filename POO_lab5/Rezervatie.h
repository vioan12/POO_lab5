//Problema 4 - Laboratorul 5

#pragma once
#include<fstream>;
#include <vector>;
using namespace std;

class CAnimal
{
private:
	char *nume, *dataaducerii, *hranapreferata;
	float *greutate, *cantitatepezi;
protected:
	CAnimal(const char[], const char[], const float, const char[], const float);
	CAnimal(const CAnimal &);
	~CAnimal();
public:
	char* Get_nume();
	char* Get_dataaducerii();
	char* Get_hranapreferata();
	float* Get_greutate();
	float* Get_cantitatepezi();
};

class CAnimalCarnivor : public CAnimal
{
protected:
	CAnimalCarnivor(const char[], const char[], const float, const char[], const float);
	CAnimalCarnivor(const CAnimalCarnivor &);
	~CAnimalCarnivor();
};

class CAnimalIerbivor : public CAnimal
{
protected:
	CAnimalIerbivor(const char[], const char[], const float, const char[], const float);
	CAnimalIerbivor(const CAnimalIerbivor &);
	~CAnimalIerbivor();
};

class CCaprioara : public CAnimalIerbivor
{
private:
	int *nrpui;
public:
	CCaprioara(const char[], const char[], const float, const char[], const float, const int);
	CCaprioara(const CCaprioara &);
	~CCaprioara();
	int* Get_nrpui();
};

class CIepure : public CAnimalIerbivor
{
private:
	float *suprafataminima;
public:
	CIepure(const char[], const char[], const float, const char[], const float, const float);
	CIepure(const CIepure &);
	~CIepure();
	float* Get_suprafataminima();
};

class CLeu : public CAnimalCarnivor
{
private:
	float *temperaturaminima;
	char *taraprovenienta;
public:
	CLeu(const char[], const char[], const float, const char[], const float, const float, const char[]);
	CLeu(const CLeu &);
	~CLeu();
	float* Get_temperaturaminima();
	char* Get_taraprovenienta();
};

class CUrs : public CAnimalIerbivor, public CAnimalCarnivor
{
private:
	int *perioadahibernare;
public:
	CUrs(const char[], const char[], const float, const char[], const float, const int);
	CUrs(const CUrs &);
	~CUrs();
	int* Get_perioadahibernare();
};

class CVulpe : public CAnimalIerbivor, public CAnimalCarnivor
{
private:
	float *temperaturamaxima;
	char *tip;
public:
	CVulpe(const char[], const char[], const float, const char[], const float, const float, const char[]);
	CVulpe(const CVulpe &);
	~CVulpe();
	float* Get_temperaturamaxima();
	char* Get_tip();
};

class CRezervatie
{
private:
	vector<CCaprioara> caprioare;
	vector<CIepure> iepuri;
	vector<CLeu> lei;
	vector<CUrs> ursi;
	vector<CVulpe> vulpi;
public:
	CRezervatie();
	void Add_Caprioara(CCaprioara);
	void Add_Iepure(CIepure);
	void Add_Leu(CLeu);
	void Add_Urs(CUrs);
	void Add_Vulpe(CVulpe);
	int Size_caprioare();
	int Size_iepuri();
	int Size_lei();
	int Size_ursi();
	int Size_vulpi();
	CCaprioara Get_Caprioara(int);
	CIepure Get_Iepure(int);
	CLeu Get_Leu(int);
	CUrs Get_Urs(int);
	CVulpe Get_Vulpe(int);
};