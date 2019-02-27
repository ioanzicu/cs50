
#include <stdio.h>

int main(void)
{
	float C = 100;
//	double C = (5.0 / 9.0) * (F - 32);
//	double F = (9.0 / 5.0) * C + 32;
	float F = ((C * 9) / 5) + 32;
	
	printf("The %.01f degree Celsius is = to %.01f in Fahrenheit\n", C, F);
	return 0;
}
