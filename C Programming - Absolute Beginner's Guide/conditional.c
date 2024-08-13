#include <stdio.h>
#include <string.h>

int main(void)
{
    /*
    int total = 4024;

    if (total <= 4000)
    {
        printf("The total is less than 3850\n\n");
    }
    else 
    {
        printf("The total is actually higher than 3850\n\n");
    }
    */

   /* int total = 4000;
   total *= (total <= 3850) ? (2) : (3);
   printf("The total value is shown as described ------> %d", total); */

/*ctr
int numPear = 2;
printf("I ate %d pear%s\n", numPear, (numPear > 1) ? ("s.") : ("."));
*/

/*
int numPick;
printf("Pick an integer between 1 and 100 ");
printf("(The higher the better!)\n");
scanf(" %d", &numPick); // remember for an int, you do need the &

printf("%d %s divisible by 2.", numPick, (numPick % 2 == 0) ? ("is") : ("is not"));
*/

/*
int ctr = 0;
printf("Counter is at %d.\n", ctr++);
printf("Counter is at %d.\n", ctr++);
printf("Counter is at %d.\n", ctr++);
printf("Counter is at %d.\n", ctr++);
printf("Counter is at %d.\n", ctr++);

printf("Counter is at %d.\n", ctr--);
printf("Counter is at %d.\n", ctr--);
printf("Counter is at %d.\n", ctr--);
printf("Counter is at %d.\n", ctr--);
*/

/* 
int i = 4;
i = sizeof(int); 
*/

/*
char name[] = "Ruth Claire";
int i = 7;
printf("The size of i is %lu.\n", sizeof(i));
printf("The size of name is %lu.\n", sizeof(name));
*/

char lastName[] = "Julio";
printf("Julio's name has a length of %lu", sizeof(lastName));


}
