#include <stdio.h>
#include <string.h>

int main (void)
{
    int num;
    printf("How many numbers do you want to see?");
    scanf("%d", &num);
    for (int i = 1; i < 10; i++)
    {
        printf("Counting up...%d\n", i);
        if (i == num)
        {
            break;
        }
    }
}