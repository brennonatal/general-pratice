// Read two integers from the input and present the
// result of the difference between the highest value and the lowest value.

#include <stdio.h>

int main(void)
{
    int a = 0;          // initializing first integer with zero
    int b = 0;          // initializing second integer with zero
    int result = 0;     // initializing variable to store the result

    printf("Enter the first value: ");
    scanf("%d", &a);                    // reading first value from user input
    printf("Enter the second value: ");
    scanf("%d", &b);                    // reading second value from user input

    if (a < b)              // if the first value is smaller than the second
    {
        result = b - a;     // result stores the value of the second value minus the first
    }
    else                    // if the first condition wasn't true
    {
        result = a - b;     // result stores the value of the first value minus the second
    }

    printf("The difference between %d and %d is: %d\n", a, b, result);
    return 0;
}