#include <stdio.h>

#define SIZE 8
void merge(int arr[], int start, int end, int size);
void mergeSortHelp(int arr[], int start, int end, int size);

// O(n log n) better than bubble, insertion, selection sort
void mergeSort(int arr[], int size)
{
	mergeSortHelp(arr, 0, size, size);
}

// Split array in 2 half arrays
// Ex:  arr[10]
void mergeSortHelp(int arr[], int start, int end, int size)
{
	if(size < 2) return;
	mergeSortHelp(arr, start, (start+end)/2, size/2); 
	mergeSortHelp(arr, (start+end)/2, end, size/2);   
	merge(arr, start, end, size);			
	
	// Recursion 1 -> Two arrays with size 5
	// arr, start (from 0), end (10/2), size (10/2) 
	// arr, start ((0+10)/2 = 5), end (10), size (10/2)
	// arr, start (0), end (10), size (10)

	// Recursion 2 -> Two arrays with size 2 and 3
	// arr, start (from 0), end (5/2), size (5/2) 
	// arr, start ((0+5)/2 = 2), end (5), size (5/2)
	// arr, start (0), end (5), size (5)
	
	// Recursion 3 -> Two arrays with size 1 and 2
	// arr, start (from 0), end (2/2), size (2/2) 
	// arr, start ((0+2)/2 = 1), end (2), size (2/2)
	// arr, start (0), end (2), size (2)
}

void merge(int arr[], int start, int end, int size)
{
	int left = start;
	int right = (start+end)/2;

	int newArr[size];
	// arr[] = {2,4,6,1,3,5};
	//	    l     r   e
	for(int i = 0; i < size; i++)
	{	// 0 < (0+6)/2
		if(left < right)
		{
			if(right >= end)
			{
				newArr[i] = arr[left];
				left++;			
			} 
			else if(arr[left] < arr[right]) 
			{
				newArr[i] = arr[left];
				left++;
			}		
			else 
			{
				newArr[i] = arr[right];
				right++;			
			}
		}		
		else /** When left elements arr all less than right elements
					[1,5,3,6,4,2]
		          [1,2,3]  			    [4,5,6]
			  [] left = 3			    [4,5,6] right = (s+e)/2 = 0+6/2 = 3
						left < right False 
						newArr = [1,2,3]
			Add just right elements newArr = [1,2,3,4,5,6] 
		     */ 
 		{
			newArr[i] = arr[right];
			right++;
		}
	}

	/** Print new arr
	for(int i = 0; i < sizeof(newArr) / sizeof(int); i++)
		printf("%d, ", newArr[i]);
	printf("\n");
	*/
}

int main (void)
{
	int numbers[SIZE] = {4, 15, 16, 50, 8, 23, 42, 108};
	printf("Merge Sort:\nBefore: ");
	for(int i = 0; i < SIZE; i++)
		printf("%d, ", numbers[i]);

	printf("\nAfter:   ");

	mergeSort(numbers, SIZE);

	for(int i = 0; i < SIZE; i++)
		printf("%d, ", numbers[i]);

	return 0;
}
