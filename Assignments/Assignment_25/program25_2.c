#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   ChkCapital
//    Description    :   Accept character from user and check it is Capital alphabet or not
//    Input          :   Character(A)
//    Output         :   string(It is Capital character)
//    Date           :   17/11/2026
//    Author         :   Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

#define true 1
#define false 0

typedef int BOOL;

int ChkCapital(char ch)
{
    if(ch == 'A')
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

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital Character");
    }

    return EXIT_SUCCESS;
}