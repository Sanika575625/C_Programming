#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description   : Accept string from user and check whether it contains vowels or not
//  Input         : String ("marvellous" or "xyz")
//  Output        : Boolean (true or false)
//  Date          : 17/11/2026
//  Author        : Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

#define true 1
#define false 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    if(str == NULL)
    {
        return false;
    }

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||
           (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            return true; 
        }
        str++;
    }

    return false; 
}

int main()
{
    char arr[20];
    BOOL bRet = false;

    printf("Enter String: ");
    scanf(" %[^'\n']s", arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("String contains vowels.");
    }
    else
    {
        printf("String not contain vowels.");
    }

    return EXIT_SUCCESS;
}
