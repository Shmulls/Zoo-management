#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Animal
{
protected:
	char* name;
	float age;
	static int count;//number of animals
public:
	Animal();//default ctor
	Animal(char* name, float age);//ctor
	Animal(const Animal& A);//copy ctor
	virtual ~Animal();//dctor
	virtual void print() const = 0;//Pure virtual func
	char* get_name()
	{
		return this->name;
	}
	static int print_static();//static value
	friend class Data;//access to static value
};

