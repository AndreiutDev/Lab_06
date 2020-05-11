#include "ValidatorClass1.h"

bool ValidatorClass::validateInteger(bool cin_return_value)
{
    if (cin_return_value == false)
    {
        throw exceptions.getInvalidIntException();
        return false;
    }
    return true;
}

bool ValidatorClass::validateIntegerInterval(int value, int inferior_margin, int superior_margin)
{
    if (value < inferior_margin || value > superior_margin)
    {
        throw exceptions.getInvalidIntIntervalException();
        return false;
    }
    
    return true;
}

bool ValidatorClass::validateStringLength(std::string value)
{
    if (value.size() <= 1) {
        throw exceptions.throwShortSizeException();
        return false;
    }
    return true;
}

bool ValidatorClass::validateUrl(std::wstring url)
{
    const std::string link(url.begin(), url.end());
    if (!webCheck(link)) {
        return true;
    }
    else {
        throw exceptions.throwInvalidUrl();
        return false;
    }
   
}
