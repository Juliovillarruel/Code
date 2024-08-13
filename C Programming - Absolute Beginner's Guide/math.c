#include <stdio.h>
#include <string.h>

int main(void)
{
    /*
    int age = 10;
    int ages = 3;

    int money = age + -ages;
    printf("%d\n\n", money);

*/

/*
float a = 19.0;
float b = 5.0;
float floatAnswer;

int x = 19;
int y = 5;
int intAnswer;

floatAnswer = a / b;
printf("%.1f divided by %.1f equals % 1.f\n", a, b, floatAnswer);

floatAnswer = x / y;
printf("%d divided by %d equals %.1f\n", x , y, floatAnswer);

intAnswer = a / b;
printf("%.1f divided by %.1f equals %d\n", a , b, intAnswer);

intAnswer = x % y;
printf("%d modulus (i.e. remainder of) %d equals %d\n\n\n\n", x, y, intAnswer);


return 0;

*/
/*
int i = 10;
int j = 10;
int k = 10; 

int avg = (i + j + k) / 3;

printf("The average is %d\n\n", avg);



a = b = c = d = e = 6; 
printf("A holds a value of %d\n\n", a);
printf("b holds a value of %d\n\n", b);
*/

// int add = a = 5 * (b = 2);


int grade1, grade2, grade3, grade4;
float averageGrade, gradeDelta, percentDiff;

grade1 = grade3 = 88;
grade2 = 79;

printf("What did you get on the fourth test");
printf(" (An integer between 0 and 100)?\n");
scanf(" %d", &grade4);

averageGrade = (grade1 + grade2 + grade3 + grade4) / 4;

printf("Your average is %.1f. \n", averageGrade);

gradeDelta = 95 - averageGrade;
percentDiff = 100 * ((95 - averageGrade) / 95);
printf("Your grade is %.1f points lower than the ", gradeDelta);
printf("top grade in the class (95) \n");
printf("You are %.1f percent behind ", percentDiff);
printf("that grade!\n\n\n");




}