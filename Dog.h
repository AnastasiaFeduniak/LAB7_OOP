#pragma once
#include "Functions.h"
static string dogBr[] = { "Affenpinscher",
	"Afgan Hound",
	"Airedale Terier",
	"Akita",
	"Haski",
	"Malamute",
	"Bulldog",
	"Water Spaniel",
	"Shepherd",
	"Belgian Tervuren",
	"Bernese Mountain",
	"Bichon Frise",
	"Bloodhound",
	"Dobermann",
	"Sighthound",
	"None" };

enum class dogBreed
{
	Affenpinscher,
	Afgan_Hound,
	Airedale_Terier,
	Akita,
	Haski,
	Malamute,
	Bulldog,
	Water_Spaniel,
	Shepherd,
	Belgian_Tervuren,
	Bernese_Mountain,
	Bichon_Frise,
	Bloodhound,
	Dobermann,
	Sighthound,
	None
};


class CDog : virtual public CAnimal
{
protected:
	dogBreed breed;
public:
	CDog();
	CDog(double age, double weight, activity act, dogBreed breed);
	double GetFoodCaloriesPerDay() override;
	void setBreed(dogBreed db);
	dogBreed getBreed();
	string show();
	string PrintName() override;
};
