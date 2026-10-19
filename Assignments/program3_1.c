#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   PrintEven
//    Description    :   To print even no upto entered no
//    Input          :   Integer
//    Output         :   Integers
//    Date           :   19/10/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////
void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("%d ",iCnt * 2);
        iCnt++;
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}