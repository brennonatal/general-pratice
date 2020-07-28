// Read five integers ​​and display the
// largest and smallest values. Do not order them.

#include <stdio.h>

int main(void)
{
    int numbers[5];                 // using array to store user inputs
    int largest = 0, smallest = 0;  // variable to store the results

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %dº value: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // largest and smallest gets the first number
    largest = numbers[0];
    smallest = numbers[0];

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] > largest)
        // if the value is bigger than the value stored in the largest
        // assign it to be the largest
        {
            largest = numbers[i];
        } 
        else if (numbers[i] < smallest)
        // if the value is smaler than the value stored in the smallest
        // assign it to be the smallest
        {
            smallest = numbers[i];
        }
    }
    
    printf("The largest number is %d and the smallest is %d\n", largest, smallest);

    return 0;
}
