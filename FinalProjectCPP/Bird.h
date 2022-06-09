#pragma once
#include <iostream>
using namespace std;
#include "Animal.h"
#include "Air.h"

class Bird : public Air
{
private:
	bool migratory;
public:
	~Bird() {}
	Bird() { migratory = false; }
	Bird(char* name, float age, float flight_speed, bool migratory): Animal(name, age), Air(name, age, flight_speed)
	{
		this->migratory = migratory;
	}
	virtual bool if_migratory(int choose) = 0;
	virtual void print()const
	{
		Animal::print();
		Air::print();
		if (if_migratory)
			cout << "His migratory bird" << endl;
		else
			cout << "His not migratory bird" << endl;
	}
};
