#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Air.h"
#include "Animal.h"
#include "Bird.h"
using namespace std;

class Parrot :public Bird
{
private:
	char* Colors;
public:
	Parrot();//default ctor
	Parrot(char* name, float age, float Max_Height, float Air_Speed, char* Colors);//ctor
	Parrot(const Parrot& H);//copy ctor
	virtual ~Parrot() {}//dctor
	virtual void print() const;//print func
};