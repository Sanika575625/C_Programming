#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   Strtooglex
//    Description    :   Accept string from user and converting it into lowercase or uppercase
//    Input          :   String(Sanika Jong)
//    Output         :   String(sANIKA jONG)
//    Date           :   16/11/2026
//    Author:        :   Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

void Strtooglex(char *str)
{

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
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

    Strtooglex(arr);

    printf("Modified String is : %s",arr);

    return EXIT_SUCCESS;
}