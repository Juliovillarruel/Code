#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char name[];
    char age[];

    printf("What is your name?");
    scanf(" %c", name);

    printf("How old are you?");
    scanf(" %d", &age);
}