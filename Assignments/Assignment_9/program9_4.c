#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   OddFactorial
//    Description    :   Finding odd factorial of given number
//    Input          :   Integer(-5)
//    Output         :   Integer(15)
//    Date           :   30/10/2026
//    Author:        :   Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    int iFact = 0;

    for(iCnt = 1,iFact = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of Number is: %d",iRet);

    return EXIT_SUCCESS;
}