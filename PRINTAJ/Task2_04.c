#include <stdio.h>
#include <stdlib.h>

 int main() {
 	printf("Enter time\n");
 	int CurH = 0, CurMin = 0; // DEADLINE
 	int DeH = 0, DeMin = 0;
 	printf("Current Hour: ");
 	scanf("%d", &CurH);
 	printf("Current Minute: ");
 	scanf("%d", &CurMin);
 	printf("Deadline Hour: ");
 	scanf("%d", &DeH);
 	printf("Deadline Minute: ");
 	scanf("%d", &DeMin);
 	if(CurH<0 || CurH>24 || DeH<0 || DeH>24 || CurMin<0 || CurMin>60 || DeMin<0 || DeMin>60){
 		printf("Sorry Buddy, Time doesn't work like that!\n");
 		return 1;
 	}
 	int FullCurrentTime = (CurH*60)+CurMin;
 	int DeadLineTime = (DeH*60)+DeMin;
 	int Countdown = abs(FullCurrentTime - DeadLineTime);
 	printf("You have %d minutes left.\n", Countdown);
  	return 0;
 }
