#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    // Planetary Names
    char merc[10] = "Mercury";
    char venu[10] = "Venus";
    char eart[10] = "Earth";
    char mar[10] = "Mars";
    char jupi[10] = "Jupiter";
    char satu[10] = "Saturn";
    char uran[10] = "Uranus";
    char nept[10] = "Neptune";

    // Planetary Surface Gravity 
    float mercury = 3.7; // m/s^2
    float venus = 8.87; // m/s^2
    float earth = 9.81; // m/s^2
    float mars = 3.71; // m/s^2
    float jupiter = 24.79; // m/s^s
    float saturn = 10.44; // m/s^2
    float uranus = 8.69; // m/s^2
    float neptune = 11.15; // m/s^2


    // Height of item dropped
    float height = 10.00; // meters

    // Kinematic Equation
    float k = 2.00;

    // Unit of Measurement
    char unitOfMeasurement[10] = "m/s^2";

    // Final Velocities
    float finalVelocityMercury, finalVelocityVenus, finalVelocityEarth, finalVelocityMars, finalVelocityJupiter, 
    finalVelocitySaturn, finalVelocityUranus, finalVelocityNeptune;
    
    // Mathematical Equations
    finalVelocityMercury = sqrt(k * mercury * height);
    finalVelocityVenus = sqrt(k * venus * height);
    finalVelocityEarth = sqrt(k * earth * height);
    finalVelocityMars = sqrt(k * mars * height);
    finalVelocityJupiter = sqrt(k * jupiter * height);
    finalVelocitySaturn = sqrt(k * saturn * height);
    finalVelocityUranus = sqrt(k * uranus * height);
    finalVelocityNeptune = sqrt(k * neptune * height);

    printf("\n\nFinal Velocities Before Impact of Planetary Surface\n\n");
    printf("Planets     Velocity\n");

    float mercury2;
    float venus2;
    float earth2;
    float mars2;
    float jupiter2;
    float saturn2;
    float uranus2;
    float neptune2;

    


    float start = 0.00;
    float end = 100.00;

    float highestPlanetaryVelocity = 0.00;
    float lowestPlanetaryVelocity = 0.00; 

    char highestPlanetaryVelocityName[20];

    while (start < mercury)
    {
        highestPlanetaryVelocity = mercury;
        start = highestPlanetaryVelocity;
        strcpy(highestPlanetaryVelocityName, merc);
    }
    while (start < venus)
    {
        highestPlanetaryVelocity = venus;
        start = highestPlanetaryVelocity;
        strcpy(highestPlanetaryVelocityName, venu);

    }
    while (start < earth)
    {
        highestPlanetaryVelocity = earth;
        start = highestPlanetaryVelocity;
        strcpy(highestPlanetaryVelocityName, eart);

    }
    while (start < mars)
    {
        highestPlanetaryVelocity = mars;
        start = highestPlanetaryVelocity;
        strcpy(highestPlanetaryVelocityName, mar);
    }
    while (start < jupiter)
    {
        highestPlanetaryVelocity = jupiter;
        start = highestPlanetaryVelocity;
        strcpy(highestPlanetaryVelocityName, jupi);
    }
        while (start < saturn)
    {
        highestPlanetaryVelocity = saturn;
        start = highestPlanetaryVelocity;
        strcpy(highestPlanetaryVelocityName, satu);
    }
    while (start < uranus)
    {
        highestPlanetaryVelocity = uranus;
        start = highestPlanetaryVelocity;
        strcpy(highestPlanetaryVelocityName, uran);
    }
    while (start < neptune)
    {
        highestPlanetaryVelocity = neptune;
        start = highestPlanetaryVelocity;
        strcpy(highestPlanetaryVelocityName, nept);
    }
    
    printf("\n\nThe highest planetary velocity is %.2f\n\n", highestPlanetaryVelocity);
    printf("The planet with the higest acting velocity on objects and their surface is %s\n\n", highestPlanetaryVelocityName);


    




}