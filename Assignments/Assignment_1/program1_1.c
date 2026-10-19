#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name  :   Divide
//    Description    :   Perform division of two numbers
//    Input          :   Integer,Integer
//    Output         :   Integer
//    Date           :   18/10/2026
//    Author:        :   Sanika Ganapati Jong
//
///////////////////////////////////////////////////////////////////////////////////////

int Divide(int iNo1,int iNo2)
{
    int iAns = 0;

    if(iNo2 / iNo1)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 15 , iValue2 =5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("Division is %d\n",iRet);

    return EXIT_SUCCESS;
}
