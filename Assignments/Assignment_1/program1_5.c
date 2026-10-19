#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   Accept
//    Description    :   To check number is divisible by 5
//    Input          :   Integer
//    Output         :   String
//    Date           :   18/10/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////
void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return EXIT_SUCCESS;
}
