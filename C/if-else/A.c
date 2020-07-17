// Read two integers from the input and present the
// result of the difference between the highest value and the lowest value.

#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int result = 0;

    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);

    if (a < b)
    {
        result = b - a;
    }
    else
    {
        result = a - b;
    }

    printf("The difference between %d and %d is: %d", a, b, result);
    return 0;
}