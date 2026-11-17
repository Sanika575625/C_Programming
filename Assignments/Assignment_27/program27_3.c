#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description   : Accept string from user and return difference between frequency of
//                  small characters and frequency of capital characters
//  Input         : String ("MarvellouS")
//  Output        : Integer difference (2)
//  Date          : 17/11/2026
//  Author        : Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iSmallCnt = 0;
    int iCapCnt = 0;

    if(str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCnt++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapCnt++;
        }
        str++;
    }
    return (iSmallCnt - iCapCnt);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}

