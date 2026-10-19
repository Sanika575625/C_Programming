#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   DisplayConvert
//    Description    :   To converting Uppercase to lowercase wise-versa
//    Input          :   Character
//    Output         :   Character
//    Date           :   19/10/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c", CValue + 32);
    }
    else
    {
        printf("%c", CValue - 32);
    }
}
int main()
{
    char cValue ='\0';

    printf("Enter Character:");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}