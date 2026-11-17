#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   ChkAlpha
//    Description    :   Accept character from user and check it is alphabet or not
//    Input          :   Character(A)
//    Output         :   string(It is character)
//    Date           :   17/11/2026
//    Author         :   Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

#define true 1
#define false 0

typedef int BOOL;

int ChkAlpha(char ch)
{
    if((ch == 'a')||(ch == 'A'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a Character");
    }

    return EXIT_SUCCESS;
}
