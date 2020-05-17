#pragma once
#include <iostream>
#include <vector>
using namespace std;

template<class T>
class storeBase
{
public:
    storeBase() {};

    //virtual void storeListInSpecialFormat(std::vector<T> list, std::string storage_mode) = 0;

    //virtual void storeListInBasicFormat(std::vector<T> list) = 0;

    virtual void save(std::vector<T> list) = 0;
};