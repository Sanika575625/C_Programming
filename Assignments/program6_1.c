#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;
    
    if(iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("Bill: %f",fBill);
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5)+((iUnits - 100) * 7);
        printf("Bill: %f",fBill);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
        printf("Bill: %f",fBill);
    }

}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units:");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
