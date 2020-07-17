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
    double a = 0, b = 0, c = 0;
    double delta = 0, x1 = 0, x2 = 0;

    printf("Enter the value of A: ");
    scanf("%lf", &a);

    printf("Enter the value of B: ");
    scanf("%lf", &b);

    printf("Enter the value of C: ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        printf("The equation has no real values");
    }
    else if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("Value of x1: %lf\nValue of x2: %lf \n", x1, x2);
    }
    else
    {
        x1 = (-b / (2 * a));

        printf("Since the value of delta is zero, the equation has a single one root: %lf", x1);
    }

    return 0;
}
