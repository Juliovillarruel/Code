#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int i;
    char msg[] = "C is fun";

    for(i = 0; i < strlen(msg); i++)
    {
        putchar(msg[i]);
    }
    putchar('\n'); //

    return(0);
}