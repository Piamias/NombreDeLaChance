#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int PickRandomNumber(int MaxNumber)
{
	int RandomNumber;
	int Max;
	const int Min = 1;

	Max = MaxNumber;
	srand(time(NULL));
	RandomNumber = (rand() % (Max - Min + 1)) + Min;
	return RandomNumber;
}

int NumberRequest()
{
	int NumberPick;
			
	printf("Pick a number\n\n");
	scanf("%d", &NumberPick);
	return NumberPick;
}

int FindNumber(int RandomNumber,int UserPick)
{
	if (RandomNumber > UserPick)
		{		
			printf("\nIt's more!\n\n");
		}	
		else if (RandomNumber < UserPick)
		{		
			printf("\nIt's less !\n\n");
		}	
		else
		{		
		}	
	return 0;
}

int RelaunchScript()
{
	int Relaunch;

	printf("Do you want to relaunch program ?\n");
	printf("YES(1)	NO(2)\n\n");
	scanf("%d", &Relaunch);
	return Relaunch;
}

int ChooseLevel()
{
	int Level;
	int MaxNumber;

	printf("Pick difficulty level\n\n");
	printf("(1) Easy, find the number between 1 and 100 (1)\n");
	printf("(2) Medium, find the number between 1 and 1000 (2)\n");
	printf("(3) Hard, find the number between 1 and 10000 (3)\n");
	scanf("%d", &Level);
	if (Level == 1)
	{
		MaxNumber = 100;
	}
	else if (Level == 2)
	{
		MaxNumber = 1000;
	}
	else
	{
		MaxNumber = 10000;
	}
return MaxNumber;
}		
		
int main ()
{
    int RandomNumber;
	int UserPick;
	int Counter;
	int Relaunch;
	int MaxNumber;
	
	Relaunch = 1;
	while ((Relaunch != 2))
	{	
		MaxNumber = ChooseLevel();	
		printf("A random number has been drawn ! Find it !\n\n");
		Counter = 0;
		RandomNumber = PickRandomNumber(MaxNumber);
		UserPick = 0;
		while (UserPick != RandomNumber)
		{	
			UserPick = NumberRequest();
			FindNumber(RandomNumber,UserPick);
			Counter ++;
		}
		printf("\nCongrats you found right number in %d !!!\n\n",Counter);
		Relaunch = RelaunchScript();
	}
    return 0;
}

