#include <stdio.h>

int factorial(int num);
int sigma(int num);

int main(void)
{
	int num = 6;
	printf("Factorial of %d is %d\n", num, factorial(num));
	printf("Sigma of %d is %d\n", num, sigma(num));
}

int factorial(int num)
{
// Version I -> Iterative;
/**
	int sum = 1;
	for(int i = 1; i <= num; i++)
		sum *= i;
	return sum;
*/
// Version II -> Recursive
	if(num < 2) return 1;
	return num * factorial(num - 1);
}
int sigma(int num)
{
/**
	int sum = 0;
	for(int i = 0; i <= num; i++)
		sum += i;
	return sum;
*/
	if(num < 2) return 1;
	return num + sigma(num - 1);
}
