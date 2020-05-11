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

    exception getInvalidIntIntervalException() throw()
    {
        return exception("Wrong interval.\n");
    }

    exception throwStandardException() throw()
    {
        throw 0;
    }
    exception throwShortSizeException() throw() {
        return exception("Size to short");
    }
    exception throwInvalidUrl() throw() {
        return exception("Url is wrong");
    }
};


