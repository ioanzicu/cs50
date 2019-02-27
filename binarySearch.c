#include <stdio.h>
#include <math.h>

int binarySearch(int key, int arr[], int min, int max);

int main(void)
{
	// need to be already sorted list
	int input[] = {0,1,5,41,54,99,541,487};
	int length = sizeof(input) / sizeof(int);
	int result = binarySearch(1, input, 0, length);
	printf("Binary Search:\n Find 1 -> %d\n", result);
}


int binarySearch(int key, int arr[], int min, int max)
{
/**
	for(int i = 0; i < max; i++){
		printf("%d,", arr[i]);
	}
	printf("\n");
*/
	
	int midpoint;
	if(max < min){
		return -1;
	} else {
		midpoint = floor((max - min) / 2);
		
		if(arr[midpoint] < key)
			binarySearch(key, arr, midpoint + 1, max);
		else if(arr[midpoint] > key)
			binarySearch(key, arr, min, midpoint - 1);
		else
			return midpoint;
	}
}

