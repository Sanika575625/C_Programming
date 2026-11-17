#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayASCII
//  Description   : Display ASCII table with Symbol, Decimal, Hexadecimal, and Octal (0-255)
//  Input         : None
//  Output        : Formatted ASCII table
//  Date          : 17/11/2026
//  Author        : Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int iCnt = 0;

    printf("--------------------------------------------------\n");
    printf("Symbol\t\tDecimal\t\tHex\t\tOctal\n");
    printf("--------------------------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        
        if((iCnt >= 0 && iCnt <= 31) || iCnt == 127)
        {
            printf("N/A\t\t%d\t\t%X\t\t%o\n", iCnt, iCnt, iCnt);
        }
        else
        {
            printf("%c\t\t%d\t\t%X\t\t%o\n", iCnt, iCnt, iCnt, iCnt);
        }
    }

    printf("--------------------------------------------------\n");
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}
