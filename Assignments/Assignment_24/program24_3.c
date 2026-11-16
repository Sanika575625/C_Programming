#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   FirstChar
//    Description    :   Accept string and character from user and return index of first occurrence
//    Input          :   String(sanika)
//                   :   Character(s / o / a)
//    Output         :   Integer(0 / -1 / 1)
//    Date           :   16/11/2026
//    Author         :   Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCount;
        }
        str++;
        iCount++;
    }
    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    printf("Enter The Character:");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr,cValue);

    printf("Character location is: %d\n", iRet);

    return EXIT_SUCCESS;
}