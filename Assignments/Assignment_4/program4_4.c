#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge >= 18)
    {
        printf("Eligible For Voting");
    }
    else if(iAge < 0)
    {
        printf("Invalid Number");
    }
    else
    {
        printf("Not Eligible For Voting");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter the Age:");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}