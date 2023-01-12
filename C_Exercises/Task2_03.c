#include <stdio.h>
#include <math.h>

int GetCentury(int);
int main() {
	int SummonYear = 0;
	printf("Enter a year: ");
	scanf("%d", &SummonYear);
	if(SummonYear<1 || SummonYear>9999){
		printf("Error: Year Limit Passed\n");
		return 1;
	}
	if(SummonYear % 6 == 0)
		printf("Phoenix has come forth! - Wish for health!\n");
	if(SummonYear % 50 == 0)
		printf("Bahamut has come forth! - Wish for wisdom!\n");
	int Century = GetCentury(SummonYear);
	int CheckLeviathan = 0;
	for(int index = Century; index < SummonYear; index++)
	{
		if(index % 6 == 0){
			CheckLeviathan = index+12; // First appearence from te century for Phoenix
			break; // Add 2 times and break
		}
	}
	if(CheckLeviathan == SummonYear)
		printf("Leviathan has come forth! - Wish for peace!\n");
	return 0;
}
int GetCentury(int SummonYear) {
	int Century = 1;
	while(SummonYear>10){
		SummonYear/=10; // CONVERT TO NEARES YEAR
		Century *=10;
	}
	Century*=SummonYear;
	return Century;
}