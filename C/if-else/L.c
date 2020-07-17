/*
    Read a person's name and gender and present one of the following 
    messages: “Hello, Mr.”, if the gender is informed as male, 
    or “Hello, Mrs.”, if the gender is informed as female. 
    Also present the name previously informed with each greeting message.
*/
#include<stdio.h>
#include<string.h>

int main(void)
{
    char name[10];
    char gender[10];

    printf("Please, enter your first name: ");
    scanf("%s", name);

    printf("Now enter your gender (male / female): ");
    scanf("%s", gender);

    if (strcmp(gender, "male") == 0)
    {
        printf("Hello, Mr. %s", name);
    }
    else if (strcmp(gender, "female") == 0)
    {
        printf("Hello, Mrs. %s", name);
    }
    else
    {
        printf("The gender provided is invalid!");
    }
    
    return 0;
}
