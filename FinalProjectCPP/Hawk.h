#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Air.h"
#include "Animal.h"
#include "Eagle.h"
using namespace std;

class Hawk :public Eagle
{
private:
	float Tail_Length;
public:
	Hawk();//default ctor
	Hawk(char* name, float age, float Max_Height, float Air_Speed, float Tail_Length);//ctor
	Hawk(const Hawk& H);//copy ctor
	virtual ~Hawk() {}//dctor
	virtual void print() const;//print func
};

