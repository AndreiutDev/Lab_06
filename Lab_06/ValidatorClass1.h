#pragma once
#include "ExceptionClass.h"
class ValidatorClass
{

    private:
        ExceptionClass exceptions;
    public:
        bool validateInteger(bool cin_return_value)
        {
            if (cin_return_value == false)
            {
                throw exceptions.getInvalidIntException();
                return false;
            }
            return true;
        }
        bool validateIntegerInterval(int value, int inferior_margin, int superior_margin)
        {
            if (value < inferior_margin || value > superior_margin)
            {
                throw exceptions.getInvalidIntIntervalException();
                return false;
            }
            return true;
        }

};

