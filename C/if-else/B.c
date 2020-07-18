// Read an integer, if it's negative turn it into positive

#include <stdio.h>

int main(void)
{
    int num = 0;            // initializing our integer with zero

    printf("Please, enter any value: ");
    scanf("%d", &num);      // reading new value of 'num' from user input

    if (num < 0)            // if our number is less than zero (negative)
    {
        num *= -1;          // turn it positive by multipling by -1

        printf("Now your number (%d) is positive :)\n", num);
    }
    else                    // if the number is already positive, just print it
    {
        printf("Your number (%d) is already positive!\n", num);
    }

    return 0;
}