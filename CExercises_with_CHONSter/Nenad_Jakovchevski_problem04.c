#include <stdio.h>

int main() {
	int NumberIndex = 0;
	printf("Insert Size of Pattern: ");
	scanf("%d", &NumberIndex);
	for(int indexI = 0; indexI < NumberIndex; indexI++)
	{
		for(int indexJ= 0; indexJ <= indexI; indexJ++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int indexI = NumberIndex-1; indexI > 0; indexI--)
	{
		for(int indexJ = 0; indexJ <= indexI; indexJ++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}