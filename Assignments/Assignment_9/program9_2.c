#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   DollerToINR
//    Description    :   Accept amount in dollar and return it into indain currency
//    Input          :   Integer(10)
//    Output         :   Integer(700)
//    Date           :   30/10/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

int DollerToINR(int iNo)
{
    int iAmount = 0;

    iAmount = iNo * 70;

    return iAmount;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD:");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR: %d",iRet);

    return EXIT_SUCCESS;
}