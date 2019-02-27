#include <stdio.h>

// Convert upper to lower through ASCII table

int main(void)
{
	// Get user input

	// char c;
	//do
	//{
	//	printf("Enter a character! ");
	//	c = GetChar();
	//}
	//while(!(c >= 'a' && c <= 'z'))

	// Version 1

	// Find position from the 'A' = 65 in ASCII, starting from zero
	int position = 'D' - 'A';
	printf("Position starting at 0: %d\n", position);
	// Add position nr to the nr of the 'a', to get lowercase
	// 32 is diference between 'a' and 'A'
	char c = 'a' + position;
	printf("Char: D to lower is %c\n", c);
	


	// Version 2 -> Bitwise operators << >> ^ & | ~
	//  9:      1001
	//  5:      0101
	//  9 ^ 5 = 1100 xor (exclusive or) just 1 or 0 are 1
	//  9 | 5 = 1101 or
	//  9 & 5 = 0001 and
	
	// 'A' = 65 = 1000001
	// 'a' = 97 = 1100001
 
	// 'D' = 68   = 1000100
	// 'a'-'A' 32 = 0100000
	// 'a'^'A' 32 = 0100001

	
	// To lower case 'D' | 32 = 'd' (OR) 
	// 'd' = 100  = 1100100
	//		0100000
			
	// To upper case 'd' ^ 32 = 'D'

	// Difference between Upper and Lower is just
	// flipping the 32-bit position

	printf("\n--Using Bitwese--\n");
	
	// to Lower
	char lowCh = 'D' | ('a' ^ 'A'); // 32
	printf("Char to lower %c.\n", lowCh);
	
	// to Upper
	char upCh = 'd' ^ ('a' ^ 'A'); // 32
	printf("Char to upper %c.\n", upCh);

	return 0;
}
