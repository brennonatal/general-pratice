/*
Read four grades ​​of a student. Calculate the average and display
the message “Approved” if the average obtained is greater than or equal to 5;
Otherwise, ask for the grade of the final exam. Then calculate the average between
the final exam and the old average and display the message "Approved by exam"
or “Failed” if the new average is less then 5.
*/

#include <stdio.h>

int main(void)
{
    float t1 = 0, t2 = 0, t3 = 0, t4 = 0, total = 0;

    printf("Enter the first grade: ");
    scanf("%f", &t1);

    printf("Enter the second grade: ");
    scanf("%f", &t2);

    printf("Enter the third grade: ");
    scanf("%f", &t3);

    printf("Enter the fourth grade: ");
    scanf("%f", &t4);

    total = (t1 + t2 + t3 + t4) / 4;

    if (total >= 5)
    {
        printf("The student was approved with %.2f final grade.\n", total);
    }
    else
    {
        printf("Current grade: %.2f. The student didn't achieved the minimum grade... Enter the final exam grade: ", total);
        scanf("%f", &t1);

        total = (total + t1) / 2; 

        if (total >= 5)
        {
            printf("The student was approved by exam with %.2f final grade.", total);
        }
        else
        {
            printf("The student failed with %.2f final grade.", total);
        }
    }

    return 0;
}