#pragma once
#include "Functions.h"
#include "Cat.h"
#include "Dog.h"
class CatDog : public CCat, public CDog
{
public:
	CatDog();
	CatDog(double age, double weight, activity act, catBreed breedC, dogBreed breedD);
	double GetFoodCaloriesPerDay();
	string show();
	string PrintName() override;
};