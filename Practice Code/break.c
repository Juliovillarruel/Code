#include <stdio.h>
#include <string.h>

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        if (i == 4)
        {
         break;
        }
    }
}