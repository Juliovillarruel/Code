#include <stdio.h>
#include <string.h>

int main(void)
{
    int choice;

    printf("Give me a number 1-5 for a surprise?\n");
    scanf(" %d", &choice);
     
    switch (choice)
    {
        case (1): printf("You are very beautiful today\n");
        break;
        case (2): printf("You are an amazing person today\n");
        break;
        case (3): printf("The flowers are blooming, the sun is shining. The waves are crashing\n");
        break;
        case (4): printf("The world is a beautiful place. People may be evil, but the world is inherently good.\n");
        break;
    }
    
}