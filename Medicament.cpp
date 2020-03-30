#include "Medicament.h"

Medicament::Medicament()
{

}

Medicament::Medicament(string a, int b, int c)
{
	name = a;
	concentration = b;
	menge = 1;
	price = c;
}

string Medicament::getterName()
{
	return name;
}

int Medicament::getterConcentration()
{
	return concentration;
}

int Medicament::getterMenge()
{
	return menge;
}

int Medicament::getterPrice()
{
	return price;
}

void Medicament::setterName(string a)
{
	name = a;
}

void Medicament::setterMenge(int a)
{
	menge = a;
}

void Medicament::setterConcentration(int a)
{
	concentration = a;
}

void Medicament::setterPrice(int a)
{
	price = a;
}