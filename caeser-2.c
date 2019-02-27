/**
	31.12.2018 Zicu Ioan
	Caeser Cipher
	Encipher letters depending on the key value
*/


#include <stdio.h>
#include <ctype.h>
#include <string.h>

int getRemainder(char c, char beginCh, int key);
//int charFromBeginning(char c, int index);
int getNewChar(char c, int key);
void printEncipherChar(char c, char beginCh, int key);


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
		// check alphanumeric char
		if(isalpha(s[i])) {
			// check upper case
			if(isupper(s[i]))
				printEncipherChar(s[i], 'A', key);
			// check lower case
			else if(islower(s[i]))
				printEncipherChar(s[i], 'a', key);
		} else 
			// print other chars: comma, whitespace, question sign, etc... 
			printf("%c", s[i]);
	}

	printf("\n");
	return 0;
}


void printEncipherChar(char c, char beginCh, int key)
{
	int remainder;
	int newc;
	if(((c - beginCh) + key) > 25) {
		// remainder form key minus position befor ending, for exemple at the 'y'
		remainder = getRemainder(c, beginCh, key); //key - (26 - (s[i] - 'A'));
		//newc = charFromBeginning(beginCh, remainder); 
		newc = getNewChar(beginCh, remainder);
	} else 
		newc = getNewChar(c, key);
	printf("%c", newc);
}

int getRemainder(char c, char beginCh, int key)
{
	return key - (26 - (c - beginCh));
}

int getNewChar(char c, int key)
{
	return c + (26 + key) % 26;
}


