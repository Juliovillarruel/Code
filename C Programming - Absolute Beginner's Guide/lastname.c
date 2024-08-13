#include <stdio.h>
#include <string.h>

int main(void)
{
    /*
    char name[25];
    printf("What is your last name ");

    printf("(Please capitalize the first letter!)\n");
    scanf(" %s", name);

    if((name[0] >= 'P') && (name [0]) <= 'S')
    {
        printf("You must go to room 2432 ");
        printf("for your tickets. \n");
    }
    else
    {
        printf("You can get your tickets here.\n");
    }
return 0;
*/

char ans;
printf("Is your printer on (Y/N) ?\n");
scanf(" %c", &ans);
if ((ans == 'Y') || (ans == 'N'))
{
    if (ans == 'N')
    {
        printf("*** Turn the printer on now. ***");
    }
else
{
    printf("You did not enter a Y or N.\n");
}    
}

}