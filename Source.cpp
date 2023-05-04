#include "Functions.h"
#include <array>
#include <memory>
#include "Cat.h"
#include "Dog.h"
#include "Horse.h"
#include "CatDog.h"
#include<fstream>
using namespace std;
//double TogetherFor30Days(CAnimal** a, int size)
//{
//	double n = 0;
//	for (int i = 0; i < size; i++) {
//		CCat* c = dynamic_cast<CCat*>(a[i]);
//		if (c != nullptr) {
//			n += c->GetFoodCaloriesPerDay() * 30;
//			continue;
//		}
//		CDog* d = dynamic_cast<CDog*>(a[i]);
//		if (d != nullptr) {
//			n += d->GetFoodCaloriesPerDay() * 30;
//			continue;
//		}
//		CHorse* h = dynamic_cast<CHorse*>(a[i]);
//		if (h != nullptr) {
//			n += h->GetFoodCaloriesPerDay() * 30;
//			continue;
//		}
//	}
//	return n;
//	}
template <int N>
double AnimalsFor30Days(const array<unique_ptr<CAnimal>, N>& a)
{
	double n = 0;
	for (int i = 0; i < N; i++) {
		CCat* c = dynamic_cast<CCat*>(a[i].get());
		if (c != nullptr) {
			n += c->GetFoodCaloriesPerDay() * 30;
			continue;
		}
		CDog* d = dynamic_cast<CDog*>(a[i].get());
		if (d != nullptr) {
			n += d->GetFoodCaloriesPerDay() * 30;
			continue;
		}
		CHorse* h = dynamic_cast<CHorse*>(a[i].get());
		if (h != nullptr) {
			n += h->GetFoodCaloriesPerDay() * 30;
			continue;
		}
	}
	return n;
}
int main(void)
{
	array<unique_ptr<CAnimal>, 6> animals;
	animals[0] = make_unique<CCat>(CCat(5, 2, activity::high, catBreed::British));
	animals[1] = make_unique<CDog>(CDog(5, 20, activity::high, dogBreed::Sighthound));
	animals[2] = make_unique<CHorse>(CHorse(10, 1000, activity::high, horseBreed::Arabian));
	animals[3] = make_unique<CCat>(CCat());
	animals[4] = make_unique<CDog>(CDog());
	animals[5] = make_unique<CHorse>(CHorse());
	cout << AnimalsFor30Days(animals);

	CatDog a(5, 6, activity::medium, catBreed::Charteux, dogBreed::Haski);
	catBreed d = a.CCat::getBreed();
	CCat f(6, 4, activity::high, catBreed::Bengal);
	double v = a.CCat::getAge();
	f.getBreed();
	cout << a.show();
}
