#include <stdio.h>
#include <string.h>

int main (void)
{
    for ( int i = 1; i <= 10; i++)
    {
        if ((i%2 == 1))
        {
            printf("I'm rather odd...\n");
            continue;
        }
        printf("Even up!\n");
    }
}