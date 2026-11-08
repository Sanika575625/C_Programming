#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   Pattern
//    Description    :   Accept number from user and pattern
//    Input          :   Integer,Interger (2,4)
//    Output         :   Pattern (A    B    C   D
//                                a    b    c   d)
//    Date           :   05/11/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    char Ch1 = '\0';
    char Ch2 = '\0';

    for(i = 1, Ch1 = 'A', Ch2 = 'a'; i <= iRow; i++, Ch1++, Ch2++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i % 2) == 0)
            {
                printf("%c\t",Ch2);
            }
            else
            {
                printf("%c\t",Ch1);
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter number of rows and columns:");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}