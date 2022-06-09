#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Water.h"
#include "Air.h"

using namespace std;

class Seagull :public Water, public Air
{
protected:
	float weight;
public:
	Seagull();//default ctor
	Seagull(char* name, float age, float Swim_Speed, float Air_Speed, float weight);//ctor
	Seagull(const Seagull& sg);//copy ctor
	virtual ~Seagull();//dctor
	virtual void print() const;//print func
};

