#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name   :  DisplaySchedule
//    Description     :  Accept division from user and display exam time (case-insensitive)
//    Input           :  Character (A, B, C, or D)
//    Output          :  Exam schedule time
//    Date            :  17/11/2026
//    Author          :  Sanika Ganapati Jong
//
/////////////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
        case 'A':
        case 'a':
            printf("Your exam is at 7:00 AM\n");
            break;

        case 'B':
        case 'b':
            printf("Your exam is at 8:30 AM\n");
            break;

        case 'C':
        case 'c':
            printf("Your exam is at 9:20 AM\n");
            break;

        case 'D':
        case 'd':
            printf("Your exam is at 10:30 AM\n");
            break;

        default:
            printf("Invalid Division\n");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division: ");
    scanf(" %c", &cValue); 

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}


