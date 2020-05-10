#pragma once
#include <iostream>
#include <fstream>
#include "userRepo.h"
using namespace std;

template<class T>
class storeBaseClass
{
    public:
        virtual void storeListInSpecialFormat(std::vector<T> list, std::string storage_mode) = 0;
        virtual void storeListInBasicFormat(std::vector<T> list) = 0;
};

class storeWishList : storeBaseClass<Film>
{
private:
public:
    storeWishList() {};
    void storeListInSpecialFormat(std::vector<Film> filmList, std::string storage_mode);
    void storeListInBasicFormat(std::vector<Film> filmList);
};

