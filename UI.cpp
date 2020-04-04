#include "UI.h"
#include <iostream>
#include <vector>
using namespace std;



Medicament a("Paracetamol", 50, 10);
Medicament f("Paramol", 50, 10);
Medicament b("Nurofen", 60, 30);

Medicament c("Tusocalm", 90, 15);
Medicament z("Nurofen", 60, 30);
Medicament y("Tusocalm", 90, 15);


vector<Medicament>l =  { a, f , b, c, y, z };


Apotheke farmacie(l);
vector<int>undo;
vector<Medicament>lastmedicament;

UI::UI()
{

}
void UI::add()
{
	string name;
	std::cout << "Name: ";
	std::cin >> name;
	int concentration;
	std::cout << "Concentration: ";
	std::cin >> concentration;
	int price;
	std::cout << "price: ";
	std::cin >> price;

	farmacie.add_medicament(Medicament(name, concentration, price));
	undo.push_back(1);
}

void UI::deleteMedicament()
{
	string f;
	std::cout << "Numele medicamentului pt stergere: ";
	std::cin >> f;
	lastmedicament.push_back(farmacie.getter_f(f));
	farmacie.delete_medicament(f);
	undo.push_back(2);
}

void UI::display_anumite_medicamente()
{
	string g;
	std::cout << "Introduceti literele care sa se regaseasca in medicament: ";
	std::cin >> g;
	farmacie.display_certain_medicamente(g);
}

void UI::sortare_afisare()
{
	farmacie.sortare_pret();
	farmacie.display_medicamente();
	undo.push_back(3);
}

