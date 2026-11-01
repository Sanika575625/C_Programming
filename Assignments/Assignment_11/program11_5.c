#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   RangeDisplayRev
//    Description    :   Display numbers between entered range in reverse order
//    Input          :   Integer
//    Output         :   Integer
//    Date           :   02/11/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("invalid range");
        return;
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d ",iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point: \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point: \n");
    scanf("%d",&iValue2);
       
    RangeDisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;
}