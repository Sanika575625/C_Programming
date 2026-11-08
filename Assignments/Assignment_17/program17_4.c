#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   Pattern
//    Description    :   Accept number from user and print pattern
//    Input          :   Integer,Interger (4,4)
//    Output         :   Pattern (1   2   3   4
//                               -1  -2  -3  -4
//                                1   2   3   4
//                               -1  -2  -3  -4)
//    Date           :   08/11/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%d\t",j);
            }
            else
            { 
               printf("%d\t", -j); 
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of Rows and Columns:");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}