#include <string.h>
#include <stdio.h>

int main(void)
{
     /*char month[25] = "January";


    strcpy(month, "February");
    printf("The month is %s\n", month);*/
    
    //  char names[6] = "julio";
    // printf("My name is %s\n", names);

    char siblings[6];

    siblings[0] = 'S';
    siblings[1] = 'a';
    siblings[2] = 'm';
    siblings[3] = 'y';
    siblings[4] = '\0';

    printf("My sister's name is %s\n", siblings);

    strcpy(siblings, "Dad");

    char airlines[7] = "Boeing";
    printf("The airline associated with multiple enginer failures is called %s\n", airlines);

    strcpy(airlines, "spirit");
    printf("The airline associated with multiple enginer failures is called %s\n", airlines);
    
    return 0;


}