#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char s[] = {'t','h','a','n','k','s',' ','f','o','r',' ','t','h','e',' ','a','d','d'};
	for(int i = 0; i < strlen(s); i++){
		
		//(i % 2 == 0) ? (isalpha(s[i])) ? (printf("%c", s[i] - 32)) : (printf(" ")) : printf("%c", s[i]);
		
		//(i % 2 == 0) ? (printf("%c", toupper(s[i]))) : (printf("%c",s[i]));
		
		/**
			   A = 65 =  01000001
			       32 =  00100000
		To Lower   A | 32 =  01100001 => a
		
			   a = 97 =  01100001
	   	     (Not 32) ~32 =  11011111
		To Upper  a & ~32 =  01000001 => A
		*/
		//(i % 2 == 0) ? (isalpha(s[i])) ? (printf("%c", (s[i] & ~32))) : (printf(" ")) : printf("%c", s[i]);
  	

		if((s[i] >= 'A' && s[i] <= 'Z') || 
		   (s[i] >= 'a' && s[i] <= 'z')) {
			if(!(i % 2))    // to upper
		 		s[i] &= ~('a' - 'A');
			else 		// to lower
				s[i] |= ('a' - 'A');
		}
	}
	printf("%s\n", s);
	return 0;
}
