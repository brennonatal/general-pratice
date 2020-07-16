// Read an integer and display a message
// stating whether the value is even or odd.

#include<stdio.h>

int main(void)
{
    int num = 0;

    printf("Enter an integer value: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number %d is odd.", num);
    } 
    else
    {
        printf("The number %d is even.", num);
    }
    
    return 0;
}
