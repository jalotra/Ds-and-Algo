#include "stdio.h"



int linear_search(int arr[], int n, int value_to_search){
    for (int i = 0; i < n; i++){
        if(arr[i] == value_to_search){
            return i;                          // The ith element contains the element
        }
    }
    // printf("%d is not present in this array" , value_to_search);
    return 0;
}

int main(){

    int arr[6] = {1 , 5 , 9 , 6 , 56 , 68 };
    int n = sizeof(arr)/sizeof(arr[0]);

    int value_to_search = 6;

    // printf("%d", linear_search(arr, n, value_to_search));
    if(linear_search(arr, n, value_to_search) == 0){
        printf("%d can't be found in the array\n", value_to_search);
    }
    else{
        printf("Element found at  %drd loaction\n", linear_search(arr, n, value_to_search));
    }



    return 0;

}
