// Problem 0 ~ Animal Insurance
#include <stdio.h>

int main() {
	char *Animals[20] = {
		"Dog",
		"Cat",
		"Bird",
		"Reptile"
	};
	char GetInput = '\0';
	printf("Choose your pet ? (Dog - D | Cat - C | Bird - B | Reptile - R ) --> ");
	scanf(" %c", &GetInput);
	if(GetInput == 'D')
	{
		printf("Has your %s been neutered? (Y/N)-->", Animals[0]);
		scanf(" %c", &GetInput);
		if(GetInput == 'Y')
			printf("A dog that has been neutered costs $50\n");
		else if(GetInput == 'N')
			printf("A dog that has not been neutered costs $80\n");
		else
			printf("ERROR: Wrong Input\n");
	}
	else if(GetInput == 'C')
	{
		printf("Has your %s been neutered? (Y/N)-->", Animals[1]);
		scanf(" %c", &GetInput);
		if(GetInput == 'Y')
			printf("A cat that has been neutered costs $40\n");
		else if(GetInput == 'N')
			printf("A cat that has not been neutered costs $60\n");
		else
			printf("ERROR: Wrong Input\n");	
	}
	else if(GetInput == 'B')
		printf("A bird costs nothing\n");
	else if(GetInput == 'R')
		printf("A reptile costs nothing\n");
	else
		printf("Error: Animal not in Data Base\n");
	return 0;
}
