#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   LastChar
//    Description    :   Accept string and character from user and return index of last occurrence
//    Input          :   String(sanika)
//                   :   Character(a)
//    Output         :   Integer(5)
//    Date           :   16/11/2026
//    Author         :   Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iPosition = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPosition = iCount;
        }
        str++;
        iCount++;
    }
    return iPosition;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    printf("Enter The Character: ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character last location is: %d\n", iRet);

    return EXIT_SUCCESS;
}
