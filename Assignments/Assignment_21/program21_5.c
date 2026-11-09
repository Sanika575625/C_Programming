#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   Pattern
//    Description    :   Accept number from user and print pattern
//    Input          :   Integer,Interger (4,4)
//    Output         :   Pattern (1   1   1   1   
//                                2   2   2   2
//                                3   3   3   3
//                                4   4   4   4  )
//    Date           :   09/11/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRows, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRows; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",i);
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0; 
    int iValue2 = 0;

    printf("Enter the number of Rows and Columns: ");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}