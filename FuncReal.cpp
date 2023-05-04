#include "Functions.h"
#include "Cat.h"
#include "Dog.h"
#include "Horse.h"
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