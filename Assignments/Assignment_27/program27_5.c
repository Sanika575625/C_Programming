#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse
//  Description   : Accept string from user and display it in reverse order
//  Input         : String (Marvellous)
//  Output        : String (suollevraM)
//  Date          : 17/11/2026
//  Author        : Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    char *start = str;

    if(str == NULL)
    {
        return;
    }

    while(*str != '\0')
    {
        str++;
    }
    str--; 

    while(str >= start)
    {
        printf("%c", *str);
        str--;
    }
    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf(" %[^'\n']s", arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}
