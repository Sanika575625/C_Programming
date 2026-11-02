#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//    Description    :   Display Full Name 
//    Input          :   String
//    Output         :   String
//    Date           :   02/11/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Name[30];

    printf("Enter Full Name:");
    scanf("%[^'\n']s",Name);

    printf("Your name is %s",Name);

    return EXIT_SUCCESS;
}
