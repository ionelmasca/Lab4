#include <iostream>
#include "ShortTest.h"
#include "SortedIteratedList.h"
#include "ListIterator.h"
#include "ExtendedTest.h"
using namespace std;

Relation agb;


int main() 
{
	
	SortedIteratedList l(agb);

	l.add(9);
	l.add(20);
	l.add(15);
	l.add(17);
	l.add(18);
	l.add(90);
	l.add(7);
	
	//ListIterator p = l.search(9);


	//l.remove(p);
	//l.afisare();

	//testAll();
	//cout << "abc"<<endl; 
	testAllExtended();
	std::cout << "Finished ALL Tests!" << std::endl;
	system("pause");
	return 0;
}