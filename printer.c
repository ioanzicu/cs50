#include <stdio.h>
#include <unistd.h>

int main (int argc, char* argv[])
{
	// ensure one and only command line argument
	if(argc != 2)
	{
		printf("Usage: %s [name of document]\n", argv[0]);
		return 1;
	}
	
	// open a new document
	FILE* fp = fopen(argv[1], "r");
	
	// check for successful open
	if(fp == NULL)
	{
		printf("Could not open %s\n", argv[1]);
		return 1;
	}

	// storage space for each line of text
	char output[256];
	
	// get text from user and save to file
	for(int i = 1; fgets(output, sizeof(output), fp) != NULL; i++)
		printf("Line %02d: %s", i, output);

	// close the file
	fclose(fp);

	// success
	return 0;
}
