/* global.c -- using external variable */
#include <stdio.h>
int units = 0;                  // an external variable
void critic(void);
int main(void)
{
    extern int units;           // optional secondary declaration
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    
    while (units != 65)
        critic();
    printf("You must have looked it up!\n");
    return 0;
}

void critic(void)
{
    /* omitted optional secondary declaration of external varailbe
    units here */
    printf("No luck, chummy. Try again.\n");
    scanf("%d", &units);
}
