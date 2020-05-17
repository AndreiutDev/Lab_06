#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include "userRepo.h"
#include "storeBase.h"
using namespace std;


class storeWishList : storeBase<Film>
{
private:
    
    std::map<string, storeBase<Film>> storeMap;

public:
    storeWishList();

    void storeListInSpecialFormat(std::vector<Film> filmList, std::string storage_mode);
    
    void storeListInBasicFormat(std::vector<Film> filmList);
  
    void saveAsHtml(std::vector<Film> filmList);

    void saveAsCsv(std::vector<Film> filmList);

    //
    void saveAs(string format, vector<Film> filmList);
};

