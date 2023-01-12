#include <stdio.h>

int main() {
	float Num1 = 0, Num2 = 0;
	char Operation;
	printf("Insert first number: ");
	scanf("%f", &Num1);
	printf("Insert operation: ");
	scanf(" %c", &Operation);
	printf("Insert second number: ");
	scanf("%f", &Num2);
	float Answer;
	switch(Operation){
	case '+':
		Answer = Num1 +Num2;
		printf("The answer is: %f", Answer);
		break;
	case '-':
		Answer = Num1 - Num2;
		printf("The answer is: %f", Answer);
		break;
	case 'x':
		Answer = Num1*Num2;
		printf("The answer is: %f", Answer);
		break;
	case '/':
		if(Num2 == 0){
			printf("Error! 0 is not a divider\n");
			break;
		}
		else{
			Answer = Num1/Num2;
			printf("The answer is: %f", Answer);
			break;
		}
	};
	return 0;
}