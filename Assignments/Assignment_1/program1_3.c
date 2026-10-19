#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   Display
//    Description    :   To print 5 to1 numbers on screen
//    Output         :   Integer
//    Date           :   18/10/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////
void Display()
{
    int iNo = 0;
    iNo = 5;
    while(iNo >= 1)
    {
        printf("%d ",iNo);
        iNo--;
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}
