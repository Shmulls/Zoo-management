#pragma once
#include <iostream>
using namespace std;
#include "Animal.h"

class Mammal : virtual public Animal
{
protected:
	int speed;
public:
	~Mammal() {}
	Mammal() { speed = 0; }
	Mammal(char* name, float age, int speed) : Animal(name, age)
	{
		this->speed = speed;
	}
	virtual void print()const
	{
		Animal::print();
		cout << "Speed: " << speed << endl;
	}
};

