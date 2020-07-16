/*
    Read an integer that is in the range of 1 to 9. 
    The program should display the message “The value is in the 
    allowed range”, if the value entered is between 1 and 9. 
    If the value is outside the range , the program should display 
    the message “The value is outside the permitted range”.
*/

#include <stdio.h>

int main(void)
{
    int num = 0;

    printf("Please, enter a number in the range of 1 to 9: ");
    scanf("%d", &num);

    if (num > 0 && num < 10)
    {
        printf("The value is in the allowed range.");
    }
    else
    {
        printf("The value is outside the permitted range.");
    }

    return 0;
}
