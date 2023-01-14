#include <stdio.h>
#include <string.h>

int main() {

	char string[20];
	printf("Enter a string: ");
	scanf("%s", string);

	int n = strlen(string);
	int counter=n;
	for ( int i=0; i<n; i++ ) {
		for ( int j=i; j<n; j++ ) {
			if ( i != j ) {
				if ( string[i] == string[j] ) {
					counter--;
					break;
				}
			}
		}
	}

	printf("\nLength of substring: %d", counter);
}