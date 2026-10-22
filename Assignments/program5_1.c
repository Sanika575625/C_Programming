#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond, int iThird)
{
    if(iFirst > iSecond > iThird)
    {
        printf("%d is Greater",iFirst);
    }
    else if(iFirst < iSecond < iThird)
    {
        printf("%d is Greater",iSecond);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter three Number:");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreater(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}