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

void UI::UserInterface()
{
	string x;
	std::cout << "Pentru a adauga un medicament apasati 1" << endl;
	std::cout << "Pentru a sterge un element apasati 2" << endl;
	std::cout << "Pentru a viziona Medicamentele apasati tasta 3" << endl;
	std::cout << "Pentru a afisa elementele cu un anumit string apasati tasta 4" << endl;
	std::cout << "Pentru a afisa medicamente cu o anumita cantitate apasati tasta 5" << endl;
	std::cout << "Pentru a sorta dupa pret apasati tasta 6" << endl;
	std::cout << "Pentru UNDO apasati tasta 7" << endl;
	std::cin >> x;

	while (x != "8")
	{
		if (x == "1")
		{
			add();
		}
		if (x == "2")
		{
			deleteMedicament();
		}
		if (x == "3")
		{
			farmacie.display_medicamente();
		}
		if (x == "4")
		{
			display_anumite_medicamente();
		}
		if (x == "5")
		{
			farmacie.under_menge();
		}
		if (x == "6")
		{
			sortare_afisare();
		}
		if (x == "7")
		{
			if (undo[undo.size() - 1] == 1)
			{
				farmacie.delete_last_medicament();
			}
			if (undo[undo.size() - 1] == 2)
			{

				farmacie.add_medicament(lastmedicament[lastmedicament.size() - 1]);
				lastmedicament.pop_back();
			}
			undo.pop_back();
		}
		cout << "Pentru a adauga un medicament apasati 1" << endl;
		cout << "Pentru a sterge un element apasati 2" << endl;
		cout << "Pentru a viziona Medicamentele apasati tasta 3" << endl;
		cout << "Pentru a afisa elementele cu un anumit string apasati tasta 4" << endl;
		cout << "Pentru a afisa medicamente cu o anumita cantitate apasati tasta 5" << endl;
		cout << "Pentru a sorta dupa pret apasati tasta 6" << endl;
		cout << "Pentru UNDO apasati tasta 7" << endl;
		cin >> x;
	}
}
