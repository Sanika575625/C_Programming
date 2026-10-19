#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   Display
//    Description    :   Accept two numbers ans display 1st number in 2nd numbers of times
//    Input          :   Integer
//    Output         :   Integers
//    Date           :   18/10/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

int Display(int iNo,int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d ",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    printf("Enter the frequency:");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return EXIT_SUCCESS;
}