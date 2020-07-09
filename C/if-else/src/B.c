// Read an integer, if it's negative turn it into positive

#include <stdio.h>

int main(void)
{
    int num = 0;
    printf("Please, enter any value: ");
    scanf("%d", &num);
    if (num < 0)
    {
        num *= -1;
        printf("Now your number (%d) is positive :)", num);
    }
    else
    {
        printf("Your number (%d) is already positive!", num);
    }

    return 0;
}