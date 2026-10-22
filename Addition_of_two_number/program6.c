/*
step 1:  Understand the problem satement
step 2:  write the algorithm
step 3:  Decide the programming language
step 4:  write the program
step 5:  test the program
*/

////////////////////////////////////////////////////////////////////////////////////
//
//     step 1:  Understand the problem satement
//              user is going to enter any integers
//              and we have to perform addition
/////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////
//     step 2:  write the algorithm
/*
   START
        Accept first number as No1
        Accept second number as NO2
        Create the variable as Ans to store the result
        Perform the addtion and store into Ans
        Display the result from Ans
   END
*/
/////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////
//
//      step 3:  Decide the programming language
//                We select C Programming
//
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
//
//      step 4:  write the program
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;
        
    iAns = iNo1+ iNo2;          ////bussiness logic

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2);  

    printf("Addition is: %d\n",iResult);

    return 0;
}