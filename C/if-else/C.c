/*
Read four grades ​​of a student. Calculate the average and display
the message “Approved” if the average obtained is greater than or equal to 5;
otherwise, display the message “Failed”.
*/

#include <stdio.h>

int main(void)
{
    float t1 = 0, t2 = 0, t3 = 0, t4 = 0;       // initializing grades
    float final = 0;                            // initializing final grade

    printf("Enter the first grade: ");
    scanf("%f", &t1);                   // reading first grade

    printf("Enter the second grade: ");
    scanf("%f", &t2);                   // reading second grade

    printf("Enter the third grade: ");
    scanf("%f", &t3);                   // reading third grade

    printf("Enter the fourth grade: ");
    scanf("%f", &t4);                   // reading fourth grade

    final = (t1 + t2 + t3 + t4) / 4;    // calculating final grade

    if (final >= 5)             // if the final grade was greater than 5, approved
    {
        printf("The student was approved with %.2f final grade.\n", final);
    }
    else                        // if the student failed
    {
        printf("The student failed with %.2f final grade.\n", final);
    }

    return 0;
}