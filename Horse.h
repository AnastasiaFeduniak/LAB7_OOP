#pragma once
#include "Functions.h"
using namespace std;

enum class horseBreed
{
	Aegidienberger,
	Andalusian,
	Arabian,
	Curly,
	Dartmoor,
	Irish_Cob,
	Kentucky_Mountain_Saddle,
	None
};
static string horseBr[] = {
	"Aegidienberger",
	"Andalusian",
	 "Arabian",
	"Curly",
	"Dartmoor",
	"Irish Cob",
	"Kentucky Mountain Saddle",
	"None"
};



class CHorse : public CAnimal
{
protected:
	horseBreed breed;
public:
	CHorse();
	CHorse(double age, double weight, activity act, horseBreed breed);
	double GetFoodCaloriesPerDay() override;
	void setBreed(horseBreed hb);
	horseBreed getBreed();
	string show();
	string PrintName() override;
};