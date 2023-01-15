#include <stdio.h>

int main() {
	int Num;
	printf("Input size of an array:");
	scanf("%d", &Num);
	int a[Num];
	printf("Elements to be inserted in the array:");
	for(int i=0; i<Num; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("array of the even elements:");
	for(int i=0; i<Num; i++)
	{
		if(a[i]%2==0)
			printf(" %d", a[i]);
	}
	printf("\narray of the odd elements:");
	for(int i=0; i<Num; i++)
	{
		if(a[i]%2!=0)
			printf(" %d", a[i]);
	}
	return 0;
}
