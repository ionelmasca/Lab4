#pragma once
#include <iostream>
using namespace std;

class Medicament
{
private:
	string name;
	int concentration;
	int menge;
	int price;
public:
	Medicament();
	Medicament(string, int, int);
	string getterName();
	int getterConcentration();
	int getterMenge();
	int getterPrice();
	void setterName(string);
	void setterConcentration(int);
	void setterMenge(int);
	void setterPrice(int);
};

