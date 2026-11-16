#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   Struprx
//    Description    :   Accept string from user and converting it into Uppercase
//    Input          :   String(Sanika Jong)
//    Output         :   String(SANIKA JONG)
//    Date           :   16/11/2026
//    Author:        :   Sanika Ganapati Jong
//
//////////////////////////////////////////////////////////////////////////////////////

void Struprx(char *str)
{

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    Struprx(arr);

    printf("Modified String is : %s",arr);

    return EXIT_SUCCESS;
}