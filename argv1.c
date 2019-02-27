#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	// print arguments
	printf("\n");
	
	// print words (char arrays)
	for(int i = 0; i < argc; i++){
		printf("%s\n", argv[i]);

/**
	// print each char
	for(int i = 0; i < argc; i++)
                //printf("%s\n", argv[i]);
                for(int j = 0; j < strlen(argv[i]); j++)
                        printf("%c\n", argv[i][j]);

*/

	printf("\n");
	return 0;
}
