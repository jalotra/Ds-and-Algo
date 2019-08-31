
// We can do this with two methods 
// 1. Is with the help of recursion 
// 2. Is the iterative solution finder method


// Here I am solving with a recursive solution 

#include "stdio.h"

// Function declaration 
int Binary_Search(int[], int, int, int);

int main(){

    int arr[6] = {1 , 5 , 6 , 9 , 56 , 68};
    printf("%d\n", Binary_Search(arr, 6, 0, 5)); 

    return 0 ;
}


// BInary Search FUnction Defintion

int Binary_Search(int arr[], int value_to_search, int first, int last){

    int mid = first + (last-first)/2; //same as (right + left)/2 but restricts overflow; 

    //Base Cases
    //BASE CASE 1
    if(first > last){
        printf("%d can't be found\n" , value_to_search);
        return 0;
    }
    //BASE CASE 2
    if(arr[mid] == value_to_search){
        return mid; 
    }
    //RECURSIVE CALL 1
    else if(arr[mid] > value_to_search){
        Binary_Search(arr, value_to_search, first, mid-1);
    }
    //RECURSIVE CALL 2
    else{
        Binary_Search(arr, value_to_search, mid+1, last);
    }


}