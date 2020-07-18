/* 
Read 3 values ​​(represented by variables A, B and C) and calculate the 
complete second degree equation, using the Baskara formula 
(consider all possible conditions for delta: delta < 0, delta > 0 and 
delta = 0). Remember that the second degree equation is complete, 
with variables A, B and C different from zero at the same time.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double a = 0, b = 0, c = 0;         // initializing a, b and c as zero
    double delta = 0, x1 = 0, x2 = 0;   // initializing our result variables

    printf("Enter the value of A: ");
    scanf("%lf", &a);                   // reading value of a from user input

    printf("Enter the value of B: ");
    scanf("%lf", &b);                   // reading value of b from user input

    printf("Enter the value of C: ");
    scanf("%lf", &c);                   // reading value of c from user input

    delta = b * b - 4 * a * c;          // calculating the value of delta

    if (delta < 0)              // if delta is less than zero
    {
        printf("The equation has no real values.\n");
    }
    else if (delta > 0)         // else if delta is greater than zero
    {
        x1 = (-b + sqrt(delta)) / (2 * a);      // calculating the value of x1
        x2 = (-b - sqrt(delta)) / (2 * a);      // calculating the value of x2

        printf("Value of x1: %lf\nValue of x2: %lf \n", x1, x2);
    }
    else                        // if delta is neigher greater nor less than zero: (zero)
    {
        x1 = (-b / (2 * a));    // calculate the value of it's single root

        printf("Since the value of delta is zero, the equation has a single one root: %lf\n", x1);
    }

    return 0;
}
