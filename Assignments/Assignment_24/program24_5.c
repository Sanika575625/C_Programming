#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   StrRevX
//    Description    :   Accept string from user and reverse that string in place
//    Input          :   String(Sanika)
//    Output         :   String(akinaS)
//    Date           :   17/11/2026
//    Author         :   Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++; 
        end--;   
    }   
}

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    printf("Modified String is: %s\n", arr);

    return EXIT_SUCCESS;
}
