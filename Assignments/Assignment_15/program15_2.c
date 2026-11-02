#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   ChkGreater
//    Description    :   Display entered number is greater or small than 100 
//    Input          :   Integer
//    Output         :   String
//    Date           :   02/11/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define true 1
#define false 0

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
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
    int iValue = 0;
    BOOL bRet = false;

    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return EXIT_SUCCESS;
}