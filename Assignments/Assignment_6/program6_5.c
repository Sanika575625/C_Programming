#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(fSalary <= 0 || iYears < 0)
    {
        printf("Invalid input");
    }
    else if(iYears > 10)
    {
        fBonus = fSalary * 0.15;
        printf("Bonus: %f",fBonus);
    }
    else if(iYears >= 5)
    {
        fBonus = fSalary * 0.10;
        printf("Bonus: %f",fBonus);  
    }
    else
    {
        fBonus = fSalary * 0.05;
        printf("Bonus: %f",fBonus);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service:");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary,iYears);

    return EXIT_SUCCESS;
}