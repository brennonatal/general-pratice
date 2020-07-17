// Read four integers ​​and display values
// ​​that are divisible by 2 and 3.

#include <stdio.h>
#include<stdbool.h>

bool isDivisible(int);

int main(void)
{
    int a = 0, b = 0, c = 0, d = 0;
    int divisibles[4];
    int i = 0;
    
    printf("Enter the first value: ");
    scanf("%d", &a);

    printf("Enter the second value: ");
    scanf("%d", &b);

    printf("Enter the third value: ");
    scanf("%d", &c);
   
    printf("Enter the fourth value: ");
    scanf("%d", &d);

    if (isDivisible(a)) { divisibles[0] = a; }    
    if (isDivisible(b)) { divisibles[1] = b; }    
    if (isDivisible(c)) { divisibles[2] = c; }    
    if (isDivisible(d)) { divisibles[3] = d; } 

    printf("Numbers divisible by 2 and 3: ");

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
    return (n % 2 == 0 && n % 3 == 0);
}

