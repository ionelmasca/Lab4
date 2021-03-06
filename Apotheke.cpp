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

void sortare(vector<Medicament>a)
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

void Apotheke::display_certain_medicamente(string a)
{
	if (a == "")
	{
		sort_medicament(v);
	}
	else
	{
		int longa = 0;
		while (a[longa] != '\0')
		{
			longa++;
		}

		vector<Medicament>l;
		int i = 0;
		while (i < v.size())
		{
			string x = v[i].getterName();

			int longx = 0;
			while (x[longx] != '\0')
			{
				longx++;
			}

			if (longx < longa)
			{
				int gdgefn = 0;
			}
			else
			{
				int j = 0;

				while (j < longx)
				{
					int k = 0;
					while (x[j] == a[k] && longa < longx)
					{
						k++;
						j++;
					}
					if (k == longa)
					{
						l.push_back(v[i]);
					}
					j++;
				}
			}
			i++;
		}
		if (l.size() > 0)
		{
			sortare(l);
		}
		else
		{
			cout << "Nu sunt medicamente";
		}
	}
}


void Apotheke::under_menge()
{
	int x;
	cout << "Introduceti: ";
	cin >> x;
	int i = 0;
	while (i < v.size())
	{
		if (v[i].getterMenge() < x)
		{
			cout << v[i].getterName() << " " << v[i].getterConcentration() << " " << v[i].getterMenge() << " " << v[i].getterPrice() << endl;
		}
		i++;
	}
}

void Apotheke::delete_last_medicament()
{
	v.pop_back();
}

void Apotheke::sortare_pret()
{
	Medicament aux;
	int j;
	int i = 0;
	while (i < v.size() - 1)
	{
		j = i + 1;
		while (j < v.size())
		{
			if (v[i].getterPrice() > v[j].getterPrice())
			{
				aux = v[j];
				v[j] = v[i];
				v[i] = aux;
			}
			j++;
		}
		i++;
	}
}

Medicament Apotheke::getter_f(string a)
{
	int i = 0;
	while (i < v.size())
	{
		if (v[i].getterName() == a)
		{
			return v[i];
		}
		i++;
	}
}

string Apotheke::getterLastMedicamentName()
{
	return v[v.size() - 1].getterName();
}
