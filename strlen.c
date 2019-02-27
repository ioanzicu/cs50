#include <stdio.h>

int length(char input[]);

int main(void)
{
	char s[] = {'f','o','o','b'};
	printf("The length of %s is: %d\n", s, length(s));
	return 0;
}

int length(char input[])
{
        int length = 0;
        while(input[length] != '\0')
		length++;
        return length;
}

