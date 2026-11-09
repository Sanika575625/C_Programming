#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   Pattern
//    Description    :   Accept number from user and print Capital latters
//    Input          :   Integer(8)
//    Output         :   Pattern (2   4   6    8    10    12    14     16)
//    Date           :   09/11/2026
//    Author:        :   Sanika Ganapati Jong
//
//////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    int iMul = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMul = iCnt * 2;

        printf("%d\t",iMul);
    }
}

int main()
{
    int iValue = 0;

    printf("enter the number of elements:");
    scanf("%d",&iValue);

    Pattern(iValue);
    return EXIT_SUCCESS;
}