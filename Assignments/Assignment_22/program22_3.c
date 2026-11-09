#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   Pattern
//    Description    :   Accept number from user and print Capital latters
//    Input          :   Integer(4)
//    Output         :   Pattern (1   *   2   *   3    *   4    *)
//    Date           :   09/11/2026
//    Author:        :   Sanika Ganapati Jong
//
//////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
    printf("\n\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}