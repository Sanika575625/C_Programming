#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSpecial
//  Description   : Accept character from user and check whether it is a special symbol
//  Input         : Character (5)
//  Output        : Boolean (false)
//  Date          : 17/11/2026
//  Author        : Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

#define true 1
#define false 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') ||
       (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = false;

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is a special character.\n");
    }
    else
    {
        printf("It is not a special character.\n");
    }

    return EXIT_SUCCESS;
}
