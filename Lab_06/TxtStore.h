#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include "userRepo.h"
#include "storeBase.h"
class TxtStore : storeBase<Film>
{
private:
	std::string filename;
public:
	TxtStore() {};
	TxtStore(std::string other) { filename = other; };
	void save(vector<Film> filmList);
};

