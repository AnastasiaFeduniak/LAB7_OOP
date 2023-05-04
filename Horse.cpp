#include "Horse.h"
using namespace std;
CHorse::CHorse()
{
	age = 0;
	weight = 0;
	act = activity::None;
	breed = horseBreed::None;
}
CHorse::CHorse(double age, double weight, activity act, horseBreed breed) : CAnimal(age, weight, act), breed(breed) {}
double CHorse::GetFoodCaloriesPerDay()
{
	double calories = 0;
	calories = 100 * weight + 2 * age;
	switch (act)
	{
	case activity::low: calories *= 1.2; break;
	case activity::medium: calories *= 1.6; break;
	case activity::high: calories *= 2.0; break;
	default: calories *= 1.4; break;
	}
	return calories;
}
void CHorse::setBreed(horseBreed hb) { breed = hb; }
horseBreed CHorse::getBreed() { return breed; }
string CHorse::show()
{
	string a = "Breed: " + horseBr[static_cast<int>(breed)] + "\n";
	return CAnimal::show() + a;
}
string CHorse::PrintName()
{
	string a = "CHorse";
	return a;
}