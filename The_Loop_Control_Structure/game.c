/*Write a program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. 
Rules for the game are:
# There are 21 matchsticks
# The computer asks the player to pick 1, 2, 3 or 4 matchsticks.
# After the person picks, the computer does it's picking.
# Whoever is forced to pick up the last matchstick loses the game  */

#include<stdio.h>

int main()
{
    int matchsticks = 21, ppick, cpick;

    while(matchsticks > 1)
    {
        printf("Remaining Matchsticks: %d\n", matchsticks);

        printf("Pick the number of matchsticks(1 or 2 or 3 or 4): ");
        scanf("%d", &ppick);

        matchsticks = matchsticks - ppick;

        if(matchsticks == 1)
        {
            printf("You picked the last matchstick. You lose!");
            break;
        }

        cpick = 5 - ppick;
        printf("Computer picks %d matchsticks\n", cpick);
        matchsticks = matchsticks - cpick;
    }

    return 0;
}