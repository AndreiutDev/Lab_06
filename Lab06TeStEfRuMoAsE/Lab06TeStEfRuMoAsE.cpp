#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06/Film.h"
#include "../Lab_06/Film.cpp"
#include "../Lab_06/ValidatorClass1.h"
#include "../Lab_06/ValidatorClass1.cpp"
#include "../Lab_06/FilmRepo.h"
#include "../Lab_06/FilmRepo.cpp"
#include "../Lab_06/userRepo.h"
#include "../Lab_06/userRepo.cpp"
#include "../Lab_06/FilmController.h"
#include "../Lab_06/FilmController.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab06TeStEfRuMoAsE
{
	TEST_CLASS(Lab06TeStEfRuMoAsE)
	{
	public:
		
		TEST_METHOD(TestAddRepo)
		{
			FilmRepo controller;
			Film f1 = Film("The Matrix", "action", 1999, 1000, L"https://www.youtube.com/watch?v=vKQi3bBA1y8");
			Film f2 = Film("Psycho", "horror", 1960, 909, L"https://www.youtube.com/watch?v=Wz719b9QUqY");
			Film f3 = Film("Titanic", "drama", 1997, 999, L"https://www.youtube.com/watch?v=kVrqfYjkTdQ");
			Film f4 = Film("Hereditary", "horror", 2018, 90, L"https://www.youtube.com/watch?v=YHxcDbai7aU");
			Film f5 = Film("Avengers", "action", 2012, 1234, L"https://www.youtube.com/watch?v=eOrNdBpGMv8");
			Film f6 = Film("Avengers Infinity War", "action", 2017, 999, L"https://www.youtube.com/watch?v=6ZfuNTqbHE8");


			Assert::AreEqual(controller.filmAdd(f1), true);
			Assert::AreEqual(controller.filmAdd(f1), false);
			Assert::AreEqual(controller.filmAdd(f2), true);
			Assert::AreEqual(controller.filmAdd(f2), false);
			Assert::AreEqual(controller.filmAdd(f3), true);
			Assert::AreEqual(controller.filmAdd(f3), false);
			Assert::AreEqual(controller.filmAdd(f4), true);
			Assert::AreEqual(controller.filmAdd(f5), true);
			Assert::AreEqual(controller.filmAdd(f5), false);
			Assert::AreEqual(controller.filmAdd(f6), true);
			Assert::AreEqual(controller.filmAdd(f6), false);
		}
		TEST_METHOD(TestDeleteRepo)
		{
			FilmRepo controller;
			Film f1 = Film("The Matrix", "action", 1999, 1000, L"https://www.youtube.com/watch?v=vKQi3bBA1y8");
			Film f2 = Film("Psycho", "horror", 1960, 909, L"https://www.youtube.com/watch?v=Wz719b9QUqY");
			Film f3 = Film("Titanic", "drama", 1997, 999, L"https://www.youtube.com/watch?v=kVrqfYjkTdQ");
			Film f4 = Film("Hereditary", "horror", 2018, 90, L"https://www.youtube.com/watch?v=YHxcDbai7aU");
			Film f5 = Film("Avengers", "action", 2012, 1234, L"https://www.youtube.com/watch?v=eOrNdBpGMv8");
			Film f6 = Film("Avengers Infinity War", "action", 2017, 999, L"https://www.youtube.com/watch?v=6ZfuNTqbHE8");

			controller.filmAdd(f1);
			controller.filmAdd(f2);
			controller.filmAdd(f3);
			controller.filmAdd(f4);
			controller.filmAdd(f5);
			controller.filmAdd(f6);
			Assert::AreEqual(controller.filmDelete(f1), true);
			Assert::AreEqual(controller.filmDelete(f3), true);
			Assert::AreEqual(controller.filmDelete(f5), true);
			Assert::AreEqual(controller.filmDelete(f6), true);
			Assert::AreEqual(controller.filmDelete(f6), false);
		}
		TEST_METHOD(TestUpdateRepo)
		{
			FilmRepo controller;
			Film f1 = Film("The Matrix", "action", 1999, 1000, L"https://www.youtube.com/watch?v=vKQi3bBA1y8");
			Film f2 = Film("Psycho", "horror", 1960, 909, L"https://www.youtube.com/watch?v=Wz719b9QUqY");
			Film f3 = Film("Titanic", "drama", 1997, 999, L"https://www.youtube.com/watch?v=kVrqfYjkTdQ");
			Film f4 = Film("Hereditary", "horror", 2018, 90, L"https://www.youtube.com/watch?v=YHxcDbai7aU");
			Film f5 = Film("Avengers", "action", 2012, 1234, L"https://www.youtube.com/watch?v=eOrNdBpGMv8");
			Film f6 = Film("Avengers Infinity War", "action", 2017, 999, L"https://www.youtube.com/watch?v=6ZfuNTqbHE8");

			controller.filmAdd(f1);
			controller.updateFilm(f1, f2);
			Assert::AreEqual(controller.filmAdd(f1), true);
			Assert::AreEqual(controller.filmAdd(f2), false);
		}

		TEST_METHOD(TestWishListAdd)
		{
			FilmRepo controller;
			WishlistRepo userRepo;
			Film f1 = Film("The Matrix", "action", 1999, 1000, L"https://www.youtube.com/watch?v=vKQi3bBA1y8");
			Film f2 = Film("Psycho", "horror", 1960, 909, L"https://www.youtube.com/watch?v=Wz719b9QUqY");
			Film f3 = Film("Titanic", "drama", 1997, 999, L"https://www.youtube.com/watch?v=kVrqfYjkTdQ");
			Film f4 = Film("Hereditary", "horror", 2018, 90, L"https://www.youtube.com/watch?v=YHxcDbai7aU");
			Film f5 = Film("Avengers", "action", 2012, 1234, L"https://www.youtube.com/watch?v=eOrNdBpGMv8");
			Film f6 = Film("Avengers Infinity War", "action", 2017, 999, L"https://www.youtube.com/watch?v=6ZfuNTqbHE8");

			controller.filmAdd(f1);
			controller.filmAdd(f2);
			controller.filmAdd(f3);
			controller.filmAdd(f4);
			Assert::AreEqual(userRepo.wishListAdd(f1), true);
			Assert::AreEqual(userRepo.wishListAdd(f1), false);
			Assert::AreEqual(userRepo.wishListAdd(f5), true);
			Assert::AreEqual(userRepo.wishListAdd(f6), true);
			Assert::AreEqual(userRepo.wishListAdd(f6), false);
		}

		TEST_METHOD(TestWishListDele)
		{
			FilmRepo controller;
			WishlistRepo userRepo;
			Film f1 = Film("The Matrix", "action", 1999, 1000, L"https://www.youtube.com/watch?v=vKQi3bBA1y8");
			Film f2 = Film("Psycho", "horror", 1960, 909, L"https://www.youtube.com/watch?v=Wz719b9QUqY");
			Film f3 = Film("Titanic", "drama", 1997, 999, L"https://www.youtube.com/watch?v=kVrqfYjkTdQ");
			Film f4 = Film("Hereditary", "horror", 2018, 90, L"https://www.youtube.com/watch?v=YHxcDbai7aU");
			Film f5 = Film("Avengers", "action", 2012, 1234, L"https://www.youtube.com/watch?v=eOrNdBpGMv8");
			Film f6 = Film("Avengers Infinity War", "action", 2017, 999, L"https://www.youtube.com/watch?v=6ZfuNTqbHE8");

			controller.filmAdd(f1);
			controller.filmAdd(f2);
			controller.filmAdd(f3);
			controller.filmAdd(f4);
		}
	};
}
