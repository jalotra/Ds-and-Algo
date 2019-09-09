// This c is a standalone queue implementation



// WHAT IS A STACK ??
//Ans A stack is a great way of representing data, when only you have to worry about the last data item
// A practical example would be like this 

// Suppose you have to go from n towns to finally reach a place (z).
// THe map looks like this a -> b -> c .... -> z
// Now you are standing on the town z and you have to go back to town (a)
// Town a is the town that originally you came from .

// Now you at each town i you have to know about the previous town or the town (i-1)
// SO this data of all the towns can be reporesented as a stack and you can easily get back to your town (a)
// tASK FINISHED


// NOW CODE STARTS
// one MOre thing the stack works on LIFO or (Last in first out).
// Read about that on internet 


#include "stdio.h"

// Methods devoted to STack
// FUnction declarations
void push(int data);
int pop();
int display_peak();
void display_all();


// DATA VARIABLES AND STACK ARRAY DEFINED
#define MAX_LENGTH 1000                    // The maximum value of items in a stack
int data; 
int Stack_array[MAX_LENGTH];
int top = -1;

int main()
{
	// Driver COde to test the implementation
	push(2);
	push(1);
	push(5);

	display_all();

	pop();
	display_all();
} 

void push(int data)
{
	if(top < MAX_LENGTH)
	{
		top++;
		Stack_array[top] = data;

	}
	else
	{
		printf("%s", "Stack overflowed");
	}
}

int pop()
{	
	int item;
	if(top == -1)
	{
		printf("%s\n", "No data is presnt in the stack");
	}
	else
	{
		item = Stack_array[top];
		top--;
	}
	return item;
}

int display_peak()
{
	if(top != -1)
	{
		printf("%s%d\n", "The value of the peak element is ", Stack_array[top]);
	}
	else
	{
		printf("%s\n", "Stack is empty");
	}
}

void display_all()
{
	if(top != -1)
	{	
		int i = top;
		printf("%s\n", "Printing all the elemets present in the array");
		printf("\n");
		while(i >= 0)
		{
			printf("%d\n", Stack_array[i]);	
			i--;
		}
		
	}
	else
	{
		printf("%s\n", "Stack is empty");
	}
}