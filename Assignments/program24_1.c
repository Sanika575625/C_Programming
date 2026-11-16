#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   ChkChar
//    Description    :   Accept string and character from user and check wheater it is in string or not
//    Input          :   String(Sanika Jong)
//                   :   Character(s)
//    Output         :   Boolean(true)
//    Date           :   16/11/2026
//    Author:        :   Sanika Ganapati Jong
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    printf("Enter The Character:");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character not found");
    }

    return EXIT_SUCCESS;
}