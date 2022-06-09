#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Water.h"
#include "Dolphin.h"

using namespace std;

class Shark :public Dolphin
{
private:
	bool vegetarian;
public:
	Shark();//default ctor
	Shark(char* name, float age, float Swim_Speed, float Jump_Height, bool veg);//ctor
	Shark(const Shark& sh);//copy ctor
	virtual ~Shark();//dctor
	virtual void print() const;//print func
};



