#include <stdio.h>
#include <string.h>

int main() {

	printf("\nCalendar of a specific month will be shown.\n");
	printf("Which day of the week does the month start?\n");
	printf("Input figure among the following figures.\n");

	int digitday = 0, days = 0, counter, pp=1;

	printf("Which day of the week does the month start? [Sunday:0/Monday:1/Tuesday:2/Wendesday:3/Thursday:4/Friday:5/Saturday:6]\n");
	scanf("%d", &digitday);
	printf("How many days does the month have?\n");
	scanf("%d", &days);

	
	printf("Su\tMo\tTu\tWe\tTh\tFr\tSa\n");

	switch (digitday) {
	case 1:
		printf("\t");
		break;
	case 2:
		printf("\t\t");
		break;
	case 3:
		printf("\t\t\t");
		break;
	case 4:
		printf("\t\t\t\t");
		break;
	case 5:
		printf("\t\t\t\t\t");
		break;
	case 6:
		printf("\t\t\t\t\t\t");
		break;
	}

	digitday+=1;

	for ( int i=digitday; i<8; i++ ) {
		printf("%d\t", pp);
		pp++;
	}
	printf("\n");

	for ( int i=0; i<5; i++) {
		for ( int j=0; j<7; j++ ) {
			printf("%d\t", pp);
			pp++;
			if ( pp == days+1 ) {
				break;
			}
		}
		if ( pp == days+1 ) {
				break;
			}
		printf("\n");
	}

	return 0;
}
