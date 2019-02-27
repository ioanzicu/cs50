/**
	31.12.2018 Zicu Ioan
	Vegenere Cipher
	Encipher letters depending on the keyword and 
	enciper each char depending on the keyword chars
*/


#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define NUM_LETTERS 26

int main (void)
{
	char keyword[] = {'o','h','a','i'};
	char s[] = {'T','h','i','s','.','.','.',' ','i','s',' ','C','S','5','0','!'};
	//char s[] = {'I','t','\'','s',' ','m','y',' ','l','i','f','e','!'};
		
	int keyword_length = strlen(keyword);
	int num_letters_seen = 0;
	
	for(int i = 0; i < strlen(s); i++)
	{
		if(isalpha(s[i])) {	
			int key;		
			if(isupper(keyword[num_letters_seen % keyword_length]))
				key = keyword[num_letters_seen % keyword_length] - 'A';
			else	
				key = keyword[num_letters_seen % keyword_length] - 'a';
				
			if(isupper(s[i]))
				s[i] = ((s[i] - 'A' + key) % NUM_LETTERS) + 'A';
			else
				s[i] = ((s[i] - 'a' + key) % NUM_LETTERS) + 'a';
	
			num_letters_seen++;
		}
	}

	printf("%s\n", s);
	return 0;
}
