#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Water.h"
#include "Dolphin.h"
#include "Shark.h"

using namespace std;

Shark::Shark()
{
	this->vegetarian = false;
}

Shark::Shark(char* name, float age, float Swim_Speed, float Jump_Height, bool veg) :Dolphin(name, age, Swim_Speed, Jump_Height), Animal(name, age)
{
	this->vegetarian = veg;
}

Shark::Shark(const Shark& sh) : Dolphin(sh), Animal(sh)
{
	this->vegetarian = sh.vegetarian;
}

Shark::~Shark()
{
}

void Shark::print() const
{
	Water::print();
	cout << "The Animal is: Shark" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "It's speed is: " << Swim_Speed << " Kmh." << endl;
	cout << "It's jump height is: " << Jump_Height << " Meters." << endl;
	if (this->vegetarian)
		cout << "This Shark is vegetarian " << endl;
	else
		cout << "This Shark is not vegetarian " << endl;

}

