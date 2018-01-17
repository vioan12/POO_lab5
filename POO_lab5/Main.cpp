//Problema 4 - Laboratorul 5

#include"Rezervatie.h";

int main()
{
	ifstream file;
	char c_temp[30], c_temp2[30], c_temp3[30], c_temp4[30];
	int i_temp, i_temp2;
	float f_temp, f_temp2, f_temp3;
	CRezervatie rezervatie;

	file.open("In.txt");
	ofstream file2;
	file2.open("Out.txt");

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
		CCaprioara *temp;
		temp = new CCaprioara(c_temp, c_temp2, f_temp, c_temp3, f_temp2, i_temp);
		rezervatie.Add_Caprioara(*temp);
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
		CIepure *temp;
		temp = new CIepure(c_temp, c_temp2, f_temp, c_temp3, f_temp2, f_temp3);
		rezervatie.Add_Iepure(*temp);
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
		CLeu *temp;
		temp= new CLeu(c_temp, c_temp2, f_temp, c_temp3, f_temp2, f_temp3, c_temp4);
		rezervatie.Add_Leu(*temp);
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
		CUrs *temp;
		temp = new CUrs(c_temp, c_temp2, f_temp, c_temp3, f_temp2, i_temp2);
		rezervatie.Add_Urs(*temp);
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
		CVulpe *temp;
		temp= new CVulpe(c_temp, c_temp2, f_temp, c_temp3, f_temp2, f_temp3, c_temp4);
		rezervatie.Add_Vulpe(*temp);
	}
	file.close();

	file2 << "Caprioare:\n";
	for (int i = 0; i < rezervatie.Size_caprioare(); i++)
	{
		CCaprioara temp = rezervatie.Get_Caprioara(i);
		file2 << temp.Get_nume() << " | " << temp.Get_dataaducerii() << " | " << *temp.Get_greutate() << " | " << temp.Get_hranapreferata() << " | " << *temp.Get_cantitatepezi() << " | " << *temp.Get_nrpui() << "\n";
	}

	file2 << "\n";
	file2 << "Iepuri:\n";
	for (int i = 0; i < rezervatie.Size_iepuri(); i++)
	{
		CIepure temp = rezervatie.Get_Iepure(i);
		file2 << temp.Get_nume() << " | " << temp.Get_dataaducerii() << " | " << *temp.Get_greutate() << " | " << temp.Get_hranapreferata() << " | " << *temp.Get_cantitatepezi() << " | " << *temp.Get_suprafataminima() << "\n";
	}

	file2 << "\n";
	file2 << "Lei:\n";
	for (int i = 0; i < rezervatie.Size_lei(); i++)
	{
		CLeu temp = rezervatie.Get_Leu(i);
		file2 << temp.Get_nume() << " | " << temp.Get_dataaducerii() << " | " << *temp.Get_greutate() << " | " << temp.Get_hranapreferata() << " | " << *temp.Get_cantitatepezi() << " | " << *temp.Get_temperaturaminima() << " | " << temp.Get_taraprovenienta() << "\n";
	}

	file2 << "\n";
	file2 << "Ursi:\n";
	for (int i = 0; i < rezervatie.Size_ursi(); i++)
	{
		CUrs temp = rezervatie.Get_Urs(i);
		file2 << temp.CAnimalCarnivor::Get_nume() << " | " << temp.CAnimalCarnivor::Get_dataaducerii() << " | " << *temp.CAnimalCarnivor::Get_greutate() << " | " << temp.CAnimalCarnivor::Get_hranapreferata() << " | " << *temp.CAnimalCarnivor::Get_cantitatepezi() << " | " << *temp.Get_perioadahibernare() << "\n";
	}

	file2 << "\n";
	file2 << "Vulpi:\n";
	for (int i = 0; i < rezervatie.Size_vulpi(); i++)
	{
		CVulpe temp = rezervatie.Get_Vulpe(i);
		file2 << temp.CAnimalCarnivor::Get_nume() << " | " << temp.CAnimalCarnivor::Get_dataaducerii() << " | " << *temp.CAnimalCarnivor::Get_greutate() << " | " << temp.CAnimalCarnivor::Get_hranapreferata() << " | " << *temp.CAnimalCarnivor::Get_cantitatepezi() << " | " << *temp.Get_temperaturamaxima() << " | " << temp.Get_tip() << "\n";
	}
	file2.close();
	return 0;
}