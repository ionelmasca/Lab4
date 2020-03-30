#include "Apotheke.h"
#include<string.h>

Apotheke::Apotheke()
{

}

Apotheke::Apotheke(vector<Medicament>a)
{
	int i = 0;
	while (i < a.size())
	{
		v.push_back(a[i]);
		i++;
	}
	if (v.size() > 2)
	{
		i = 0;
		while (i < v.size()-1)
		{
			int j = i + 1;
			while (j<v.size())
			{
				if (v[i].getterName() == v[j].getterName() && v[i].getterConcentration() == v[j].getterConcentration())
				{
					v[i].setterMenge(v[i].getterMenge() + 1);
					v.erase(v.begin() + j);
				}
				j++;
			}
			i++;
		}
	}
}

void Apotheke::add_medicament(Medicament a)
{
	v.push_back(a);
}

void Apotheke::delete_medicament(string a)
{
	int i = 0;
	while (i < v.size())
	{
		if (v[i].getterName() == a)
		{
			v.erase(v.begin() + i);
			return;
		}
		i++;
	}
}

void Apotheke::display_medicamente()
{
	int i = 0;
	while (i < v.size())
	{
		cout << v[i].getterName() << " " << v[i].getterConcentration() << " " << v[i].getterMenge() << " " << v[i].getterPrice() << endl;
		i++;
	}
}

void display(vector<Medicament>a)
{
	int i = 0;
	while (i < a.size())
	{
		cout << a[i].getterName() << " " << a[i].getterConcentration() << " " << a[i].getterMenge() << " " << a[i].getterPrice() << endl;
		i++;
	}
}

void Apotheke::sort_medicament(vector<Medicament>a)
{

	Medicament aux;
	int j;
	int i = 0;
	while (i < a.size() - 1)
	{
		j = i + 1;
		while (j < a.size())
		{
			if (a[i].getterName() > a[j].getterName())
			{
				aux = a[j];
				a[j] = a[i];
				a[i] = aux;
			}
			j++;
		}
		i++;
	}
	display(a);
}


