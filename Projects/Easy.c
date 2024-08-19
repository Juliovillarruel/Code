#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int firstChoice;
    int secondChoice;
    int sum;
    int difference;
    int product;
    int quotient;

    printf("Please give me an integer of your choice\n\n");
    scanf(" %d", &firstChoice);


    printf("Please give me another integer of your choice\n\n");
    scanf(" %d", &secondChoice);

    int sum = firstChoice + secondChoice;

    int difference = firstChoice - secondChoice;

    int product = firstChoice * secondChoice;

    int quotient = firstChoice / secondChoice;

    printf("The sum of your integers is %d", sum);

    printf("The difference of your integers is %d", difference);

    printf("The product of your integers is %d", product);

    printf("The quotient of your integers is %d", quotient);


}