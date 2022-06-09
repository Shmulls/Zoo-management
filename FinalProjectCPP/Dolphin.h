#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Water.h"

using namespace std;

class Dolphin :public Water
{
protected:
	float Jump_Height;
public:
	Dolphin();//default ctor
	Dolphin(char* name, float age, float Swim_Speed, char* foodtype, float Jump_Height);//ctor
	Dolphin(const Dolphin& d);//copy ctor
	virtual ~Dolphin();//dctor
	virtual void print() const;//print func
};


