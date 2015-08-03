/* 12.11.2a.c */
#include <stdio.h>
#include "12.11.2a.h"
static int mode;
static double distance;
static double fuel;

void set_mode(int n)
{
    if (n == METRIC || n == US)
        mode = n;
    else
    {
        if (n >= 1)
            mode = US;
        else
            mode = METRIC;
        printf("Invalid mode specified. Mode %d(%s) used.\n",
                mode, mode == 1?"US":"METRIC");
    }     
}

void get_info(void)
{
    if (mode == 1)
    {
        printf("Enter distance traveled in miles: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", &fuel);
    }
    else
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", &fuel);
    }
}

void show_info(void)
{
    if (mode == 1)
        printf("Fuel consumption is %.1lf miles per gallon.\n", distance / fuel);
    else
        printf("Fuel consumption is %.1lf liters per kilometer.\n", fuel / distance);
}

