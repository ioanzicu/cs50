#include <stdio.h>

int main(void){
	float dollars = 0.41;
	// Convert dollars to cents
	int cents = dollars * 100;
	// Total coinst
	int coins = 0;
	
	// Types of coins available
	int quarter = 25;
	int dimes = 10;
	int nickels = 5;
	int pennies = 1;

	while(cents >= quarter){
		// Decrease .25 cents from total
		cents = cents - quarter;
		printf("0.25\r\n");
		// Add one coin
		coins++;
	}

	while(cents >= dimes){ 
                // Decrease .10 cents from total
                cents = cents - dimes;
		printf("0.10\r\n");
                // Add one coin
                coins++;
        }
	
	 while(cents >= nickels){ 
                // Decrease .05 cents from total
		printf("0.05\r\n");
                cents = cents - nickels;
                // Add one coin
                coins++;
        }

	while(cents >= pennies){ 
                // Decrease .01 cents from total
                cents = cents - pennies;
		printf("0.01\r\n");
                // Add one coin
                coins++;
        }

	printf("In total you will receive %d coins.\r\n", coins);

/**
	Version 2
	q = cents / 25;
	d = (cents % 25) / 10;
	n = (cents % 10) / 5;
	p = cents % 5;
*/
}
