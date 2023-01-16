#include <stdio.h>

struct Task1_Butterfly
{
	int Num;	
};
void Butterfly(int);
int main() { // Start of Program
	struct Task1_Butterfly T1;
	T1.Num = 0;
	printf("Insert a number for n:");
	scanf("%d", &T1.Num);
	if(T1.Num<0){
		printf("Error Wrong Input!");
		return 1;
	}
	Butterfly(T1.Num);
	return 0;
} // End of Program
void Butterfly(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i >= j && i+j <= n-1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i <= j && i+j >= n-1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
		
}