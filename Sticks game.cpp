#include<stdio.h>
main()
{

int matchsticks=21, user, computer;

printf("Welcome to the game.\n \nThe rules are simple. \nThere are 21 sticks in total, you get to choose any number of sticks less than or equal to 4.\nThen, computer will pick any number of sticks upto 4. Whoever pick the last stick is the loser.\n");
printf("Do not enter Invalid Numbers.\nNumbers above 4 are invalid.");

printf("\nIf you do so, the computer automatically wins.");

while (matchsticks>=1)
{

printf("\nNumber of matchsticks available right now is %d.", matchsticks);

printf("\n\nYour Turn...\n\n\n");

printf("\nPick up the matchstick(s)-- (1-4): ");
scanf ("%d", &user);

if (user>4)

{
printf("Invalid Selection");
break;
}

computer=5-user;

printf("\nComputer's Turn..\n" );
printf("\nComputer chooses:%d", computer);

matchsticks=matchsticks-user-computer;
continue;

if(matchsticks==1)

break;
}

matchsticks--;
printf("\nComputer Wins");

}
