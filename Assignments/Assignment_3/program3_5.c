#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   ChkVowel
//    Description    :   To check letter is vowel or not
//    Input          :   Character
//    Output         :   Character
//    Date           :   19/10/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char CValue)
{
    if(CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter Character:");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Vowel");
    }
    else
    {
        printf("It is Not a Vowel");
    }

    return EXIT_SUCCESS;
}