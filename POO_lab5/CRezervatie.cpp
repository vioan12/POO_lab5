//Problema 4 - Laboratorul 5

#include"Rezervatie.h";

CRezervatie::CRezervatie()
{
}

void CRezervatie::Add_Caprioara(CCaprioara caprioara)
{
	caprioare.push_back(caprioara);
}

void CRezervatie::Add_Iepure(CIepure iepure)
{
	iepuri.push_back(iepure);
}

void CRezervatie::Add_Leu(CLeu leu)
{
	lei.push_back(leu);
}

void CRezervatie::Add_Urs(CUrs urs)
{
	ursi.push_back(urs);
}

void CRezervatie::Add_Vulpe(CVulpe vulpe)
{
	vulpi.push_back(vulpe);
}

int CRezervatie::Size_caprioare()
{
	return caprioare.size();
}

int CRezervatie::Size_iepuri()
{
	return iepuri.size();
}

int CRezervatie::Size_lei()
{
	return lei.size();
}

int CRezervatie::Size_ursi()
{
	return ursi.size();
}

int CRezervatie::Size_vulpi()
{
	return vulpi.size();
}

CCaprioara CRezervatie::Get_Caprioara(int index)
{
	return caprioare.at(index);
}

CIepure CRezervatie::Get_Iepure(int index)
{
	return iepuri.at(index);
}

CLeu CRezervatie::Get_Leu(int index)
{
	return lei.at(index);
}

CUrs CRezervatie::Get_Urs(int index)
{
	return ursi.at(index);
}

CVulpe CRezervatie::Get_Vulpe(int index)
{
	return vulpi.at(index);
}