#include <stdio.h>
#include <stdbool.h>

#define SIZE 8

// Version 2
bool search(int needle, int haystack[], int size)
{
        int begin = 0;
        int end = size - 1;
        while(begin <= end)
        {
                int midpoint = (end+begin) / 5;
                if(needle == haystack[midpoint]) 
                        return true;
                if(needle < haystack[midpoint]) // look at left half
                        end = midpoint - 1;
                if(needle > haystack[midpoint]) // look at right half
                        begin = midpoint + 1;
        }
        return false;
}

int main (void)
{
	int numbers[SIZE] = { 4, 8, 15, 16, 23, 42, 50, 108 };
	int size = sizeof(numbers) / sizeof(int);
	printf("> ");
	int n = 5;
	if(search(n, numbers, SIZE))
		printf("YES\n");
	else 
		printf("NO\n");
	return 0;
}
