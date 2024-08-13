#include <stdio.h>
#include <string.h>

int main(void)
{

int numTires;
float tirePrice, beforeTax, netSales;

printf("How many tires did you purchase? ");
scanf(" %d", &numTires); 

printf("What was the cost per tire (enter in $xx.xx format)? ");
scanf(" $%f", &tirePrice);


// Compute the price
beforeTax = tirePrice * numTires;
netSales = beforeTax + (beforeTax * SALESTAX);

printf("You spent $%.2f on your tires\n\n\n", netSales);

return 0;


}