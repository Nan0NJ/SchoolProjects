#include <stdio.h>
#include <stdlib.h>

int main() {
	int NumH = 0, NumMin = 0;
	printf("Input number of hours: ");
	scanf("%d", &NumH);
	printf("Input number of minutes: ");
	scanf("%d", &NumMin);
	if(NumH < 0 || NumH > 23 || NumMin < 0 || NumMin > 60){
		printf("Time doesn't work like that!\n");
		return 1;
	}
	if(NumMin == 60){
		NumMin = 0;
		NumH++;
	}
	if(NumH >= 12){
		NumH-=12;
	}
	int HourAngle = 0.5*(60*NumH+NumMin);
	int MinuteAngle = 6*NumMin;
	int Angle = abs(HourAngle - MinuteAngle);
	printf("The angle between the hands are %d and %d degrees.\n", Angle, 360-Angle);
	return 0;
}