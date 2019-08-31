// The merge-sort involves breaking the given array into two sub-arrays of equal-arrays
// And then comparing the elements at every step and finally merging them into an array

// INcluding standard C library
# include "stdio.h"

// Function declaration
void mergeSort(int, int, int []);
void merge(int, int, int, int []);

int main(){

    int arr[] = {85,24,63,45,17,31,96,50,15};
    int array_size = sizeof(arr)/ sizeof(arr[0]);
    
    mergeSort(0, array_size -1 , arr );

    // Printing the sorted array
    for(int i=0 ; i < array_size; i++){
        printf("%d ", arr[i]);
    }



    return 0;
}

void mergeSort(int left_index, int right_index, int arr[]){
    if(left_index < right_index){

        int mid_index = left_index + (right_index - left_index)/2;

        // Sorts the arr and returns the first half of the sorted array 
        mergeSort(left_index, mid_index, arr);
        // Sorts the arr and returns the second half of the sorted array
        mergeSort(mid_index+1, right_index, arr);

        // Merges both the arrays and return the changes in arr
        merge(left_index, right_index, mid_index, arr); 
    }
}

// Merging at each step r <= log(n) is the main part that this algorithm has to solve 
void merge(int left_index, int right_index, int mid_index , int arr[]){

    // What is the use of this merge function ??
    // Solution :: Suppose that at some-step r the arr = {85,24,63,45,17,31,96,80} 
    // is sub-divided into parts like  {85, 24};{63, 45}
    // tHE  task remains to merge these back like {24,45,63,85}
    // This merge function implements this.

    int i,j,k;
    int temp_left_array_length = mid_index-left_index+1;
    int temp_right_array_length = right_index - mid_index;

    // Create two temporary arrays
    int temp_array_left[temp_left_array_length] , temp_array_right[temp_right_array_length];

    // Copy data into both arrays
    for(i=0 ; i< temp_left_array_length; i++){
        temp_array_left[i] = arr[left_index+i];
    }

    for(j = 0; j < temp_right_array_length ; j++){
        temp_array_right[j] = arr[mid_index+j+1];
    }

    // Merge the temporary arrays back into arr[l.....r]
    // Initialise some variables that determine the indices of different arrays

    i = 0 ; // for temp_array_left 
    j = 0; // for temp_array_right
    k = left_index;

    while(i < temp_left_array_length && j < temp_right_array_length){
        if(temp_array_left[i] <= temp_array_right[j]){
            arr[k] = temp_array_left[i];
            i++;
        }
        else{
            arr[k] = temp_array_right[j];
            j++;
        }

        k++;
    }

    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < temp_left_array_length) 
    { 
        arr[k] = temp_array_left[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < temp_right_array_length) 
    { 
        arr[k] = temp_array_right[j]; 
        j++; 
        k++; 
    } 
} 


















