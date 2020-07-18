// Read three values and display them in ascending order

#include <stdio.h>

int main(void)
{
    float a = 0, b = 0, c = 0;          // initializing our the numbers

    printf("Enter the first value: ");
    scanf("%f", &a);                    // reading first value

    printf("Enter the second value: ");
    scanf("%f", &b);                    // reading second value

    printf("Enter the third value: ");
    scanf("%f", &c);                    // reading third value

    if (a < b && a < c)                 // if the FIRST value is less than the second AND the third (it's our first number)
    {
        if (b < c)                      // if the third is greater than the second (a, b, c)
        {
            printf("%.2f %.2f %.2f\n", a, b, c);
        }
        else                            // else (a, c, b)
        {
            printf("%.2f %.2f %.2f\n", a, c, b);
        }
        
    }
    else if (b < a && b < c)            // if the SECOND value is less than the first AND the third (it's our first number)
    {
        if (a < c)                      // if the third is greater than the first (b, a, c)
        {
            printf("%.2f %.2f %.2f\n", b, a, c);
        }
        else                            // else (b, c, a)
        {
            printf("%.2f %.2f %.2f\n", b, c, a);
        }
        
    }
    else            // if the THIRD value is less than the first AND the second (it's our first number)
    {
        if (b < a)  // if the first is greater than the second (c, b, a)
        {
            printf("%.2f %.2f %.2f\n", c, b, a);
        }
        else        // else (c, a, b)
        {
            printf("%.2f %.2f %.2f\n", c, a, b);
        }
        
    }

    return 0;
}