#include <stdio.h>
#include <math.h>

int main() {
	int aSide = 0, bSide = 0, cSide = 0, AAngle = 0, BAngle = 0, CAngle = 0;
	printf("Input side a:");
	scanf("%d", &aSide);
	if(aSide < 1){
		printf("Error!");
		return 1;
	}
	printf("Input side b:");
	scanf("%d", &bSide);
	if(bSide < 1){
		printf("Error!");
		return 1;
	}
	printf("Input angle C:");
	scanf("%d", &CAngle);
	cSide = sqrt(pow(aSide,2)+pow(bSide,2)-2*aSide*bSide*cos(CAngle));
	//Cosine Law states:
	AAngle = asin((aSide*sin(CAngle))/cSide);
	BAngle = asin((bSide*sin(AAngle))/aSide);
	if(AAngle < 90 && BAngle < 90 && CAngle < 90)
		printf("Acute Triangle\n");
	else if(AAngle > 90 || BAngle > 90 || CAngle > 90)
		printf("Obtuse Triangle\n");
	else if(AAngle == 90 || BAngle == 90 || CAngle == 90)
		printf("Right Triangle\n");

	return 0;
	}