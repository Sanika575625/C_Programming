#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountSamll
//  Description   : Accept string from user and count number of samll letters in it
//  Input         : String (Marvellous)
//  Output        : Integer (9)
//  Date          : 17/11/2026
//  Author        : Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

int CountSamll(char *str)
{
    int iCnt = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSamll(arr);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}
