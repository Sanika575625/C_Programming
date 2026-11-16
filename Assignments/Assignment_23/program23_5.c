#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   CountWhite
//    Description    :   Accept string from user and display numbers of white spaces
//    Input          :   String(Sanika Jong)
//    Output         :   Integer(1)
//    Date           :   16/11/2026
//    Author:        :   Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

int CountWhite( char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}