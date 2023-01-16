#include <stdio.h>
// Task 1 * ~ Produce the shape below given the following value of positive integer n > 3.
int main(){ // TO PRINT Z
	int Num;
	printf("Insert number to produce a pattern: ");
	scanf("%d", &Num);//getting user input
	if(Num<3)
	{
		printf("Error: Value for number must hold for n>=3\n");
		return 1;
	}//condition to check if there is a wrong input
	for(int index1=0; index1<Num; index1++)
	{
		for(int index2=0; index2<Num; index2++)
		{
			if(index1==0 || index1+index2 == Num-1 || index1==Num-1)//condition to print o
				printf("o");
			else
				printf(" ");

		}//endinnerloop
		printf("\n");
	}//endoutloop
	return 0;
}
