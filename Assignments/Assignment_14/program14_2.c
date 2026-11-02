#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   FactRev
//    Description    :   Display Factors of number in decreasing order
//    Input          :   Integer
//    Output         :   Integer
//    Date           :   02/11/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2; iCnt >= 1 ; iCnt--)
    {
        if((iNo % iCnt) == 0)
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

    FactRev(iValue);

    return EXIT_SUCCESS;
}