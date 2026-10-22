#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 1000)
    {
        fFinalAmount = fAmount;
        printf("Payable Amount: %f",fFinalAmount);
    }
    else if(fAmount < 5000)
    {
        fDiscount = 10.0f;
        fFinalAmount = fAmount-(fAmount *(fDiscount/100));
        printf("Payable Amount: %f",fFinalAmount);
    }
    else
    {
        fDiscount = 20.0f;
        fFinalAmount = fAmount-(fAmount *(fDiscount/100));
        printf("Payable Amount: %f",fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount:");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}