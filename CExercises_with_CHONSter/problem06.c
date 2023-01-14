#include <stdio.h>

int main() {
	int Input;
	printf("Enter a number: ");
	scanf("%d", &Input);
	do
	{
		int i = 1;
		while(i<4)
		{
			printf("%d", Input);
			i++;
		}
		printf("\nEnter a number: ");
		scanf("%d", &Input);
	}while(Input!=999);
	return 0;
}
