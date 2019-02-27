#include <stdio.h>
#include <string.h>

int linearSearch(int key, char s[]);

int main(void)
{
	char s[] = {'C','T','M','W','P','Z','O','A'};
	printf("Linear Search:\nFinded: '%c' at position %d\n", 'Z', linearSearch('Z', s));
	return 0;
}

int linearSearch(int key, char s[])
{
	for(int i = 0; i < strlen(s); i++)
		if(s[i] == key) 
			return i;
}
