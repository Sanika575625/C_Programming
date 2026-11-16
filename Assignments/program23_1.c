#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   Strlwrx
//    Description    :   Accept string from user and converting it into lowercase
//    Input          :   String(Sanika Jong)
//    Output         :   String(sanika jong)
//    Date           :   16/11/2026
//    Author:        :   Sanika Ganapati Jong
//
//////////////////////////////////////////////////////////////////////////////////////

void Strlwrx(char *str)
{

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    Strlwrx(arr);

    printf("Modified String is : %s",arr);

    return EXIT_SUCCESS;
}