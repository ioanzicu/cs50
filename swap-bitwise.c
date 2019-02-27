#include <stdio.h>

int main(void)
{
/**
	a = 11001
	b = 01100
      a^b = 10101

	(a^b)^b = a
	(a^b)^a = b
	
	^ (XOR)
	
	a^a = 0
	b^b = 0
*/
	int a = 25;
	int b = 12;
	printf("Before: a = %d, b = %d\n", a, b);	

	a ^= b; // a = a ^ b = 10101
	b ^= a; // b = b ^ a = 11001
	a ^= b; // a = a ^ b = 01100
	printf("After:  a = %d, b = %d\n", a, b);
}
