// Display the squares of all integers from 15 to 200.

#include <stdio.h>

int main(void) 
{
    int numbers = 15;
    int i = 0;

    for (i = numbers; i <= 200; i++)
    {
        printf("The square of %d is %d.\n", i, i * i);
    }
    
    return 0;
}