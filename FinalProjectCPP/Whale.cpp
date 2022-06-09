#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Water.h"
#include "Dolphin.h"
#include "Whale.h"

using namespace std;

Whale::Whale()
{
	this->vegetarian = false;
}

Whale::Whale(char* name, float age, float Swim_Speed, float Jump_Height, bool veg) :Dolphin(name, age, Swim_Speed, Jump_Height), Animal(name, age)
{
	this->vegetarian = veg;
}

Whale::Whale(const Whale& sh) : Dolphin(sh), Animal(sh)
{
	this->vegetarian = sh.vegetarian;
}

Whale::~Whale()
{
}

void Whale::print() const
{
	Water::print();
	cout << "The Animal is: Whale" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "It's speed is: " << Swim_Speed << " Kmh." << endl;
	cout << "It's jump height is: " << Jump_Height << " Meters." << endl;
	if (this->vegetarian)
		cout << "This Shark is vegetarian " << endl;
	else
		cout << "This Shark is not vegetarian " << endl;

}

