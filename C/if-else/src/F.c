// Read three values and display them in ascending order

#include <stdio.h>

int main(void)
{
    float a = 0, b = 0, c = 0;

    printf("Enter the first value: ");
    scanf("%f", &a);

    printf("Enter the second value: ");
    scanf("%f", &b);

    printf("Enter the third value: ");
    scanf("%f", &c);

    if (a < b && a < c)
    {
        if (b < c)
        {
            printf("%.2f %.2f %.2f", a, b, c);
        }
        else
        {
            printf("%.2f %.2f %.2f", a, c, b);
        }
        
    }
    else if (b < a && b < c)
    {
        if (a < c)
        {
            printf("%.2f %.2f %.2f", b, a, c);
        }
        else
        {
            printf("%.2f %.2f %.2f", b, c, a);
        }
        
    }
    else
    {
        if (b < a)
        {
            printf("%.2f %.2f %.2f", c, b, a);
        }
        else
        {
            printf("%.2f %.2f %.2f", c, a, b);
        }
        
    }

    return 0;
}