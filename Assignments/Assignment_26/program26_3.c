#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplaySequence
//  Description   : Accept character from user If capital, display till 'Z'. If small, display in reverse till 'a'
//                  Otherwise display as it is.
//  Input         : Character (f)
//  Output        : Sequence of characters(f    e   d   c   b   a) 
//  Date          : 17/11/2026
//  Author        : Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    char cCnt = '\0';

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(cCnt = ch; cCnt <= 'Z'; cCnt++)
        {
            printf("%c\t", cCnt);
        }
        printf("\n");
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(cCnt = ch; cCnt >= 'a'; cCnt--)
        {
            printf("%c\t", cCnt);
        }
        printf("\n");
    }
    else
    {
        printf("%c\n", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
