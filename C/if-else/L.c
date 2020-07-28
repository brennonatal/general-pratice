/*
    Read a person's name and gender and present one of the following 
    messages: “Hello, Mr.”, if the gender is informed as male, 
    or “Hello, Mrs.”, if the gender is informed as female. 
    Also present the name previously informed with each greeting message.
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[10];      // array to store name with 10 chars max
    char gender[10];    // array to store gender with 10 chars max

    printf("Please, enter your first name: ");
    scanf("%s", name);

    printf("Now enter your gender (male / female): ");
    scanf("%s", gender);

    if (strcmp(gender, "male") == 0)
    // compare gender from user input with 'male'
    {
        printf("Hello, Mr. %s\n", name);
    }
    else if (strcmp(gender, "female") == 0)
    // compare gender from user input with 'female'
    {
        printf("Hello, Mrs. %s\n", name);
    }
    else
    {
        printf("The gender provided is invalid!\n");
    }
    
    return 0;
}
