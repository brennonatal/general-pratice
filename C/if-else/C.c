/*
Read four grades ​​of a student. Calculate the average and display
the message “Approved” if the average obtained is greater than or equal to 5;
otherwise, display the message “Failed”.
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
        printf("The student was approved with %.2f final grade.", total);
    }
    else
    {
        printf("The student failed with %.2f final grade.", total);
    }

    return 0;
}