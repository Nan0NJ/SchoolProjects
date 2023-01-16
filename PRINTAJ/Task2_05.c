#include <stdio.h>
int main() {
	char Majmune[10];
	int array[10];
	printf("\nEnter your password Majmune: ");
	scanf("%s", Majmune);
	int n = strlen(Majmune); // DECRYPT CODE
	for ( int i=0; i<n; i++ ) {
		int pepe = (int)(Majmune[i])-48;
		array[i] = (pepe+5)%10;
	}
	printf("\nThe password is ");
	for ( int i=0; i<n; i++ ) {
		printf("%d", array[i]);
	}
	return 0;
}