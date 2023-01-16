#include <stdio.h>

struct Tiles {
	int row, column; // MAJMUNE SQUARE TILES
};
int main() { // Start of Program
	struct Tiles T;
	T.row = 0;
	T.column = 0;
	printf("Insert ammount of rows: ");
	scanf("%d", &T.row);
	printf("Insert ammount of columns: ");
	scanf("%d", &T.column);
	int Smallest , Largest;
	int CountSquares = 0;
	if(T.row > T.column){
		Largest = T.column;
		Smallest = T.row;
	}else{
		Largest = T.row;
		Smallest = T.column;
	}
	for (int i = 1; i <= Smallest; i++) {
 		CountSquares += (Smallest - i + 1) * (Largest - i + 1);
 	}
 	printf("Number of squares: %d\n", CountSquares);
	return 0;
}
