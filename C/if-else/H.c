// Read four integers ​​and display the ones
// ​​that are divisible by 2 or 3.

#include <stdio.h>
#include <stdbool.h>

bool isDivisible(int);

int main(void)
{
    int a = 0, b = 0, c = 0, d = 0;     // initializing our integers with zero
    int divisibles[4];                  // array to store our results
    int i = 0;
    
    printf("Enter the first value: ");
    scanf("%d", &a);                    // reading first value form user input

    printf("Enter the second value: ");
    scanf("%d", &b);                    // reading second value form user input

    printf("Enter the third value: ");
    scanf("%d", &c);                    // reading third value form user input
   
    printf("Enter the fourth value: ");
    scanf("%d", &d);                    // reading fourth value form user input

    // if the integer is divisible by 2 and 3, store it in our array
    if (isDivisible(a)) { divisibles[0] = a; }    
    if (isDivisible(b)) { divisibles[1] = b; }    
    if (isDivisible(c)) { divisibles[2] = c; }    
    if (isDivisible(d)) { divisibles[3] = d; } 

    printf("Numbers divisible by 2 or 3: ");

    // printing array with the results
    for (i = 0; i < 4; i++)
    {
        if (divisibles[i] != 0)
        {
            printf("%d ", divisibles[i]); 
        }        
    }  
    
    return 0;
}

bool isDivisible(int n) 
{
    return (n % 2 == 0 || n % 3 == 0);
}

