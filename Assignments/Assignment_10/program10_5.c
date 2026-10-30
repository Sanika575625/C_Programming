#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   SquareMeter
//    Description    :   Converting square feet into square meter
//    Input          :   Integer
//    Output         :   Double
//    Date           :   30/10/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iNo)
{
    double dSquareMeter = 0.0;

    dSquareMeter = iNo * 0.0929;

    return dSquareMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter: %lf",dRet);
    return EXIT_SUCCESS;
}