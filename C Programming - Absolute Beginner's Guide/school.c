#include <stdio.h>
#include <string.h>

int main(void)
{
    int numTest;
    float stTest, avg, total = 0.0;

    for (numTest = 0; numTest < 25; numTest++)
    {
        printf("\nWhat is the next student's test score? ");
        scanf(" %f", &stTest);
        if (stTest < 0.0)
        {
            break;
        }
        total += stTest;
    }
    
    avg = total / numTest;
    printf("\nThe average is %.1f%%.\n", avg);
}
