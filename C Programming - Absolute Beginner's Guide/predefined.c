#include <stdio.h>
#include <string.h>

int main(void)
{
    // Array of predefined values
    int predefined_values[] = {10, 20, 30, 40, 50};
    int length = 5; // Number of elements in the array
    int var;

    // Loop through the array and assign each value to var
    
    for (int i = 0; i < length; i++) 
    {
        var = predefined_values[i]; // Set var to the current predefined value
        printf("Cycle %d: var = %d\n", i, var);
    }

}
