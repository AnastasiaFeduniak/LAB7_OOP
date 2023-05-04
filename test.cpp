#include "pch.h"
#include<array>
#include<memory>
#include "pch.h"
//#include "../Project1/Functions.h"
//#include "../Project1/Cat.h"
//#include "../Project1/Dog.h"
//#include "../Project1/Horse.h"
//#include "../Project1/CatDog.h"
#include "../Project1/Functions.cpp"
#include "../Project1/Cat.cpp"
#include "../Project1/Dog.cpp"
#include "../Project1/Horse.cpp"
#include "../Project1/CatDog.cpp"
#include "../Project1/CatDog.h"
#include "../Project1/FuncReal.cpp"
TEST(CCat, Cat) {
	CCat  r;
	CCat u(5, 3, activity::high, catBreed::Bengal);
	EXPECT_EQ(u.getAge(), 5);
	EXPECT_EQ(u.getWeight(), 3);
	EXPECT_EQ(u.getActivity(), activity::high);
	EXPECT_EQ(u.getBreed(), catBreed::Bengal);
	EXPECT_EQ(r.getAge(), 0);
	EXPECT_EQ(r.getWeight(), 0);
	EXPECT_EQ(r.getActivity(), activity::None);
	EXPECT_EQ(r.getBreed(), catBreed::None);
	EXPECT_EQ(r.PrintName(), "CCat");
	EXPECT_EQ(u.show(), "Age: 5.000000\nWeight: 3.000000\nActivity: High\nBreed: Bengal\n");
	EXPECT_EQ(r.show(), "Age: 0.000000\nWeight: 0.000000\nActivity: None\nBreed: None\n");
	EXPECT_NEAR(u.GetFoodCaloriesPerDay(), 428.8, 0.01);
	EXPECT_NEAR(r.GetFoodCaloriesPerDay(), 0, 0.01);
	r.show();
}
TEST(CDog, Dog) {
	CDog  r;
	CDog u(10, 15, activity::low, dogBreed::Akita);
	EXPECT_EQ(u.getAge(), 10);
	EXPECT_EQ(u.getWeight(), 15);
	EXPECT_EQ(u.getActivity(), activity::low);
	EXPECT_EQ(u.getBreed(), dogBreed::Akita);
	EXPECT_EQ(r.getAge(), 0);
	EXPECT_EQ(r.getWeight(), 0);
	EXPECT_EQ(r.getActivity(), activity::None);
	EXPECT_EQ(r.getBreed(), dogBreed::None);
	EXPECT_EQ(r.PrintName(), "CDog");
	EXPECT_EQ(u.show(), "Age: 10.000000\nWeight: 15.000000\nActivity: Low\nBreed: Akita\n");
	EXPECT_EQ(r.show(), "Age: 0.000000\nWeight: 0.000000\nActivity: None\nBreed: None\n");
	EXPECT_NEAR(u.GetFoodCaloriesPerDay(), 1734, 0.01);
	EXPECT_NEAR(r.GetFoodCaloriesPerDay(), 0, 0.01);
	r.show();
}
TEST(CHorse, Horse) {
	CHorse  r;
	CHorse u(7, 900, activity::low, horseBreed::Irish_Cob);
	EXPECT_EQ(u.getAge(), 7);
	EXPECT_EQ(u.getWeight(), 900);
	EXPECT_EQ(u.getActivity(), activity::low);
	EXPECT_EQ(u.getBreed(), horseBreed::Irish_Cob);
	EXPECT_EQ(r.getAge(), 0);
	EXPECT_EQ(r.getWeight(), 0);
	EXPECT_EQ(r.getActivity(), activity::None);
	EXPECT_EQ(r.getBreed(), horseBreed::None);
	EXPECT_EQ(r.PrintName(), "CHorse");
	EXPECT_EQ(u.show(), "Age: 7.000000\nWeight: 900.000000\nActivity: Low\nBreed: Irish Cob\n");
	EXPECT_EQ(r.show(), "Age: 0.000000\nWeight: 0.000000\nActivity: None\nBreed: None\n");
	EXPECT_DOUBLE_EQ(u.GetFoodCaloriesPerDay(), 108016.8);
	EXPECT_NEAR(r.GetFoodCaloriesPerDay(), 0, 0.01);

}

TEST(CatDog, CatoDog) {
	CatDog  r;
	CatDog u(2, 25, activity::medium, catBreed::British, dogBreed::Dobermann);
	EXPECT_EQ(u.getWeight(), 25);
	EXPECT_EQ(u.getActivity(), activity::medium);
	EXPECT_EQ(u.CCat::getBreed(), catBreed::British);
	EXPECT_EQ(u.CDog::getBreed(), dogBreed::Dobermann);
	EXPECT_EQ(r.getAge(), 0);
	EXPECT_EQ(r.getWeight(), 0);
	EXPECT_EQ(r.getActivity(), activity::None);
	EXPECT_EQ(r.CCat::getBreed(), catBreed::None);
	EXPECT_EQ(r.CDog::getBreed(), dogBreed::None);
	EXPECT_EQ(r.PrintName(), "CatDog");
	EXPECT_EQ(u.show(), "Age: 2.000000\nWeight: 25.000000\nActivity: Medium\nDog breed: Dobermann\nCat breed: British");
	EXPECT_EQ(r.show(), "Age: 0.000000\nWeight: 0.000000\nActivity: None\nDog breed: None\nCat breed: None");
	EXPECT_DOUBLE_EQ(u.GetFoodCaloriesPerDay(), 3411);
	EXPECT_NEAR(r.GetFoodCaloriesPerDay(), 0, 0.01);

}
TEST(AnimalsFor30Days, Days30)
{
	array<unique_ptr<CAnimal>, 6> animals;
	animals[0] = make_unique<CCat>(CCat(5, 2, activity::high, catBreed::British));
	animals[1] = make_unique<CDog>(CDog(5, 20, activity::high, dogBreed::Sighthound));
	animals[2] = make_unique<CHorse>(CHorse(10, 1000, activity::high, horseBreed::Arabian));
	animals[3] = make_unique<CCat>(CCat());
	animals[4] = make_unique<CDog>(CDog());
	animals[5] = make_unique<CHorse>(CHorse());
	EXPECT_DOUBLE_EQ(AnimalsFor30Days(animals), 6124536);
}