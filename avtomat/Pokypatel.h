#pragma once
#include <iostream>

using namespace std;
class Pokypatel
{
	int money;

public:
	Pokypatel(int money){}

	void Converter(int value) {
		double m2 = 0; // временное хранение переведенных денег
		if (value >= 1 and value <= 3) {
			switch (value) {
			case 1: //rub
				m2 = money;
				break;
			case 2: //eur
				m2 = money * 76.70;
				break;
			case 3: //dol
				m2 = money * 70.59;
				break;
			}
		}
		money = m2;
	}


				
};

