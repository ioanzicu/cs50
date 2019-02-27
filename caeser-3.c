/**
	31.12.2018 Zicu Ioan
	Caeser Cipher
	Encipher letters depending on the key value
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define NUM_LETTERS 26

int main (void)
{
	int key = 6;
	char s[] = {'I','\'','m',' ','d','i','z','z','y','!'};
	//char s[] = {'I','t','\'','s',' ','m','y',' ','l','i','f','e','!'};
	//char s[] = {'T','h','i','s','.','.','.',' ','i','s',' ','C','S','5','0','!'};	

	// Print original chars;
	for(int i = 0; i < strlen(s); i++)
        {
                printf("%c", s[i]);
        }

	printf("\n");
	
	for(int i = 0; i < strlen(s); i++)
	{
		if(isupper(s[i]))
			s[i] = ((s[i] - 'A' + key) % NUM_LETTERS) + 'A';
		else if(islower(s[i]))
			s[i] = ((s[i] - 'a' + key) % NUM_LETTERS) + 'a';
	}
	
	// print encrypted ciphertext
	printf("%s\n", s);
	return 0;
}
