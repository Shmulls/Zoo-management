#include "Animal.h"

Animal::Animal()
{
	name = NULL;
	age = 0.0;
}

Animal::Animal(char* name, float age)
{
	this->name = new char [strlen(name) + 1];
	if (this->name != NULL)
	{
		strcpy(this->name, name);
		this->age = age;
	}
	else
	{
		name = NULL;
		cout << "Name ctor is NULL" << endl;
	}
}

Animal::Animal(const Animal& A)
{
	name = new char[strlen(A.name) + 1];
	if (name == NULL)
	{
		name = NULL;
		cout << "Name is NULL" << endl;
	}
	strcpy(name, A.name);
	age = A.age;
	count++;
}

Animal::~Animal()
{
	delete[]name;
	count--;
}
