#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   ChkEqual
//    Description    :   Display entered number are equal or not. 
//    Input          :   Integer
//    Output         :   String
//    Date           :   02/11/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define true 1
#define false 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = false;

    printf("Enter Two Number:");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return EXIT_SUCCESS;
}