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

    printf("\t  %d\t\t  %d\t\t  %d\t\t    %d\n\n",applesOrder, orangesOrder, grapesOrder, watermelonsOrder);


// Functions
    if(apples < applesInv)
    {
    printf("\t\t \b ------\t\t ------\t\t ------\t\t ------\n");
    printf("\t\t|\\    /   \b\b\b|\t|      |\t|      |        |      |\n");
    printf("\t\t|  /\\    \b\b|\t|      |\t|      |        |      |\n");
    printf("\t\t|/    \\  \b\b|\t|      |\t|      |        |      |\n");
    printf("\t\t \b ------\t\t ------\t\t ------\t\t ------\n\n");
    }

    if(apples >= applesInv)
    {
    printf("\t\t \b ------\t\t ------\t\t ------\t\t ------\n");
    printf("\t\t|      |\t|      |\t|      |        |      |\n");
    printf("\t\t|      |\t|      |\t|      |        |      |\n");
    printf("\t\t|      |\t|      |\t|      |        |      |\n");
    printf("\t\t \b ------\t\t ------\t\t ------\t\t ------\n\n");
    }


    if(oranges < orangesInv)
    {
    printf("\t\t \b ------\t\t ------\t\t ------\t\t ------\n");
    printf("\t\t|      |\t|\\    /   \b\b\b|\t|      |        |      |\n");
    printf("\t\t|      |\t|  /\\    \b\b|\t|      |        |      |\n");
    printf("\t\t|      |\t|/    \\  \b\b|\t|      |        |      |\n");
    printf("\t\t \b ------\t\t ------\t\t ------\t\t ------\n\n"); 
    } 

    if(oranges >= orangesInv)
    {
    printf("\t\t \b ------\t\t ------\t\t ------\t\t ------\n");
    printf("\t\t|      |\t|      |\t|      |        |      |\n");
    printf("\t\t|      |\t|      |\t|      |        |      |\n");
    printf("\t\t|      |\t|      |\t|      |        |      |\n");
    printf("\t\t \b ------\t\t ------\t\t ------\t\t ------\n\n");
    }

    if(grapes < grapesInv)
    {
    printf("\t\t \b ------\t\t ------\t\t ------\t\t ------\n");
    printf("\t\t|      |\t|      |\t|\\    /  \b\b|        |      |\n");
    printf("\t\t|      |\t|      |\t|  /\\    \b\b|        |      |\n");
    printf("\t\t|      |\t|      |\t|/    \\  \b\b|        |      |\n");
    printf("\t\t \b ------\t\t ------\t\t ------\t\t ------\n\n"); 
    }

    if(grapes >= grapesInv)
    {
    printf("\t\t \b ------\t\t ------\t\t ------\t\t ------\n");
    printf("\t\t|      |\t|      |\t|      |        |      |\n");
    printf("\t\t|      |\t|      |\t|      |        |      |\n");
    printf("\t\t|      |\t|      |\t|      |        |      |\n");
    printf("\t\t \b ------\t\t ------\t\t ------\t\t ------\n\n");
    }

    if(watermelon < watermelonInv)
    {
    printf("\t\t \b ------\t\t ------\t\t ------\t\t ------\n");
    printf("\t\t|      |\t|      |\t|      |        |\\    /  \b\b|\n");
    printf("\t\t|      |\t|      |\t|      |        |  /\\    \b\b|\n");
    printf("\t\t|      |\t|      |\t|      |        |/    \\  \b\b|\n");
    printf("\t\t \b ------\t\t ------\t\t ------\t\t ------\n\n");
    } 

    if(watermelon >= watermelonInv)
    {
    printf("\t\t \b ------\t\t ------\t\t ------\t\t ------\n");
    printf("\t\t|      |\t|      |\t|      |        |      |\n");
    printf("\t\t|      |\t|      |\t|      |        |      |\n");
    printf("\t\t|      |\t|      |\t|      |        |      |\n");
    printf("\t\t \b ------\t\t ------\t\t ------\t\t ------\n");
    }

    printf("\n\n\t----------------------------------------------------------------------------------------\n\n");
    printf("\n*** Visual Representation of Inventory ***\n\n\n");
    
    printf("\t\t Apples\t\t Oranges\t Grapes\t\tWatermelons\n\n");

// Apples
char appleTop[] = "\t\t   -";
char appleSide[] = "\t\t  | |";
char appleBottom[] = "\t\t   -";

// Oranges
char orangeTop[] = "\t\t    -";
char orangeSide[] = "\t\t   | |";
char orangeBottom[] = "\t\t    -";

// Grapes
char grapesTop[] = "\t\t   -";
char grapesSide[] = "\t\t  | |";
char grapesBottom[] = "\t\t   -";

// Watermelons
char watermelonsTop[] = "\t\t    -";
char watermelonsSide[] = "\t\t   | |";
char watermelonsBottom[] = "\t\t    -";

if(apples < applesInv)
{
char appleTop[] = "\t\t   -";
char appleSide[] = "\t\t  | |";
char appleBottom[] = "\t\t   -";

    while(apples < applesInv)
    {
    printf("%s      \n%s      \n%s      \n\n", appleTop, appleSide, appleBottom);
    apples++;
    }
}

if(oranges < orangesInv)
{
char orangeTop[] = "\t\t    -";
char orangeSide[] = "\t\t   | |";
char orangeBottom[] = "\t\t    -";

    while(oranges < orangesInv)
    {
    printf("\t\t%s\n\t\t%s\n\t\t%s\t\t\n\n", orangeTop, orangeSide, orangeBottom);
    oranges++;
    }

}

if(grapes < grapesInv)
{
char grapesTop[] = "\t\t   -";
char grapesSide[] = "\t\t  | |";
char grapesBottom[] = "\t\t   -";

    while(grapes < grapesInv)
    {
    printf("\t\t\t\t%s\n\t\t\t\t%s\n\t\t\t\t%s\t\t\t\t\n\n", grapesTop, grapesSide, grapesBottom);
    grapes++;
    }

}

if(watermelon < watermelonInv)
{
char watermelonsTop[] = "\t\t    -";
char watermelonsSide[] = "\t\t   | |";
char watermelonsBottom[] = "\t\t    -";

    while(watermelon < watermelonInv)
    {
    printf("\t\t\t\t\t\t%s\n\t\t\t\t\t\t%s\n\t\t\t\t\t\t%s\t\t\t\t\t\t\n\n", watermelonsTop, watermelonsSide, watermelonsBottom);
    watermelon++;
    }

}

int applesWeight = apples * 1;
int orangesWeight = oranges * 2;
int grapesWeight = grapes * 1;
int watermelonsWeight = watermelon * 6;


int shelfOne = applesWeight + orangesWeight;
int shelfTwo = grapesWeight + watermelonsWeight;

int shelfOneCapacity = 20;
int shelfTwoCapacity = 30;

char capacity[] = "X";

printf("\t\n\n Shelf\n--------\n\n");


// Bins
if(shelfOne > shelfOneCapacity)
{
    char capacity[] = "X";
}
printf("Shelf 1 (Apples & Oranges): %dlbs\t\t\tShelf Capacity: 20lbs\t\t\t Capacity Reached: %s\n\n", shelfOne, capacity); 


if(shelfTwo > shelfTwoCapacity)
{
char capacity[] = "X";
}
printf("Shelf 2 (Grapes & Watermelons): %dlbs\t\t\tShelf Capacity: 30lbs\t\t\t Capacity Reached: %s \n\n\n\n ", shelfTwo, capacity); 

printf("\t-----------------------------------------------------------------------------------------------\n\n");


printf("\n\n***** - Expiration Date - *****\n\n");

int freightDayReceived = 26;
int freightMonthReceived = 2;

int appleRottenDays = 14; 
int orangeRottenDays = 12;
int grapeRottenDays = 10;
int watermenlonRottenDays = 20; 

int appleDay = freightDayReceived - appleRottenDays;
int appleMonth = 2;

int orangeDay = freightDayReceived - orangeRottenDays;
int orangeMonth = 2;

int grapesDay = freightDayReceived - grapeRottenDays;
int grapesMonth = 2;

int watermelonsDay = freightDayReceived - watermenlonRottenDays;
int watermelonsMonth = 2;

char border[] = "----------------------------------------------";

printf("Freight Date Received: %d/%d\n\n%s", freightMonthReceived, freightDayReceived, border);
printf("\n|Apple Expiration Date: %d/%d\t\t     |\n%s", appleMonth, appleDay, border);
printf("\n|Orange Expiration Date: %d/%d\t\t     |\n%s", orangeMonth, orangeDay, border);
printf("\n|Grapes Expiration Date: %d/%d\t\t     |\n%s", grapesMonth, grapesDay, border);
printf("\n|Watermelon's Expiration Date: %d/%d\t     |\n%s\n\n\n", watermelonsMonth, watermelonsDay, border);

#define CHEETOS 20

if(CHEETOS > 3)
{
    printf("Hello World");
}

#include "age.h"

if(age > 15)
{
    printf("We have a millenial");
}

}   