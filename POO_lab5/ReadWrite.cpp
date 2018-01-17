//Problema 4 - Laboratorul 5

#include"Rezervatie.h";

ReadWrite::ReadWrite()
{
	rezervatie = new CRezervatie();
}

ReadWrite::~ReadWrite()
{
	delete rezervatie;
}

void ReadWrite::read()
{
	ifstream file;
	char c_temp[30],c_temp2[30], c_temp3[30], c_temp4[30];
	int i_temp, i_temp2;
	float f_temp, f_temp2, f_temp3;
	rezervatie = new CRezervatie();

	file.open("In.txt");
	
	//Add Caprioara
	file.getline(c_temp, 30);
	i_temp = atoi(c_temp);
	for (int i = 0; i < i_temp; i++)
	{
		file.getline(c_temp, 30); //nume
		file.getline(c_temp2, 30); //dataaducerii
		file.getline(c_temp3, 30);
		f_temp = atof(c_temp3); //greutate
		file.getline(c_temp3, 30); //hranapreferata
		file.getline(c_temp4, 30);
		f_temp2 = atof(c_temp4); //cantitatepezi
		file.getline(c_temp4, 30);
		i_temp2 = atoi(c_temp4); //nrpui
		rezervatie->Add_Caprioara(CCaprioara(c_temp, c_temp2, f_temp, c_temp3, f_temp2, i_temp2));
	}

	//Add Iepure
	file.getline(c_temp, 30);
	i_temp = atoi(c_temp);
	for (int i = 0; i < i_temp; i++)
	{
		file.getline(c_temp, 30); //nume
		file.getline(c_temp2, 30); //dataaducerii
		file.getline(c_temp3, 30);
		f_temp = atof(c_temp3); //greutate
		file.getline(c_temp3, 30); //hranapreferata
		file.getline(c_temp4, 30);
		f_temp2 = atof(c_temp4); //cantitatepezi
		file.getline(c_temp4, 30);
		f_temp3 = atof(c_temp4); //suprafataminima
		rezervatie->Add_Iepure(CIepure(c_temp, c_temp2, f_temp, c_temp3, f_temp2, f_temp3));
	}

	//Add Leu
	file.getline(c_temp, 30);
	i_temp = atoi(c_temp);
	for (int i = 0; i < i_temp; i++)
	{
		file.getline(c_temp, 30); //nume
		file.getline(c_temp2, 30); //dataaducerii
		file.getline(c_temp3, 30);
		f_temp = atof(c_temp3); //greutate
		file.getline(c_temp3, 30); //hranapreferata
		file.getline(c_temp4, 30);
		f_temp2 = atof(c_temp4); //cantitatepezi
		file.getline(c_temp4, 30);
		f_temp3 = atof(c_temp4); //temperaturaminima
		file.getline(c_temp4, 30); //taraprovenienta
		rezervatie->Add_Leu(CLeu(c_temp, c_temp2, f_temp, c_temp3, f_temp2, f_temp3, c_temp4));
	}

	//Add Urs
	file.getline(c_temp, 30);
	i_temp = atoi(c_temp);
	for (int i = 0; i < i_temp; i++)
	{
		file.getline(c_temp, 30); //nume
		file.getline(c_temp2, 30); //dataaducerii
		file.getline(c_temp3, 30);
		f_temp = atof(c_temp3); //greutate
		file.getline(c_temp3, 30); //hranapreferata
		file.getline(c_temp4, 30);
		f_temp2 = atof(c_temp4); //cantitatepezi
		file.getline(c_temp4, 30);
		i_temp2 = atoi(c_temp4); //perioadahibernare
		rezervatie->Add_Urs(CUrs(c_temp, c_temp2, f_temp, c_temp3, f_temp2, i_temp2));
	}

	//Add Vulpe
	file.getline(c_temp, 30);
	i_temp = atoi(c_temp);
	for (int i = 0; i < i_temp; i++)
	{
		file.getline(c_temp, 30); //nume
		file.getline(c_temp2, 30); //dataaducerii
		file.getline(c_temp3, 30);
		f_temp = atof(c_temp3); //greutate
		file.getline(c_temp3, 30); //hranapreferata
		file.getline(c_temp4, 30);
		f_temp2 = atof(c_temp4); //cantitatepezi
		file.getline(c_temp4, 30);
		f_temp3 = atof(c_temp4); //temperaturamaxima
		file.getline(c_temp4, 30); //tip
		rezervatie->Add_Vulpe(CVulpe(c_temp, c_temp2, f_temp, c_temp3, f_temp2, f_temp3, c_temp4));
	}
	file.close();
}

void ReadWrite::write()
{
	ofstream file;
	file.open("Out.txt");

	file << "----------------------------------------------\n";
	file << "Caprioare:\n";
	for (int i = 0; i < rezervatie->Size_caprioare; i++)
	{
		CCaprioara temp = rezervatie->Get_Caprioara(i);
		file << temp.Get_nume << " | " << temp.Get_dataaducerii << " | " << *temp.Get_greutate << " | " << temp.Get_hranapreferata << " | " << *temp.Get_cantitatepezi << " | " << *temp.Get_nrpui<<"\n";
	}

	file << "----------------------------------------------\n";
	file << "Iepuri:\n";
	for (int i = 0; i < rezervatie->Size_iepuri; i++)
	{
		CIepure temp = rezervatie->Get_Iepure(i);
		file << temp.Get_nume << " | " << temp.Get_dataaducerii << " | " << *temp.Get_greutate << " | " << temp.Get_hranapreferata << " | " << *temp.Get_cantitatepezi << " | " << *temp.Get_suprafataminima << "\n";
	}

	file << "----------------------------------------------\n";
	file << "Lei:\n";
	for (int i = 0; i < rezervatie->Size_lei; i++)
	{
		CLeu temp = rezervatie->Get_Leu(i);
		file << temp.Get_nume << " | " << temp.Get_dataaducerii << " | " << *temp.Get_greutate << " | " << temp.Get_hranapreferata << " | " << *temp.Get_cantitatepezi << " | " << *temp.Get_temperaturaminima << " | " << temp.Get_taraprovenienta << "\n";
	}

	file << "----------------------------------------------\n";
	file << "Ursi:\n";
	for (int i = 0; i < rezervatie->Size_ursi; i++)
	{
		CUrs temp = rezervatie->Get_Urs(i);
		file << temp.Get_nume << " | " << temp.Get_dataaducerii << " | " << *temp.Get_greutate << " | " << temp.Get_hranapreferata << " | " << *temp.Get_cantitatepezi << " | " << *temp.Get_perioadahibernare << "\n";
	}

	file << "----------------------------------------------\n";
	file << "Vulpi:\n";
	for (int i = 0; i < rezervatie->Size_vulpi; i++)
	{
		CVulpe temp = rezervatie->Get_Vulpe(i);
		file << temp.Get_nume << " | " << temp.Get_dataaducerii << " | " << *temp.Get_greutate << " | " << temp.Get_hranapreferata << " | " << *temp.Get_cantitatepezi << " | " << *temp.Get_temperaturamaxima << temp.Get_tip << "\n";
	}
	file.close();
}