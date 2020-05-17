#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include "userRepo.h"
#include "storeBase.h"
class HtmlClass : storeBase<Film>
{
private:
	std::string filename;
public:
	HtmlClass(std::string other) { filename = other; };
	void save(vector<Film> filmList);
};

