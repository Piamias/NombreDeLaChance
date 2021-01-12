int pickRandomNumber(int maxNumber);

int numberRequest(void);

void findNumber(int randomNumber,int userPick);

int relaunchScript(void);

int chooseLevel(void);

int pickRandomNumber(int maxNumber)
{
	int randomNumber;
	int max;
	const int min = 1;

	srand(time(NULL));
	max = maxNumber;
	randomNumber = (rand() % (max - min + 1)) + min;
	return randomNumber;
}

int numberRequest(void)
{
	int numberPick;
			
	printf("Pick a number\n\n");
	scanf("%d", &numberPick);
	return numberPick;
}

void findNumber(int randomNumber,int userPick)
{
	if (randomNumber > userPick)
		{		
			printf("\nIt's more!\n\n");
		}	
		else if (randomNumber < userPick)
		{		
			printf("\nIt's less !\n\n");
		}	
		else
		{		
		}	
}

int relaunchScript(void)
{
	int relaunch;

	printf("Do you want to relaunch program ?\n");
	printf("YES(1)	NO(2)\n\n");
	scanf("%d", &relaunch);
	return relaunch;
}

int chooseLevel(void)
{
	int level;
	int maxNumber;

	printf("Pick difficulty level\n\n");
	printf("(1) Easy, find the number between 1 and 100 (1)\n");
	printf("(2) Medium, find the number between 1 and 1000 (2)\n");
	printf("(3) Hard, find the number between 1 and 10000 (3)\n");
	scanf("%d", &level);
	if (level == 1)
	{
		maxNumber = 100;
	}
	else if (level == 2)
	{
		maxNumber = 1000;
	}
	else
	{
		maxNumber = 10000;
	}
	return maxNumber;
}
	
