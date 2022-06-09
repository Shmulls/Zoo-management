#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Air.h"
#include "Parrot.h"
using namespace std;

Parrot::Parrot()
{
	Colors = NULL;
}

Parrot::Parrot(char* name, float age, float Max_Height, float Air_Speed, char* Colors) :Bird(name, age, Air_Speed, Max_Height), Animal(name, age)
{
	this->Colors = new char[strlen(Colors) + 1];
	if (this->Colors != NULL)
	{
		strcpy(this->Colors, Colors);
	}
}

Parrot::Parrot(const Parrot& Pa) : Bird(Pa), Animal(Pa)
{
	delete[] Colors;
	this->Colors = new char[strlen(Pa.Colors) + 1];
	if (this->Colors != NULL)
	{
		strcpy(this->Colors, Pa.Colors);
	}
}

void Parrot::print() const
{
	Air::print();
	cout << "The Animal is: Parrot" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "It's speed is: " << Air_Speed << " Kmh." << endl;
	cout << "It's max flight height is: " << Max_Height << " Meters." << endl;
	cout << "It's color is: " << Colors << " Meters." << endl;

}