#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   DisplayFactors
//    Description    :   Perform even factors of number
//    Input          :   Integer
//    Output         :   Integers
//    Date           :   19/10/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if(iNo % iCnt == 0 )
        {
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);
    
    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}