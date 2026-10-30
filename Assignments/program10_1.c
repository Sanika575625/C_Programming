#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   CircleArea
//    Description    :   Calculating Area of Circle
//    Input          :   Float
//    Output         :   Double
//    Date           :   30/10/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    float fPI = 3.14;

    dArea = fPI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius: \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of rectangle: %lf",dRet);
    return EXIT_SUCCESS;
}