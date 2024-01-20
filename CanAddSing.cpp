/*
                        This function prohibits putting two characters that cannot be linked to each other to avoid other errors.


*/


#include "MyForm.h"
#include "CanAddSing.h"

using namespace System;

bool canAddSing(String^ currentText, bool minusPress, bool plusPress)
{
    if (String::IsNullOrEmpty(currentText))
    {
        return true;
    }
    // Get the last character from the current text
    wchar_t lastChar = currentText[currentText->Length - 1];

   
    if (lastChar == '^' && minusPress == true) {
        return true;
    }
    else if (lastChar == '%' && minusPress == true) {
        return true;
    }
    else if (lastChar == '%' && plusPress == true) {
        return true;
    }
    else {

        if (lastChar == '+' || lastChar == '-' || lastChar == '*' || lastChar == '/' || lastChar == '^' || lastChar == L'\u221A' || lastChar == '.' || lastChar == '%')
        {
            return false;
        }
    }
    minusPress == false;
    plusPress == false;

    return true;
}

