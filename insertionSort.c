#include <stdio.h>
// Worst O(n^2)
// Best  O(n)  - runned on sorted list
void insertionSort(int arr[], int length);

int main(void)
{
	int input[] = {23,42,4,16,8,15};
	int length = sizeof(input) / sizeof(int); 
	printf("Insertion Sort:\nBefore: ");
	for(int i = 0; i < length; i++)
	{
		printf("%d, ", input[i]);
	}
	printf("\nAfter:  ");
	insertionSort(input, length);
	printf("\n");
}

void insertionSort(int arr[], int length)
{
	int currElement, j;
	for(int i = 0; i < length; i++)
	{
		currElement = arr[i];
		j = i;
		while(j > 0 && arr[j - 1] > currElement)
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = currElement;
	}

	// print result
	for(int i = 0; i < length; i++)
	{
		printf("%d, ", arr[i]);
	}
}
