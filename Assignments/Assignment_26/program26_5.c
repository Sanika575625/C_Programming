#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accept character from user and display its ASCII value in Decimal, Octal, and Hexadecimal formats
//  Input         : Character ('A')
//  Output        : Decimal: 65, Octal: 101, Hexadecimal: 41
//  Date          : 17/11/2026
//  Author        : Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal: %d\n", ch);
    printf("Octal: %o\n", ch);
    printf("Hexadecimal: 0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
