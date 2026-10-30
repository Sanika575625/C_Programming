#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   FactorialDiff
//    Description    :   Returns difference between evenand odd factorial of give number
//    Input          :   Integer(-5)
//    Output         :   Integer(-7)
//    Date           :   30/10/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    int iFact = 0;
    int iMul = 0;

    for(iCnt = 1,iFact = 1,iMul = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
        else
        {
            iMul = iMul * iCnt; 
        }
    }
    return (iFact - iMul);
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is: %d",iRet);

    return EXIT_SUCCESS;
}