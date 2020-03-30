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
