#include <stdio.h>
#include <string.h>

int main(void)
{   
    // Inventory
    int apples = 0;
    int oranges = 0;
    int grapes = 0;
    int watermelon = 0;

    // Required Inventory
    int applesInv = 10;
    int orangesInv = 9;
    int grapesInv = 15;
    int watermelonInv = 10;

    // Inventory Sign
    printf("\n\n---------------------\n");
    printf("Apple Store Inventory|\n");
    printf("---------------------\t\t\t\t\t\t\t\tRequired Inventory\n\n"); 

    // Apples
    printf("\t\tApples\t\tOranges\t\tGrapes\t\tWatermelon\tApples = %d\n", applesInv);
    printf("\t\t------\t\t-------\t\t------\t\t----------\tOranges = %d\n", orangesInv);
    printf("\t\t  %d\t\t  %d\t\t  %d\t\t    %d\t\tGrapes = %d\n", apples, oranges, grapes, watermelon, grapesInv);
    printf("\t\t\t\t\t\t\t\t\t\tWatermelons = %d\n\n", watermelonInv);
    printf("Need to Order:");

    // Need to Order
    int applesOrder = applesInv - apples;
    int orangesOrder = orangesInv - oranges;
    int grapesOrder = grapesInv - grapes;
    int watermelonsOrder = watermelonInv - watermelon;

    printf("\t  %d\t\t  %d\t\t  %d\t\t    %d\n\n", applesOrder, orangesOrder, grapesOrder, watermelonsOrder);

    // Visual Representation
    if (apples < applesInv) {
        printf("\t\t ------\t\t ------\t\t ------\t\t ------\n");
        printf("\t\t|\\    /|\t|      |\t|      |\t|      |\n");
        printf("\t\t|  /\\  |\t|      |\t|      |\t|      |\n");
        printf("\t\t|/    \\|\t|      |\t|      |\t|      |\n");
        printf("\t\t ------\t\t ------\t\t ------\t\t ------\n\n");
    } else {
        printf("\t\t ------\t\t ------\t\t ------\t\t ------\n");
        printf("\t\t|      |\t|      |\t|      |\t|      |\n");
        printf("\t\t|      |\t|      |\t|      |\t|      |\n");
        printf("\t\t|      |\t|      |\t|      |\t|      |\n");
        printf("\t\t ------\t\t ------\t\t ------\t\t ------\n\n");
    }

    if (oranges < orangesInv) {
        printf("\t\t ------\t\t ------\t\t ------\t\t ------\n");
        printf("\t\t|      |\t|\\    /|\t|      |\t|      |\n");
        printf("\t\t|      |\t|  /\\  |\t|      |\t|      |\n");
        printf("\t\t|      |\t|/    \\|\t|      |\t|      |\n");
        printf("\t\t ------\t\t ------\t\t ------\t\t ------\n\n"); 
    } else {
        printf("\t\t ------\t\t ------\t\t ------\t\t ------\n");
        printf("\t\t|      |\t|      |\t|      |\t|      |\n");
        printf("\t\t|      |\t|      |\t|      |\t|      |\n");
        printf("\t\t|      |\t|      |\t|      |\t|      |\n");
        printf("\t\t ------\t\t ------\t\t ------\t\t ------\n\n");
    }

    if (grapes < grapesInv) {
        printf("\t\t ------\t\t ------\t\t ------\t\t ------\n");
        printf("\t\t|      |\t|      |\t|\\    /|\t|      |\n");
        printf("\t\t|      |\t|      |\t|  /\\  |\t|      |\n");
        printf("\t\t|      |\t|      |\t|/    \\|\t|      |\n");
        printf("\t\t ------\t\t ------\t\t ------\t\t ------\n\n"); 
    } else {
        printf("\t\t ------\t\t ------\t\t ------\t\t ------\n");
        printf("\t\t|      |\t|      |\t|      |\t|      |\n");
        printf("\t\t|      |\t|      |\t|      |\t|      |\n");
        printf("\t\t|      |\t|      |\t|      |\t|      |\n");
        printf("\t\t ------\t\t ------\t\t ------\t\t ------\n\n");
    }

    if (watermelon < watermelonInv) {
        printf("\t\t ------\t\t ------\t\t ------\t\t ------\n");
        printf("\t\t|      |\t|      |\t|      |\t|\\    /|\n");
        printf("\t\t|      |\t|      |\t|      |\t|  /\\  |\n");
        printf("\t\t|      |\t|      |\t|      |\t|/    \\|\n");
        printf("\t\t ------\t\t ------\t\t ------\t\t ------\n\n");
    } else {
        printf("\t\t ------\t\t ------\t\t ------\t\t ------\n");
        printf("\t\t|      |\t|      |\t|      |\t|      |\n");
        printf("\t\t|      |\t|      |\t|      |\t|      |\n");
        printf("\t\t|      |\t|      |\t|      |\t|      |\n");
        printf("\t\t ------\t\t ------\t\t ------\t\t ------\n");
    }

    printf("\n\n\t----------------------------------------------------------------------------------------\n\n");
    printf("\n*** Visual Representation of Inventory ***\n\n\n");
    
    printf("\t\t Apples\t\t Oranges\t Grapes\t\tWatermelons\n\n");

    // Apples Visual Representation
    while (apples < applesInv) {
        printf("\t\t   -\n\t\t  | |\n\t\t   -\n\n");
        apples++;
    }

    // Oranges Visual Representation
    while (oranges < orangesInv) {
        printf("\t\t    -\n\t\t   | |\n\t\t    -\n\n");
        oranges++;
    }

    // Grapes Visual Representation
    while (grapes < grapesInv) {
        printf("\t\t\t\t   -\n\t\t\t\t  | |\n\t\t\t\t   -\n\n");
        grapes++;
    }

    // Watermelons Visual Representation
    while (watermelon < watermelonInv) {
        printf("\t\t\t\t\t\t    -\n\t\t\t\t\t\t   | |\n\t\t\t\t\t\t    -\n\n");
        watermelon++;
    }

    int applesWeight = apples * 1;
    int orangesWeight = oranges * 2;
    int grapesWeight = grapes * 1;
    int watermelonsWeight = watermelon * 6;

    int shelfOne = applesWeight + orangesWeight;
    int shelfTwo = grapesWeight + watermelonsWeight;

    int shelfOneCapacity = 20;
    int shelfTwoCapacity = 30;

    printf("\t\n\n Shelf\n--------\n\n");

    // Bins
    char shelfOneCapacityReached = shelfOne > shelfOneCapacity ? 'X' : ' ';
    char shelfTwoCapacityReached = shelfTwo > shelfTwoCapacity ? 'X' : ' ';

    printf("Shelf 1 (Apples & Oranges): %dlbs\t\t\tShelf Capacity: 20lbs\t\t\t Capacity Reached: %c\n\n", shelfOne, shelfOneCapacityReached); 
    printf("Shelf 2 (Grapes & Watermelons): %dlbs\t\t\tShelf Capacity: 30lbs\t\t\t Capacity Reached: %c\n\n", shelfTwo, shelfTwoCapacityReached);

    return 0;
}
