#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   ChkChar
//    Description    :   Accept string and character from user and return ferquency of that character
//    Input          :   String(Sanika Jong)
//                   :   Character(s)
//    Output         :   Integer(1)
//    Date           :   16/11/2026
//    Author:        :   Sanika Ganapati Jong
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue;
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    printf("Enter the Character:");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("Character Ferquency is %d",iRet);

    return EXIT_SUCCESS;
}