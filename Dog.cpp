#include "Dog.h"
using namespace std;

CDog::CDog()
{
	age = 0;
	weight = 0;
	act = activity::None;
	breed = dogBreed::None;
}
CDog::CDog(double age, double weight, activity act, dogBreed breed) : CAnimal(age, weight, act), breed(breed) {}
double CDog::GetFoodCaloriesPerDay()
{
	double calories = 0;
	calories = 95 * weight + 2 * age;
	switch (act)
	{
	case activity::low: calories *= 1.2; break;
	case activity::medium: calories *= 1.6; break;
	case activity::high: calories *= 2.0; break;
	default: calories *= 1.4; break;
	}
	return calories;
}
void CDog::setBreed(dogBreed db) { breed = db; }
dogBreed CDog::getBreed() { return breed; }
string CDog::show()
{
	;
	string a = "Breed: " + dogBr[static_cast<int>(breed)] + "\n";
	return CAnimal::show() + a;
}
string CDog::PrintName()
{
	string a = "CDog";
	return a;
}
