#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include "userRepo.h"
#include "storeBase.h"
class CsvStore : storeBase<Film>
{
private:
	std::string filename;
public:
	CsvStore(std::string other) { filename = other; };
	void save(vector<Film> filmList);
};

