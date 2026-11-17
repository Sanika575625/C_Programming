#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accept character from user, toggle its case, or display non-alphabets as is
//  Input         : Character (A)
//  Output        : Character (a)
//  Date          : 17/11/2026
//  Author        : Sanika Ganapati Jong
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32; 
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32; 
    }

    printf("%c\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
