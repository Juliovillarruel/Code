#include <stdio.h>
#include <string.h>

int main(void)
{

int new_york = 85;
int texas = 70;
int california = 300;

// (new_york < 40) ? (printf("We can launch from New York City")) : printf("No, we can not launch from New York City");


if (new_york < texas && texas > california)
{
    printf("The sequence is correct");
}
else if (california < 20)
{
    printf("We have landed the second outlet of code");
}
else 
{
    printf("The third channel will always run regardless of what you think");
}

}