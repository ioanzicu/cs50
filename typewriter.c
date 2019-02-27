#include <stdio.h>
#include <stdbool.h>

int main(int argc, char* argv[])
{
	// ensure one and only command line argument
	if(argc != 2)
	{
		printf("Usage: %s [name of document]\n", argv[0]);
		return 1;
	}

	// open a new document
	FILE* fp = fopen(argv[1], "w");
	
	// check for successful open
	if(fp == NULL)
	{
		printf("Could not create %s\n", argv[1]);
		return 2;
	}

	// save text in the file
	int count = 0;
	while(count < 5)
	{
		char* input = "This is string number: ${count}";
		fputs(input, fp);
		fputs("\n", fp);
		count++;
	}

	fclose(fp);
	return 0;
}
