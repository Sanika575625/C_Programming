#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   ChkSmall
//    Description    :   Accept character from user and check it is Small case alphabet or not
//    Input          :   Character(A)
//    Output         :   string(It is Not a small case character)
//    Date           :   17/11/2026
//    Author         :   Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

#define true 1
#define false 0

typedef int BOOL;

int ChkSmall(char ch)
{
    if(ch == 'a')
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

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not a Small case Character");
    }

    return EXIT_SUCCESS;
}