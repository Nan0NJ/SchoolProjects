#include <stdio.h>
// Task 3 ~ Alternation Series 1, 10, 2, 9, 3, 8, 4, 7, 5, 6, 6, 5, 7, 4, 8, 3, 9, 2, 10, 1
int main() {
	int dNum = 0;
	printf("Insert number to reach to: ");
	scanf("%d", &dNum);
	for(int i = 0; i < dNum; i++){
		printf("%d, ", i+1);
		if(i == dNum-1){
			printf("%d ",dNum-i);
		}else{
		printf("%d, ", dNum-i);
		}
	}
	return 0;
}