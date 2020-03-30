#pragma once
#include<iostream>
#include<vector>
#include "Medicament.h"

class Apotheke
{
private:
	vector<Medicament>v;
public:
	Apotheke();
	Apotheke(vector<Medicament>a);
	void add_medicament(Medicament);
	void delete_medicament(string);
	void display_medicamente();
	void display_certain_medicamente(string);
	void sort_medicament(vector<Medicament>a);
	void under_menge();
	void sortare_pret();
	void delete_last_medicament();
	Medicament getter_f(string a);
	string getterLastMedicamentName();
};

