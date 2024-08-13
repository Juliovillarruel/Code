#include <stdio.h>
#include <string.h>

int main (void)
{
    int ctr = 0;

    ctr *= 5;
printf("The ctr is at %d\n", ctr);
    ctr = ctr + 1;
    ctr = ctr - 1;
    ctr = ctr - 1;
    ctr = ctr - 1;
    ctr = ctr - 1;
printf("The ctr is at %d\n", ctr);
}