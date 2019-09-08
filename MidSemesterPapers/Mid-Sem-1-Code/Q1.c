// Here the question was to implement a Binary Search Algorithm on a string that is sorted 

// Some properties of a sorted array
// In ASCII standard we can only assign 255 char types to all the possible chars in the world. That is only 8 bits of data can 
// be assigned to any symbol/char etc.
// That's why a char in C can take only 1 byte of space.


/*INPUT :: 
STRING S= 'abbcdeeefz'
CHAR N = 'e' // Suppose   
*/

// How to think about an algorithm?
// 1. You see that since all the chars of the same type will be clubbed together in the string.
// 2. You can just apply linear search ?? But why it would be possible if the string was not sorted
// 3. Then which algo 
// 4. Here comes Binary Search

// CODE STARTS

#include "stdio.h"
#include "string.h"
// COunt variable initialixation
int count = 0;

int BinarySearchString(char s[], char *n, int first, int last){
	// Count Variable Declaration
	// Calculate mid element
	if(first  <= last)
	{
		int mid = first + (last-first)/2;
	// Base Case
		if(s[mid] == *n) count += 1;

		// Recursive Call greater than mid 
		if(s[mid] >= *n) BinarySearchString(s, n, first  , mid -1);
		// Recursive Call less than mid 
		if(s[mid] <= *n) BinarySearchString(s, n, mid+1, last );
	}
	

	return count;
}

int main(){

	char name[] = "aabbbccdddeeefffxxxyyyzzzzzzzzzzzzzzzzzz";
	char char_to_search = 'd';
	// printf("%d\n", sizeof(name));
	int result = BinarySearchString(name, &char_to_search, 0, sizeof(name));
	// printf("%d\n", value); 
	printf(" The number of times %c occured in the given string %d times", char_to_search, result);



	return 0;
}