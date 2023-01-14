#include <stdio.h>

int main() {
	int a[10], Smallest;
	for(int i=0; i<10; i++)
	{
		printf("Insert Number:");
		scanf("%d", &a[i]);
	}
	Smallest = a[0];
	for(int i=0; i<10; i++)
	{
		if(Smallest>=a[i])
			Smallest=a[i];
	}
	printf("SMALLEST IN ARRAY: %d\n", Smallest);
	return 0;
}