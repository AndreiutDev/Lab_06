#pragma once
#include <functional>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include "Film.h"
#include "FilmRepo.h"

using namespace std;
class FileClass
{
	private:

	public:
		FileClass() {};

		//void readFromFile(function<void(Film f)> action);
		void readFromFile();

		void writeFile();
};

