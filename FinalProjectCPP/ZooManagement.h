#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Air.h"
#include "Animal.h"
//#include "Cat.h"
#include "Crocodile.h"
#include "Dolphin.h"
#include "Eagle.h"
#include "Hawk.h"
#include "Land.h"
#include "Lion.h"
#include "Seguall.h"
#include "Shark.h"
#include "Water.h"

using namespace std;

class ZooManagement
{
private:
	Animal** Arr;
	int Size;

public:
	ZooManagement();//ctor
	~ZooManagement();
	void Init();//menu
	bool Find(char* name);//track animal by name
	void operator +=(Animal* a);//add pointer to the array
	void operator -=(char* name);//remove object from array
	bool IsExist(char* name);//chack if name is already exist
	void PrintAll();
	bool Vaild_Name(char* name);//check if name is valid
};
