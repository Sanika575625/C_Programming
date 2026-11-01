#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   RangeDisplayEven
//    Description    :   Display Even numbers between entered range
//    Input          :   Integer
//    Output         :   Integer
//    Date           :   02/11/2026
//    Author:        :   Sanika Ganapati Jong
//
////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d ",iCnt);
        }
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Range:");
    scanf("%d",&iValue1);

    printf("Enter Ending Range:");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return EXIT_SUCCESS;
}