#include "CatDog.h"
using namespace std;
CatDog::CatDog()
{
	age = 0;
	weight = 0;
	act = activity::None;
	CCat::breed = catBreed::None;
	CDog::breed = dogBreed::None;
}
CatDog::CatDog(double a, double w, activity ac, catBreed breedC, dogBreed breedD) : CCat(a, w, ac, breedC), CDog(a, w, ac, breedD)
{
	age = a;
	weight = w;
	act = ac;
	CCat::breed = breedC;
	CDog::breed = breedD;
}
string CatDog::show()
{
	string a = "Age: " + to_string(CCat::age) + "\n" + "Weight: " + to_string(CCat::weight) + "\n" + "Activity: " + activ[static_cast<int>(CCat::act)] + "\n" + "Dog breed: " + dogBr[static_cast<int>(CDog::breed)] + "\n" + "Cat breed: " + catBr[static_cast<int>(CCat::breed)];
	return a;
}
string CatDog::PrintName()
{
	string a = "CatDog";
	return a;
}
double CatDog::GetFoodCaloriesPerDay()
{
	return CCat::GetFoodCaloriesPerDay() / 2 + CDog::GetFoodCaloriesPerDay() / 2;
}