#include <stdio.h>

int main() {
	int PerfectNum = 0;
	printf("Insert Number: ");
	scanf("%d", &PerfectNum);
	if(PerfectNum <= 0){
		printf("Error Needed Positive Integer!");
		return 1;
	}
	int CheckPerfect = 0;
	for(int i=1; i < PerfectNum; i++){
		if(PerfectNum % i == 0)
			CheckPerfect+=i;
	}
	if(CheckPerfect == PerfectNum)
		printf("%d is a perfect number!\n", PerfectNum);
	else
		printf("%d is NOT a perfect number!\n", PerfectNum);
	return 0;
}