#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   ChkDigit
//    Description    :   Accept character from user and check whether it is digit or not
//    Input          :   Character(1)
//    Output         :   string(It is a digit)
//    Date           :   17/11/2026
//    Author         :   Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

#define true 1
#define false 0

typedef int BOOL;

int ChkDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
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

    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is a Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return EXIT_SUCCESS;
}