/*
Present the sum of all integers from 1 to 100, without using 
the arithmetic progression formula.
*/

#include <stdio.h>

int main(void)
{
    int num = 1, next = 1;  // initializing current and next number 
                            // (next set as 1 because we are increasing it on our loop)

    while (next < 100)      // our loop must run until the last number to add is 100
    { 
        next++;             // increasing next number
        num += next;        // adding next to current number
    }
    
    printf("The sum from 1 to 100 is -> %d\n", num);

    return 0;
}
