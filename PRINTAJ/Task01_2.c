#include <stdio.h>
// Task 1 * ~ Tournament Matches.
int main() {
	int NumOfTeams;
	printf("How many teams play in the Tournament? --> ");
	scanf("%d",&NumOfTeams);//getting user input
	if(NumOfTeams<2)
	{
		printf("Error: Minimum ammount are 2 teams in a tournament!\n");
		return 1;
	}
	printf("Outcome of Possible Matches: \n");
	for (int index1 = 1; index1 <= NumOfTeams; index1++)
	{
		for (int index2 = index1; index2 <= NumOfTeams; index2++)
		{
			if(index1 != index2){//condition if both are equal
				printf("Team %d vs Team %d\n",index1,index2);
			}
		}//endinnerloop
	}//endouterloop
	return 0;
}