#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountCapital
//  Description   : Accept string from user and count number of capital letters in it
//  Input         : String (Marvellous Multi OS)
//  Output        : Integer ( 4)
//  Date          : 17/11/2026
//  Author        : Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCnt = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}
