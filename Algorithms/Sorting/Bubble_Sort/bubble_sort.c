

// ALgorithm :: The motive of each pass in bubble sort is
// to make arr[n-1] to be the maximum value
// If this thing is implemented so in n-1 passes we will have 
// a sorted array.

// THE RUNNING TIME OF THE ALGORITHM IS O(n**2)
// Very Basic Algorithm

#include "stdio.h"

int swap(int * x, int * y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int arr[], int n){
    
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0; j < n - (i+1); j++)
        { 
            if(arr[j+1] < arr[j]){
                // Swap the elements
                swap(&arr[j+1], &arr[j]);
            }

            
        }
    }
    
}

int main(){
    // Driver Code

    int arr[] =  {45,12,85,32,89,39,69,44,42,1,6,8};
    int length  = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, length);

    for(int i =0 ; i < length ; i++){
        printf("%d ", arr[i]);
    }





    return 0;
}