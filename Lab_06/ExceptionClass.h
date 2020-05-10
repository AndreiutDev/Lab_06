#pragma once
#include<iostream>
#include <stdio.h>
using namespace std;
class ExceptionClass
{
public:
    exception getInvalidIntException() throw()
    {
        return exception("Invalid integer.\n");
    }

    exception getInvalidIntIntervalException() throw(exception)
    {
        return exception("Wrong interval.\n");
    }

    void throwStandardException() throw()
    {
        throw 0;
    }
};


