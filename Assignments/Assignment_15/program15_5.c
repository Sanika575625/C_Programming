#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   Percentage
//    Description    :   Display Percentage
//    Input          :   Integer
//    Output         :   Float
//    Date           :   02/11/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1,int iNo2)
{
    float fPercentage = 0.0f;

    if((iNo1 != 0) && (iNo2 != 0))
    {
        fPercentage = ((float)iNo2 / iNo1) * 100;
    }

    return fPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage: %f",fRet);

    return EXIT_SUCCESS;
}