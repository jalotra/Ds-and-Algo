
// We can do this with two methods 
// 1. Is with the help of recursion 
// 2. Is the iterative solution finder method


// Here I am solving with a recursive solution 

#include "stdio.h"

// Function declaration 
int Binary_Search(int[], int, int, int);

int main(){

    int arr[6] = {1 , 5 , 9 , 6 , 56 , 68};
    printf("%d\n", Binary_Search(arr, 6, 0, 5)); // Ask can't figure out why for 6 first > last 

    return 0 ;
}


// BInary Search FUnction Defintion

int Binary_Search(int arr[], int value_to_search, int first, int last){
    //Base Cases
    if(first > last){
        printf("%d can't be found\n" , value_to_search);
        return 0;
    }

    int mid = (first + last)/2;
    if(arr[mid] == value_to_search){
        return mid; 
    }
    else if(arr[mid] > value_to_search){
        Binary_Search(arr, value_to_search, first, mid-1);
    }
    else{
        Binary_Search(arr, value_to_search, mid+1, last);
    }


}