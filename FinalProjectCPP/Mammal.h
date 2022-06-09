#pragma once
#include <iostream>
using namespace std;
#include "Animal.h"
#include "Water.h"

class Mammal : public Water
{
protected:
	char* foodtype;
public:
	~Mammal() { delete[]foodtype; }
	Mammal() { foodtype = NULL; }
	Mammal(char* name, float age, char* ft) : Animal(name, age)
	{
		foodtype = new char[strlen(ft) + 1];
		if (ft != NULL)
			strcpy(foodtype, ft);
		else
			foodtype = NULL;
	}
	virtual void print()const
	{
		Animal::print();
		cout << "Food type: " << foodtype << endl;
	}
};

