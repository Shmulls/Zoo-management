#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Water.h"
#include "Dolphin.h"

using namespace std;

Dolphin::Dolphin()
{
	this->Jump_Height = 0;
}

Dolphin::Dolphin(char* name, float age, float Swim_Speed, float Jump_Height) :Water(name, age, Swim_Speed), Animal(name, age)
{
	this->Jump_Height = Jump_Height;
}

Dolphin::Dolphin(const Dolphin& d) : Water(d), Animal(d)
{
	this->Jump_Height = d.Jump_Height;
}

Dolphin::~Dolphin()
{
}

void Dolphin::print() const
{
	Water::print();
	cout << "The Animal is: Dolphin" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "It's speed is: " << Swim_Speed << " Kmh." << endl;
	cout << "It's jump height is: " << Jump_Height << " Meters." << endl;

}
