#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   RectArea
//    Description    :   Calculating Area of Reactangle
//    Input          :   Float,Float
//    Output         :   Double
//    Date           :   30/10/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth,float fHeight)
{
    double dArea = 0.0;

    dArea = fHeight * fWidth;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width: \n");
    scanf("%f",&fValue1);

    printf("Enter Height:");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of rectangle: %lf",dRet);
    return EXIT_SUCCESS;
}