/**
	31.12.2018 Zicu Ioan
	Caeser Cipher
	Encipher letters depending on the key value
*/


#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (void)
{

	int key = 6;
	char s[] = {'I','\'','m',' ','d','i','z','z','y','!'};
	//char s[] = {'I','t','\'','s',' ','m','y',' ','l','i','f','e','!'};
	
	// Print original chars;
	for(int i = 0; i < strlen(s); i++)
        {
                printf("%c", s[i]);
        }

	// Ex: 'I' = 73; 'z' = 122;

	printf("\n");

	int newc;
	int remainder;
	for(int i = 0; i < strlen(s); i++)
	{
		// check if it is alphanumeric char
		if(isalpha(s[i])) {
			// check if it is upper case
			if(isupper(s[i]))
				// if char + key is after 'Z', add index to the 'A'
				
				// Ex: 'I' = 73        key = 6
				//     'A' = 65
				// (((73 - 65) + 6) > 25
				//         14 > 25 False
				if(((s[i] - 'A') + key) > 25) {
					// remainder form key minus position befor ending, for exemple at the 'y'
					remainder = key - (26 - (s[i] - 'A'));
					newc = 'A' + (26 + remainder) % 26; 
				} else 
					//     73 + (26 + 6) % 26 = 73 + 6 = 79 -> 'O'
					newc = s[i] + (26 + key) % 26;
			// check is it is lower case
			else if(islower(s[i])){
				// if char + key is after 'z', add index to the 'a'

				// Ex: 'z' = 122      key = 6
				//     'a' = 97
				// (((122 - 97) + 6) > 25
				// 	   31 > 25 True
				if(((s[i] - 'a') + key) > 25) {
					// 6 - (26 - (122 - 97))
                                        remainder = key - (26 - (s[i] - 'a')); // 5
					// 97 + (26 + 5) % 26
					// 102 -> 'f'
					newc = 'a' + (26 + remainder) % 26;
                                } else 
                                        newc = s[i] + (26 + key) % 26;
			}
			printf("%c", newc);
		} else 
			// print other chars like comma, whitespace, question sign, etc... 
			printf("%c", s[i]);
	}

	printf("\n");
	return 0;
}

