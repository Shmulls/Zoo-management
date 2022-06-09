#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Water.h"
#include "Dolphin.h"

using namespace std;

class Whale :public Dolphin
{
private:
	bool vegetarian;
public:
	Whale();//default ctor
	Whale(char* name, float age, float Swim_Speed, float Jump_Height, bool veg);//ctor
	Whale(const Whale& sh);//copy ctor
	virtual ~Whale();//dctor
	virtual void print() const;//print func
};



