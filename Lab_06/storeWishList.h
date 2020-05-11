#pragma once
#include <iostream>
#include <fstream>
#include "userRepo.h"
#include "storeBase.h"
using namespace std;


class storeWishList : storeBase<Film>
{
private:
    
public:
    storeWishList();

    void storeListInSpecialFormat(std::vector<Film> filmList, std::string storage_mode);
    
    void storeListInBasicFormat(std::vector<Film> filmList);
  
    void saveAsHtml(std::vector<Film> filmList);

    void saveAsCsv(std::vector<Film> filmList);
};

