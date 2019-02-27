#include <stdio.h>

int main(void)
{
	FILE *f = fopen("word.txt","r");
	char s[128];
	char word[] = {'a','m','a','i','z','i','n','g'};

	while(fscanf(f, "%127s\n", s) == 1)
	{
		if(strcmp(word, s) == 0)
		{
			printf("Matched!");
		}
	}
	fclose(f);
}
