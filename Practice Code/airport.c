#include <stdio.h>
#include <string.h>

int main(void)
{
    // People
    int jaden = 0;
    int benjamin = 0;
    int mauricio = 0;
    int chase = 0;
    int nicole = 0;
    int julio = 0;
    int stephany = 0;

    int jadenFinalized = 0;
    int benjaminFinalized = 0;
    int mauricioFinalized = 0;
    int chaseFinalized = 0;
    int nicoleFinalized = 0;
    int julioFinalized = 0;
    int stephanyFinalized = 0;

    //TSA 

    // TSA CheckPoint 1
    int jadenTsaOne = 0;
    int benjaminTsaOne = 0;
    int mauricioTsaOne = 1;
    int chaseTsaOne = 1;
    int nicoleTsaOne = 0;
    int julioTsaOne = 1;
    int stephanyTsaOne = 0;

    if(jadenTsaOne == 1)
    {
        jadenFinalized = 1;
    }
    if(benjaminTsaOne == 1)
    {
        benjaminFinalized = 1;
    }
    if(mauricioTsaOne == 1)
    {
        mauricioFinalized = 1;
    }
    if(chaseTsaOne == 1)
    {
        chaseFinalized = 1;
    }
    if(nicoleTsaOne == 1)
    {
        nicoleFinalized = 1;
    }
    if(julioTsaOne == 1)
    {
        julioFinalized = 1;
    }
    if(stephanyTsaOne == 1)
    {
        stephanyFinalized = 1;
    }

    // TSA CheckPoint Two
    int jadenTsaTwo = 1;
    int benjaminTsaTwo = 1;
    int mauricioTsaTwo = 0;
    int chaseTsaTwo = 0;
    int nicoleTsaTwo = 0;
    int julioTsaTwo = 1;
    int stephanyTsaTwo = 0;

    if(jadenTsaTwo == 1)
    {
        jadenFinalized = jadenFinalized + 1;
    }
    if(benjaminTsaTwo == 1)
    {
        benjaminFinalized = benjaminFinalized + 1;
    }
    if(mauricioTsaTwo == 1)
    {
        mauricioFinalized = mauricioFinalized + 1;
    }
    if(chaseTsaTwo == 1)
    {
        chaseFinalized = chaseFinalized + 1;
    }
    if(nicoleTsaTwo == 1)
    {
        nicoleFinalized = nicoleFinalized + 1;
    }
    if(julioTsaTwo == 1)
    {
        julioFinalized = julioFinalized + 1;
    }
    if(stephanyTsaTwo == 1)
    {
        stephanyFinalized = stephanyFinalized + 1;
    }
    

    // TSA CheckPoint Three
    int jadenTsaThree = 0;
    int benjaminTsaThree = 0;
    int mauricioTsaThree = 0;
    int chaseTsaThree = 0;
    int nicoleTsaThree = 0;
    int julioTsaThree = 1;
    int stephanyTsaThree = 0;

    if(jadenTsaThree == 1)
    {
        jadenFinalized = jadenFinalized + 1;
    }
    if(benjaminTsaThree == 1)
    {
        benjaminFinalized = benjaminFinalized + 1;
    }
    if(mauricioTsaThree == 1)
    {
        mauricioFinalized = mauricioFinalized + 1;
    }
    if(chaseTsaThree == 1)
    {
        chaseFinalized = chaseFinalized + 1;
    }
    if(nicoleTsaThree == 1)
    {
        nicoleFinalized = nicoleFinalized + 1;
    }
    if(julioTsaThree == 1)
    {
        julioFinalized = julioFinalized + 2;
    }
    if(stephanyTsaThree == 1)
    {
        stephanyFinalized = stephanyFinalized + 1;
    }

    //TSA Review (terrorist confirmation)
    char terrorist[] = "is a terrorist";
    if(jadenFinalized > 3)
    {
        printf("Jaden %s\n", terrorist);
    }
        if(benjaminFinalized > 3)
    {
        printf("Benjamin %s\n", terrorist);
    }
        if(mauricioFinalized > 3)
    {
        printf("Mauricio %s\n", terrorist);
    }
        if(chaseFinalized > 3)
    {
        printf("Chase %s\n", terrorist);
    }
        if(nicoleFinalized > 3)
    {
        printf("Nicole %s\n", terrorist);
    }
        if(julioFinalized > 3)
    {
        printf("Julio %s\n", terrorist);
    }
        if(stephanyFinalized > 3)
    {
        printf("Stephany %s\n", terrorist);
    }

}