#include <stdio.h>
#include <string.h>

// void staircase ( int stair) {
// 	if (stair<2) {
// 		printf("\n");
// 		printf(" _\n");
// 		printf("|_|");
// 		}
// 	else {
// 		printf(" _");
// 		for ( int i=0; i<stair; i++ ) {
// 			for ( int j=0; j<i; j++ ) {
// 				if ( i=0 ) {
// 					printf(" |");
// 					i++;
// 				}
// 				printf("_");
// 			}
// 			printf("\n|");
// 			for ( int j=0; j<i; j++ ) {
// 				if ( i=0 ) {
// 					printf(" |");
// 					i++;
// 				}
// 				printf("_");
// 			}

// 		}
// 		for ( int i =0; i<stair*2; i++ ) {
// 			printf("_");
// 		}
// 	}

// }

int main() {
	int height;
    printf("Enter the height of the pattern: ");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++) {
        printf("|");
        for (int j = 1; j <= height; j++) {
            if (i == 1 || i == height) {
                printf("_");
            } else if (j == 1 || j == height) {
                printf("|");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
	return 0;
}