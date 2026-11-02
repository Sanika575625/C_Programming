#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   NonFact
//    Description    :   Display Non Factors of number 
//    Input          :   Integer
//    Output         :   Integer
//    Date           :   02/11/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d ",iCnt);
        }
    } 
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}