// In this question we had 4 sub-questions and we just have to print the output if no error is present
// OR spot the error



// I am writing those 4 parts in 4 different functions

#include "stdio.h"


// FUnction Declarations
void fun(int *, int *);
void question2(const int);
int sumdiag(int);
void printarray();



int main(){
	// FOR function Fun
	int i = 5,j=2;
	fun(&i,&j);
	// Works fine 
	// output : 25 4
	//If you have a difficulty learn about operator precendence 

	//For Function question2
	question2(3);
	// Prints 30 3*3*3+3

	//For FUnction sumdiag()
	int a;
	a = sumdiag(123);
	printf("%d\n", a);


	//FOr FUnction 4
	printarray();

	// Output will be 
	// Null Value 
	// 1
	// 2
	// 3
	// 4
	// Because first ++i; is determined and its copied to the location arr[i];
}


// FUNCTIONS DEFINITIONS
// Sub Question 1
void fun(int *i , int *j){
	*i = *i**i;
	*j = *j**j;
	printf("%d %d\n",*i, *j);
}

// Sub-Question 2
void question2(int i =3)
{
	int *j = &i;
	printf("%d\n", i**j*i+*j);
}
// Sub Question 3
int sumdiag(int n)
{
	int s = 0,d;
	if(n!=0)
	{
		d = d%10;
		n =n/10;
		s = d+ sumdiag(n);        // rECURSIVE cALL TO SUMDIAG(N)
		printf("%d\n", s);
	}
	else
	{
		return 0;
	}
	return s;
}

// Sub Question 4
void printarray()
{
	int arr[5], i =0;
	while(i<5)
	{
		arr[i] = ++i;
		// printf("%d\n", i);
	}
	for(int i=0; i <5;i++)
		{
			printf("%d\n", arr[i]);
		}
}