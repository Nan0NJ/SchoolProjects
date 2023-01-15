#include <stdio.h>

int main() {
	int N, Count=0,n,i=0;
	printf("Enter a Max Number to show primes: ");
	scanf("%d", &N);
	while(i<=N)
	{
		int j=1;
		Count=0;
		while(j<=n)
		{
			if(n%j==0)
				Count++;
			j++;
		}
		if(Count==2)
		{
			printf("%d ",n);
			i++;
		}
		n++;
	}
	return 0;
}
