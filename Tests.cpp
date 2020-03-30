#include "Tests.h"
#include "Apotheke.h"
#include "Medicament.h"

void testall()
{
	vector<Medicament>v;
	Medicament a("Nurofen", 10, 20);
	v = { a };
	Apotheke farmacie(v);

	farmacie.add_medicament(Medicament("Paracetamol", 2, 2));

	assert(farmacie.getterLastMedicamentName() == "Paracetamol");

	farmacie.delete_medicament("Paracetamol");

	assert(farmacie.getterLastMedicamentName() == "Nurofen");

	farmacie.add_medicament(Medicament("Paracetamol", 2, 2));

	farmacie.sortare_pret();

	assert(farmacie.getterLastMedicamentName() == "Nurofen");

	cout << "Running pure !"<<endl;

}