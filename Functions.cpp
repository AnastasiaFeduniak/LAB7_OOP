#include "Functions.h"
using namespace std;

CAnimal::CAnimal()
{
	age = 0;
	weight = 0;
	act = activity::None;
}
CAnimal::CAnimal(double age, double weight, activity act) : age(age), weight(weight), act(act) {}

double CAnimal::getAge() { return age; }
double CAnimal::getWeight() { return weight; }
void CAnimal::setAge(double a) { age = a; }
void CAnimal::setWeight(double w) { weight = w; }
activity CAnimal::getActivity() { return act; }
void CAnimal::setActivity(activity a) { act = a; }
string CAnimal::show()
{
	string a = "Age: " + to_string(age) + "\n" + "Weight: " + to_string(weight) + "\n" + "Activity: " + activ[static_cast<int>(act)] + "\n";
	//cout << "Age: " << age << endl << "Weight: " << weight << endl << "Activity: " << activ[static_cast<int>(act)] << endl;
	return a;
}
string CAnimal::PrintName()
{
	string a = "CAnimal";
	return a;
}

