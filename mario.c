
#include <stdio.h>

int main(void)
{
	int height = 8;
	int spacePerRow = height - 2;

	for(int i = 1; i <= height; i++){	
		for(int j = 0; j <= height; j++){
			if(j <= spacePerRow){
				printf(" ");
			} else {
				printf("#");
			}
		}
	 	spacePerRow--;
		printf("\r\n");
	} 
	return 0;
}
