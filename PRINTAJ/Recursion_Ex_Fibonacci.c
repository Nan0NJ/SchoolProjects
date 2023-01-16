#include <stdio.h>
int Fibonacci(int n)
{
if (n <= 1) 
	return n; // FIBONACCI EXERCISE
else
	return Fibonacci(n - 1) + Fibonacci(n - 2); 
}

int main()
{
int NumInput = 0;
printf("Enter the n-th value: ");
scanf("%d", &n);
printf("The n-th value in Fibonacci is %d", Fibonacci(n - 1));
}
