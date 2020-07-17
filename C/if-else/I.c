// Read five integers ​​and display the
// largest and smallest values. Do not order them.

#include <stdio.h>

int main(void)
{
    int numbers[5];
    int largest = 0, smallest = 0;
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter the %dº value: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    smallest = numbers[0];

    for (i = 0; i < 5; i++)
    {
        if (numbers[i] > largest) 
        {
            largest = numbers[i];
        } 
        else if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }
    
    printf("The largest number is %d and the smallest is %d", largest, smallest);

    return 0;
}
