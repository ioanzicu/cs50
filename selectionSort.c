#include <stdio.h>
// Time Complexity O(n^2) - Not Efficient
// Best (Omega)    O(n^2)
// Selection Sort is better than Bubble Sort 
// just in term of number of swaping elements

void selectionSort(int arr[], int length);

int main(void)
{
	int input[] = {23,42,4,16,8,15};
	int length = sizeof(input) / sizeof(int);
	printf("Selection Sort:\nBefore: ");
	for(int i = 0; i < length; i++)
	{
		printf("%d, ", input[i]);
	}
	printf("\nAfter:  ");
	selectionSort(input, length);
	printf("\n");
	return 0;
}

void selectionSort(int arr[], int length)
{
	int min;
	int temp;
	for(int i = 0; i < length; i++)
	{
		min = i;
		for(int j = i + 1; j < length; j++)
			if(arr[j] < arr[min])
				min = j;
		if(min != i) {
			temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}

	for(int i = 0; i < length; i++)
	{
		printf("%d, ", arr[i]);
	}
}
