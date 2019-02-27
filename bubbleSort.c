#include <stdio.h>
#include <stdbool.h>

// O(n^2)
void bubbleSort(int arr[], int length);

int main(void)
{
	int input[] = {3,2,9,6,5};
	int length = sizeof(input) / sizeof(int);
	//  	       2 3 6 5 9  i = 4; j = 4-1
	//  	       2 3 5 6 9  i = 3; j = 3-1 NO swaps
	printf("Bubble Sort: \nBefore Sorting: ");
	for(int i = 0; i < length; i++)
	{
		printf("%d, ", input[i]);
	}
	printf("\n");
	bubbleSort(input, length);
	return 0;
}

// A procedure of sorting elements asc/descending order
void bubbleSort(int arr[], int length)
{
	int temp;
	bool swap = false;
	// Version I
/**	for(int i = 0; i < length; i++)
	{
		swap = true;
		for(int j = 0; j < length; j++)
		{
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;	
				swap = false;
			}
		}
		if(swap) break;
	}
*/	
	
	// Version II Improved 
 	for(int i = length; i > 0; i--)
        {
                swap = true;
                for(int j = 0; j < i - 1; j++)
                {
                        if(arr[j] > arr[j+1]){
                                temp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;        
                                swap = false;
                        }
                }
                if(swap) break;
        }
	
	// after sorting
	printf("After sortig:   ");
	for(int i = 0; i < length; i++)
	{
		printf("%d, ", arr[i]);	
	}
	
	printf("\n");
}
