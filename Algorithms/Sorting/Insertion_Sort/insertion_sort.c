// iNSERTION SORT PROGRAM


// IN INSERTION SORT WE DIVIDE THE ARRAY INTO TWO PARTS
// THE LEFT PART CONTAINS THE SORTED SUB-ARRAY
// AND THE RIGHT PART CONTAINS THE UNSORTED SUB-ARRAY


// NOW THE ALGO IS TO GET ELEMENTS FROM THE RIGHT PART OF THE ARRAY
// AND PLACE THEM IN THE EXACT LOCATION IN THE LEFT PART OF THE ARRAY

// AND THEM GO ON DOING THAT IN THE WHOLE ARRAY


// CODE STARTS
#include "stdio.h"

void InsertionSort(int *arr, int *n)
{
	for(int i = 0; i < *n ; i++)
	{
		int value = arr[i];
		int hole = i;
		while(hole > 0 && arr[hole-1] > value)
		{
			arr[hole] = arr[hole-1] ; 
			hole -- ;
		}
		arr[hole] = value; 
	}
}    

// Main Function 

int main(){
	//array to sort
	int arr[] = {0,6,4,2,1,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	InsertionSort(arr, &n);
	for(int i=0; i < sizeof(arr)/sizeof(arr[0]); i++){
		printf("%d", arr[i]);
	}
}