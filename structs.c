#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 3

typedef struct
{
        int id;
        int name;
        int house;
}
student;


int main(void)
{
	student class[STUDENTS];

	for(int i = 0; i < STUDENTS; i++)
	{
		class[i].id = i+1;
		class[i].name = i+1;
		class[i].house = i+1;
	}

	// print
	for(int i = 0; i < STUDENTS; i++)
	{
		printf("Id: %d, Name: %d, House: %d\n", class[i].id, class[i].name, class[i].house);
	}

	return 0;
}
