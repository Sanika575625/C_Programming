#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   FhtoCs
//    Description    :   Converting fahrenheit into celsius
//    Input          :   Float
//    Output         :   Double
//    Date           :   30/10/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0/9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahernheit: \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature into celsius: %lf",dRet);
    return EXIT_SUCCESS;
}