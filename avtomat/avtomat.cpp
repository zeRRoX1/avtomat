#include <iostream>
#include "Pokypatel.h"

using namespace std;		

int main()
{
	int v;
	cout << "Выберите ценность rub = 1, eur = 2, dol = 3";
	cin >> v;
	Pokypatel p(1000);
	p.Converter(v);

}
