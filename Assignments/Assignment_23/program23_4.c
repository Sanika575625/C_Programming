#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   DisplayDigits
//    Description    :   Accept string from user and display numbers only
//    Input          :   String(Sanika152 Jong52)
//    Output         :   String(15252)
//    Date           :   16/11/2026
//    Author:        :   Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigits(char *str)
{

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    DisplayDigits(arr);

    return EXIT_SUCCESS;
}