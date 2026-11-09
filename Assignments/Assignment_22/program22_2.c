#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   Pattern
//    Description    :   Accept number from user and print Capital latters
//    Input          :   Integer(3)
//    Output         :   Pattern (3   #   2   #   1    #)
//    Date           :   09/11/2026
//    Author:        :   Sanika Ganapati Jong
//
//////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}