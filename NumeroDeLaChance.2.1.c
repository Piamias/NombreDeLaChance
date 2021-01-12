#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "NumChance.h"

int main ()
{
	int randomNumber;
	int userPick;
	int counter;
	int relaunch;
	int maxNumber;
	
	relaunch = 1;
	while (relaunch != 2)
	{	
		maxNumber = chooseLevel();	
		printf("A random number has been drawn ! Find it !\n\n");
		counter = 0;
		randomNumber = pickRandomNumber(maxNumber);
		userPick = 0;
		while (userPick != randomNumber)
		{	
			userPick = numberRequest();
			findNumber(randomNumber,userPick);
			counter ++;
		}
		printf("\nCongrats you found right number in %d !!!\n\n",counter);
		relaunch = relaunchScript();
	}
    return 0;
}


