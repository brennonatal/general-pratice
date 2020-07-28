// Read an integer and display a message
// stating whether the value is even or odd.

#include <stdio.h>

int main(void)
{
    int num = 0;        // reading out integer

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    // if the remainder of the division by 2 is 0, it's odd
    {
        printf("The number %d is odd.\n", num);
    } 
    else
    {
        printf("The number %d is even.\n", num);
    }
    
    return 0;
}
