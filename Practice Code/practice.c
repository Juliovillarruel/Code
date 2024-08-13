#include <stdio.h>
#include <string.h>

int main(void)
{
    int age, height, favorite_number;
    char name[10];

    printf("What is your favorite number?\n");
    scanf(" %d", &favorite_number);

    printf("Your favorite number appears to be %d\n\n", favorite_number);

    printf("How old are you?\n");
    scanf(" %d", &age);

    printf("You appear to be %d years old\n\n", age);

    printf("Now let me ask, what is your first name?\n");
    scanf(" %s", name);

    printf("Your name appears to be %s\n\n", name);



}