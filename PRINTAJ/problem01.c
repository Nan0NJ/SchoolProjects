// Proble 1 ~ Upper Triangle with Stars Pattern
#include <stdio.h>

int main() {
	int length;
	printf("Please input the index of the largnest of the Star Pattern: ");
	scanf("%d", &length);
	printf("N=%d\n", length);
	for(int index_i = 0; index_i < length; index_i++)
	{
		for(int index_j = 0; index_j < length; index_j++) //***
		{						  // ** 
			if(index_j >= index_i)			  //  *
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
