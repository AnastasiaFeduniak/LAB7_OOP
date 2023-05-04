#include "Cat.h"
using namespace std;
CCat::CCat()
{
	age = 0;
	weight = 0;
	act = activity::None;
	breed = catBreed::None;
}
CCat::CCat(double age, double weight, activity act, catBreed breed) : CAnimal(age, weight, act), breed(breed) {}
double CCat::GetFoodCaloriesPerDay()
{
	double calories = 0;
	calories = 86 * weight + 2 * age;
	switch (act)
	{
	case activity::low: calories *= 1.2; break;
	case activity::medium: calories *= 1.4; break;
	case activity::high: calories *= 1.6; break;
	default: calories *= 1.4; break;
	}
	return calories;
}
void CCat::setBreed(catBreed cb) { breed = cb; }
catBreed CCat::getBreed() { return breed; }
string CCat::show()
{
	string a = "Breed: " + catBr[static_cast<int>(breed)] + "\n";
	return CAnimal::show() + a;
}
string CCat::PrintName()
{
	string a = "CCat";
	return a;
}
