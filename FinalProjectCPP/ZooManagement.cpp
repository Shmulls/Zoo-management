#include "ZooManagement.h"
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define MAX 20
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

ZooManagement::ZooManagement()
{
	Size = 0;
	Arr = NULL;
}

ZooManagement::~ZooManagement()
{
	for (int i = 0; i < Size; i++)
		delete Arr[i];//Dynamic memory release

	delete[] Arr;
}

void ZooManagement::Init()
{
	char* TempName = new char[MAX];
	char* TempColor = new char[MAX];
	Animal* Temp = NULL;
	float Age = 0.0, LandSpeed = 0.0, SwimSpeed = 0.0, AirSpeed = 0.0;
	float Weight = 0.0, MaxHeight = 0.0, HeightJump = 0.0, TailLength = 0.0;
	int choise = 0, type = 0, aftertype, YesNo = 0;
	bool vegen = false;
	while (choise != 5)//menu until exit
	{
		cout << endl << "~~~~~~~~ Welcome to the ZOO ~~~~~~~~" << endl;
		cout << "------------------------------------- " << endl;
		cout << "What would you like to do ?" << endl << endl;
		cout << "1. Add an animal" << endl << "2. Remove an animal" << endl << "3. Track an animak" << endl << "4. Print all animals" << endl << "5. Exit" << endl;
		cin >> choise;
		switch (choise)
		{
		case(1)://add animal to array
		{
			cout << endl << "Please choose the type of the animal: " << endl;
			cout << "------------------------------------- " << endl;
			cout << "1. Land" << endl << "2. Water" << endl << "3. Air" << endl;
			cin >> type;
			cout << endl;
			switch (type)//type of animal
			{
			case(1)://Land
			{
				cout << "The animals are: " << endl;
				cout << "----------------- " << endl;
				cout << "1. Lion" << endl << "2. Cat" << endl << "3. Crocodil" << endl;
				cin >> aftertype;
				cout << endl;
				if (aftertype == 1)//lion
				{
					cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "The animal is: Lion" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Enter name:";
					cin >> TempName;
					while (IsExist(TempName) == true)//check if already exist
					{
						cout << "Name already exist, please enter another name." << endl;
						cout << "Enter name:";
						cin >> TempName;
					}
					while (Vaild_Name(TempName) == false)//check if name isnt valid
					{
						cout << "Enter name:";
						cin >> TempName;
					}
					cout << "Enter age:";
					cin >> Age;
					cout << "Enter the animal's speed:";
					cin >> LandSpeed;
					cout << "Enter the animal's weight:";
					cin >> Weight;
					Temp = new Lion(TempName, Age, LandSpeed, Weight);//create pointer of type Lion
					ZooManagement::operator+=(Temp);
				}
				else if (aftertype == 2)//cat
				{
					cout << "~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "The animal is: Cat" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Enter name:";
					cin >> TempName;
					while (IsExist(TempName) == true)//check if already exist
					{
						cout << "Name already exist, please another name." << endl;
						cout << "Enter name:";
						cin >> TempName;
					}
					while (Vaild_Name(TempName) == false)//check if name isnt valid
					{
						cout << "Enter name:";
						cin >> TempName;
					}
					cout << "Enter age:";
					cin >> Age;
					cout << "Enter the animal's speed:";
					cin >> LandSpeed;
					cout << "Enter the animal's weight:";
					cin >> Weight;
					cout << "Enter the animal's color:";
					cin >> TempColor;
					while (Vaild_Name(TempColor) == false)//check if name isnt valid
					{
						cout << "Enter the animal's color:";
						cin >> TempColor;
					}
					Temp = new Cat(TempName, Age, LandSpeed, Weight, TempColor);//create pointer of type Cat
					ZooManagement::operator+=(Temp);
				}
				else if (aftertype == 3)//crocodile
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "The animal is: Crocodile" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Enter name:";
					cin >> TempName;
					while (IsExist(TempName) == true)//check if already exist
					{
						cout << "Name already exist, please another name." << endl;
						cout << "Enter name:";
						cin >> TempName;
					}
					while (Vaild_Name(TempName) == false)//check if name isnt valid
					{
						cout << "Enter name:";
						cin >> TempName;
					}
					cout << "Enter age:";
					cin >> Age;
					cout << "Enter the animal's swim speed:";
					cin >> SwimSpeed;
					cout << "Enter the animal's land speed:";
					cin >> LandSpeed;
					cout << "Enter the animal's weight:";
					cin >> Weight;
					Temp = new Crocodile(TempName, Age, SwimSpeed, LandSpeed, Weight);//create pointer of type Crocodile
					ZooManagement::operator+=(Temp);
				}
				else
					cout << "Invaild input" << endl;
				break;
			}
			case(2)://Water
			{
				cout << "The animals are: " << endl;
				cout << "----------------- " << endl;
				cout << "1. Dolphin" << endl << "2. Shark" << endl << "3. Crocodil" << endl << "4. Seagull" << endl;
				cin >> aftertype;
				cout << endl;
				if (aftertype == 1)//dolphin
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "The animal is: Dolphin" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Enter name:";
					cin >> TempName;
					while (IsExist(TempName) == true)//check if already exist
					{
						cout << "Name already exist, please another name." << endl;
						cout << "Enter name:";
						cin >> TempName;
					}
					while (Vaild_Name(TempName) == false)//check if name isnt valid
					{
						cout << "Enter name:";
						cin >> TempName;
					}
					cout << "Enter age:";
					cin >> Age;
					cout << "Enter the animal's speed:";
					cin >> SwimSpeed;
					cout << "Enter the animal's heigth jump:";
					cin >> HeightJump;
					Temp = new Dolphin(TempName, Age, SwimSpeed, HeightJump);//create pointer of type Dolphin
					ZooManagement::operator+=(Temp);
				}
				else if (aftertype == 2)//Shark
				{
					cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "The animal is: Shark" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Enter name:";
					cin >> TempName;
					while (IsExist(TempName) == true)//check if already exist
					{
						cout << "Name already exist, please another name." << endl;
						cout << "Enter name:";
						cin >> TempName;
					}
					while (Vaild_Name(TempName) == false)//check if name isnt valid
					{
						cout << "Enter name:";
						cin >> TempName;
					}
					cout << "Enter age:";
					cin >> Age;
					cout << "Enter the animal's speed:";
					cin >> SwimSpeed;
					cout << "Enter the animal's heigth jump:";
					cin >> HeightJump;
					cout << "does the animal is vegen? ";
					cout << " ( 1. yes" << "  0. no )" << endl;
					cin >> YesNo;
					while (YesNo != 1 && YesNo != 0)
					{
						cout << "Wrong input, please try agian:";
						cout << "  ( 1. yes" << "  0. no )" << endl;
						cin >> YesNo;
					}
					if (YesNo == 1)
						vegen = true;
					else
						vegen = false;
					Temp = new Shark(TempName, Age, SwimSpeed, HeightJump, vegen);//create pointer of type Shark
					ZooManagement::operator+=(Temp);
				}
				else if (aftertype == 3)//crocodile
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "The animal is: Crocodile" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Enter name:";
					cin >> TempName;
					while (IsExist(TempName) == true)//check if already exist
					{
						cout << "Name already exist, please another name." << endl;
						cout << "Enter name:";
						cin >> TempName;
					}
					while (Vaild_Name(TempName) == false)//check if name isnt valid
					{
						cout << "Enter name:";
						cin >> TempName;
					}
					cout << "Enter age:";
					cin >> Age;
					cout << "Enter the animal's swim speed:";
					cin >> SwimSpeed;
					cout << "Enter the animal's land speed:";
					cin >> LandSpeed;
					cout << "Enter the animal's weight:";
					cin >> Weight;
					Temp = new Crocodile(TempName, Age, SwimSpeed, LandSpeed, Weight);//create pointer of type Crocodile
					ZooManagement::operator+=(Temp);
				}
				else if (aftertype == 4)//seagull
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "The animal is: Seagull" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Enter name:";
					cin >> TempName;
					while (IsExist(TempName) == true)//check if already exist
					{
						cout << "Name already exist, please another name." << endl;
						cout << "Enter name:";
						cin >> TempName;
					}
					while (Vaild_Name(TempName) == false)//check if name isnt valid
					{
						cout << "Enter name:";
						cin >> TempName;
					}
					cout << "Enter age:";
					cin >> Age;
					cout << "Enter the animal's swim speed:";
					cin >> SwimSpeed;
					cout << "Enter the animal's air speed:";
					cin >> AirSpeed;
					cout << "Enter the animal's weight:";
					cin >> Weight;
					Temp = new Seguall(TempName, Age, SwimSpeed, AirSpeed, Weight);//create pointer of type seagull
					ZooManagement::operator+=(Temp);
				}
				else
					cout << "Invaild input" << endl;
				break;
			}
			case(3)://Air
			{
				cout << "The animals are: " << endl;
				cout << "----------------- " << endl;
				cout << "1. Eagle" << endl << "2. Hawk" << endl << "3. Seagull" << endl;
				cin >> aftertype;
				if (aftertype == 1)//eagle
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "The animal is: Eagle" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Enter name:";
					cin >> TempName;
					while (IsExist(TempName) == true)//check if already exist
					{
						cout << "Name already exist, please another name." << endl;
						cout << "Enter name:";
						cin >> TempName;
					}
					while (Vaild_Name(TempName) == false)//check if name isnt valid
					{
						cout << "Enter name:";
						cin >> TempName;
					}
					cout << "Enter age:";
					cin >> Age;
					cout << "Enter the animal's speed:";
					cin >> AirSpeed;
					cout << "Enter the animal's heigth jump:";
					cin >> MaxHeight;
					Temp = new Eagle(TempName, Age, AirSpeed, MaxHeight);//create pointer of type eagle
					ZooManagement::operator+=(Temp);
				}
				else if (aftertype == 2)//hawk
				{
					cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "The animal is: Hawk" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Enter name:";
					cin >> TempName;
					while (IsExist(TempName) == true)//check if already exist
					{
						cout << "Name already exist, please another name." << endl;
						cout << "Enter name:";
						cin >> TempName;
					}
					while (Vaild_Name(TempName) == false)//check if name isnt valid
					{
						cout << "Enter name:";
						cin >> TempName;
					}
					cout << "Enter age:";
					cin >> Age;
					cout << "Enter the animal's speed:";
					cin >> AirSpeed;
					cout << "Enter the animal's heigth jump:";
					cin >> MaxHeight;
					cout << "Enter the animal's tail's length:";
					cin >> TailLength;
					Temp = new Hawk(TempName, Age, MaxHeight, AirSpeed, TailLength);//create pointer of type hawk
					ZooManagement::operator+=(Temp);
				}
				else if (aftertype == 3)//seagull
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "The animal is: Seagull" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Enter name:";
					cin >> TempName;
					while (IsExist(TempName) == true)//check if already exist
					{
						cout << "Name already exist, please another name." << endl;
						cout << "Enter name:";
						cin >> TempName;
					}
					while (Vaild_Name(TempName) == false)//check if name isnt valid
					{
						cout << "Enter name:";
						cin >> TempName;
					}
					cout << "Enter age:";
					cin >> Age;
					cout << "Enter the animal's swim speed:";
					cin >> SwimSpeed;
					cout << "Enter the animal's air speed:";
					cin >> AirSpeed;
					cout << "Enter the animal's weight:";
					cin >> Weight;
					Temp = new Seguall(TempName, Age, SwimSpeed, AirSpeed, Weight);//create pointer of type seagull
					ZooManagement::operator+=(Temp);
				}
				else
					cout << "Invaild input" << endl;
				break;
			}
			default:
				cout << "Invaild input." << endl;
				break;
			}
			system("cls");//Screen reset
			break;
		}
		case(2)://remove animal
		{
			cout << "Please enter animal's name to remove: ";
			cin >> TempName;
			while (Vaild_Name(TempName) == false)//check if name isnt valid
			{
				cout << "Enter name:";
				cin >> TempName;
			}
			if (IsExist(TempName) == false)//check if already exist
			{
				cout << "Name doesnt exist." << endl;
				break;
			}
			else
				ZooManagement::operator-=(TempName);
			system("cls");//Screen reset
			break;
		}
		case(3)://track animal
		{
			cout << endl << "Please enter animal's name to show: ";
			cin >> TempName;
			while (Vaild_Name(TempName) == false)
			{
				cout << "Enter name:";
				cin >> TempName;
			}
			if (Find(TempName) == false)//check if already exist
				cout << "Name doesnt exist." << endl;

			break;
		}
		case(4)://print array
		{
			ZooManagement::PrintAll();
			break;
		}
		case(5)://exit
		{
			cout << "Bye Bye" << endl;
			break;
		}
		default:
			cout << "Invaild input, please try agian." << endl;
			break;
		}

	}

}

bool ZooManagement::Find(char* name)
{
	for (int i = 0; i < Size; i++)
	{
		if (strcmp(Arr[i]->get_name(), name) == 0)//if the name that entered is equal to name in array
		{
			Arr[i]->print();//print the object with this name
			cout << endl;
			return true;
		}
	}
	return false;//if name doesnt exist
}

void ZooManagement::operator+=(Animal* a)
{
	Animal** TempArr = NULL;//Tempory array
	if (Size == 0)//The array is empty
	{
		Size = 1;
		Arr = new Animal * [Size];//Dynamic memory allocation
		Arr[0] = a;//Inserting the pointer into the array

	}
	else//The array is not empty
	{
		TempArr = new Animal * [Size];//Dynamic memory allocation
		for (int i = 0; i < Size; i++)
			TempArr[i] = Arr[i];//Copy to temporary array
		delete[] Arr;//Deleting the previous array
		Size++;//Increasing the array by one
		Arr = new Animal * [Size];
		for (int i = 0; i < Size - 1; i++)
			Arr[i] = TempArr[i];
		Arr[Size - 1] = a;///Inserting the pointer into the array
	}
	delete[] TempArr;//Deleting Temporary array
}

void ZooManagement::operator-=(char* name)
{
	int i = 0, j = 0;
	Animal** TempArr = NULL;//Tempory array
	TempArr = new Animal * [Size - 1];// new Dynamic memory allocation
	while (i != Size)
	{
		if ((strcmp(Arr[i]->get_name(), name) == 0))//if the name that entered is equal to name in array
		{
			i++;
			continue;//skip
		}
		else
		{
			TempArr[j] = Arr[i];//copy the array without the name entered
			i++;
			j++;
		}
	}
	delete[] Arr;//Dynamic memory release
	Arr = new Animal * [Size - 1];// new Dynamic memory allocation
	Size--;//reduce the size of array
	for (int i = 0; i < Size; i++)
	{
		Arr[i] = TempArr[i];//copy the array without the name entered
	}
	delete[] TempArr;//Dynamic memory release
	Animal::count--;//Static variable update
}


bool ZooManagement::IsExist(char* name)
{
	for (int i = 0; i < Size; i++)
	{
		if (strcmp(Arr[i]->get_name(), name) == 0)//if the name that entered is equal to name in array
			return true;//name exist
	}
	return false;//name dosent exist
}

void ZooManagement::PrintAll()
{
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "          **** ANIMALS IN THE ZOO ****        " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	for (int i = 0; i < Size; i++)
		Arr[i]->print();
	cout << endl << endl << "-------------------------------" << endl;
	cout << "The number of all animals in the zoo is: " << Animal::print_static();
	cout << endl;



}

bool ZooManagement::Vaild_Name(char* name)
{
	for (int i = 0; i < strlen(name); i++)//running on the name
	{
		if (i == 0)//first letter
		{
			if (name[i] < 'A' || name[i] > 'Z')//capital check
			{
				cout << "First letter must be capital" << endl;
				return false;//not capital
			}
		}
		else//other letters
		{
			if (name[i] < 'a' || name[i] > 'z')//letters check
			{
				cout << "Name must be build by small letters only" << endl;
				return false;//not letter
			}
		}
	}
	return true;//the name is valid
}


