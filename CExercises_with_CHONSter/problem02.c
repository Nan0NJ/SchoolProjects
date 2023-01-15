#include <stdio.h>

int main() {
	int NumberInput, NumberSum=0,Index=0;
	float Average=1.0;
	printf("Insert a number:");
	scanf("%d", &NumberInput);
	if(NumberInput == 0)
	{
		printf("NO AVERAGE\n");
		return 1;
	}
	while(1)
	{
		if(NumberInput < 0){
			printf("ERROR\n");
			printf("Insert a number:");
			scanf("%d", &NumberInput);
		}
		else if(NumberInput > 0)
		{
			NumberSum += NumberInput;
			Index++;
			printf("Insert a number:");
			scanf("%d", &NumberInput);
		}
		else
		{
			printf("Last Value 0 was inputed! ( 0 NOT COUNTED IN AVERAGE FOR INDEX )\n");
			break;
		}
	}
	if(Index > 0)
	{
		Average *= (NumberSum/(Index*1.00));
		printf("The Average is %f\n", Average);
	}
	return 0;
}
