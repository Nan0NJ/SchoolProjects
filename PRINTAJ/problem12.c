#include <stdio.h>

/* Write a program in C to count a total number of duplicate elements in an array. Minimum should
be 5 and maximum is 25 elements. Inputs must be integers (both negative and positive). */

int main() {
	int n = 0,repeat_word_count,Repeat_Max=0,FinalRepeat;
	printf("Insert array amount: ");
	scanf("%d", &n);
	if(n<5){
		printf("Insufficient amount for the need of the program\n");
		return 1;
	}
	int a[n];
	for(int i=0; i<n; i++){
		printf("Input %d element:\n", i+1);
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		int temp = a[i];
		repeat_word_count = 0;
		for(int j=0; j<n; j++){
			if(temp == a[j]){
				repeat_word_count++;
			}
			if(FinalRepeat < repeat_word_count){
				FinalRepeat = repeat_word_count;
				Repeat_Max = temp;
			}
		}
	}
	if(FinalRepeat < 5 || FinalRepeat >25){
		printf("Insufficient amount for the need of the program\n");
		return 1;
	}
	printf("The number %d repeats the most with %d repeats\n", Repeat_Max, FinalRepeat);
	return 0;
}