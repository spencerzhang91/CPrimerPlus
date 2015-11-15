/* manydice.c */
/* compile with diceroll.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h"

int main(void)
{
    int dice, roll;
    int sides;
    
    srand((unsigned int)time(0));   // randomize seed
    printf("Enter the number of sides per die, 0 to stop.\n");
    while (scanf("%d", &sides) == 1 && sides > 0)
    {
        printf("How many dice?\n");
        scanf("%d", &dice);
        roll = roll_n_dice(dice, sides);
        printf("You have rolled a %d using %d %d-sided dice.\n",
                roll, dice, sides);
        printf("How may sides? Enter 0 to stop.\n");
    }
    printf("The rollem() function was called %d times.\n",
            roll_count);           // use external variable 
    printf("GOOD FORTUNE TO YOU!\n");
    
    return 0;
}
