/**
	31.12.2018 Zicu Ioan
	Vegenere Cipher
	Encipher letters depending on the keyword and 
	enciper each char depending on the keyword chars
*/


#include <stdio.h>
#include <ctype.h>
#include <string.h>

void printEnciphredChar(char c, char beginCh, int key);

int main (void)
{
	int keyword[] = {'o','h','a','i'};
	char s[] = {'T','h','i','s','.','.','.',' ','i','s',' ','C','S','5','0','!'};
	//char s[] = {'I','t','\'','s',' ','m','y',' ','l','i','f','e','!'};
	
	// count the length of the temp arr
	int index = 0;	
	for(int i = 0; i < strlen(s); i++){
		if(isalpha(s[i])) 		
			if(!isdigit(s[i]))
				index++;	
	}	
		
	int counter = 0;
	char key;
	char temp[index];

	for(int i = 0; i < strlen(s); i++)
	{
		if(isalpha(s[i])) {			
		// Filter just alphanumerics values
			if(!isdigit(s[i])){
			// Filter just letters, without digits
				temp[i] = keyword[counter++%4];	
				key = (temp[i] - 'a');
				
	/**								
	filtered           s[] = {'T','h','i','s','i','s','C','S'};
						+	
	temp arr	temp[] = {'o','h','a','i','o','h','a','i'};	
						=			
				 {'H','o','i','a','w','z','C','A'};

 		      'o' - 'a' = 14		  'T' = 84 + 14  = 'H'
		      'h' - 'a' =  8		  'h' = 104 + 8  = 'o'
		      'a' - 'a' =  0     	  'i' = 105 + 0  = 'i'
		      'i' - 'a' =  9		  's' = 115 + 9  = 'a'
						  'i' = 105 + 14 = 'w'
						  's' = 115 + 8  = 'z'
						  'C' = 67 + 0   = 'C'
						  'S' = 83 + 9 	 = 'A'  
	*/	
	
				if(isupper(s[i]))
					printEnciphredChar(s[i], 'A', key);
				else if(islower(s[i]))
					printEnciphredChar(s[i], 'a', key);
			}
		} else  
			printf("%c", s[i]);
	}

	printf("\n");
	return 0;
}

void printEnciphredChar(char c, char beginCh, int key)
{
	char newc;
	int remainder = 0;
	if(((c - beginCh) + key) > 25) {
		remainder = key - (26 - (c - beginCh));
		newc = beginCh + (26 + remainder) % 26; 
	} else 
		newc = c + (26 + key) % 26;
	
	printf("%c", newc);
}
