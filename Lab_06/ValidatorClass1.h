#pragma once
#include "ExceptionClass.h"
#include <iostream>

using namespace std;
class ValidatorClass
{

    private:
        ExceptionClass exceptions;

        //validates an url
        int webCheck(const std::string& url)
        {

            return (std::system(("wget --spider -q " + url).c_str()));
        }
    public:

        //checks if an input is integer
        bool validateInteger(bool cin_return_value);

        //validates an integer to check if its value is in the given interval
        bool validateIntegerInterval(int value, int inferior_margin, int superior_margin);

        //returns true if value is between a vaild year gap
        bool integerInterval(int value) { return this->validateIntegerInterval(value, 1885, 2020); }

        //validates the length of a string input, it cannot be shorter than a letter
        bool validateStringLength(std::string value);

        
        //returns validation result
        bool validateUrl(std::wstring url);

};

