/*
Present the results of a multiplication table of any number, 
which must be printed in the following format (considering the 
provision of number 2 as an example):
2x1=2 2x2=4 2x3=6 2x4=8 2x5=10 2x6=12 2x7=14 2x8=16 2x9=18 2x10=20 
*/

#include <stdio.h>

int main(void)
{
    float num = 0;
    int i = 0;

    printf("Enter any value: ");
    scanf("%f", &num);

    for (i = 1; i < 11; i++)
    {
        printf("%.1f x %d = %.1f\n", num, i, num * i);
    }
    
    return 0;
}
