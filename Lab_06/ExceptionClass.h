#pragma once
#include<iostream>
#include <stdio.h>
using namespace std;
class ExceptionClass
{
public:
    exception getInvalidIntException() throw(invalid_argument)
    {
        return invalid_argument("Invalid integer.");
    }

    exception getInvalidIntIntervalException() throw(invalid_argument)
    {
        return invalid_argument("Wrong interval.");
    }

    void throwStandardException() throw()
    {
        throw 0;
    }
};


