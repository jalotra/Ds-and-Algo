


// HERE WE APPLY A NAIVE BRUTE FORCE METHOD TO FIND THE PATTERN STRING IN A TEXT STRING 

// LET T = "CTGAGCAGCATCAGCACATGGCGCGAT"
// LET P = "CAT"


// CODE STARTS

#include "stdio.h"

int BruteForce(char T[], char P[], int n, int m)
{
	for(int i = 0; i < n-m ;i++){
		for(int j =0; j < m; j++){
			if(T[i+j] == P[j])
			{
				if(j == m-1) return i;            // Return the first index if P[] is present in T[]
			} 
		}
	}
	return 0;
} 

int main(){
	char T[] = "CTGAGCAGCATCAGCACATGGCGCGAT";
	char P[] =  "CAT";
	int n = sizeof(T) -1; //4
	int m = sizeof(P) -1 ; //1
	// printf("%d%d",n,m );
	printf("%d\n",BruteForce(T, P, n , m));
}