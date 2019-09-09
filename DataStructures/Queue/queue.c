// On the other hand the queue is based on FIFO

// The queue is also a very useful data-structure


// THe methods that queue ADT provides us are
//1. insert
//2. delete_front 
//3. display
//4. display_peak


#include "stdio.h"

//CODE STARTS
// Function Declartions

void insert(int data);                                // inserts data at the end
int delete_front();                                   // pops out the first data item in the list
void display_front();                                 // displays the item present at the front-end
void display_all();                              // displays all the element from front to end


// IMPLEMENTING QUEUE WITH THE HELP OF ARRAY
// Declaring useful varibales

#define MAX_LENGTH 1000                    // total elements that a queue can hold
#define GARBAGE_VALUE 68892
int front = -1;
int end = -1; 
int Queue_Array[MAX_LENGTH];

int main()
{
	// Implements the driver code
	insert(5);
	insert(1);
	insert(2);
	insert(10);

	display_all();

	delete_front();
	display_all();
}


// Function Definitions

void insert(int data)
{
	if(end < MAX_LENGTH)
	{
		if(front == -1)                     // Means that the queue is empty
	{
		front++;
		end++;	
		Queue_Array[end] = data;

	}
		else{
			end++;
			Queue_Array[end] = data;

		}
	}
	else
	{
		printf("%s", "Queue Overflowed");
	}
	
}

// delete_front() function delete_fronts the element present at the front location that is at the zeroth index
// And then shifts all the remianing queue to the left by one unit 
// And also decrements the end variable 	
int delete_front()                                  						
{	
	if(front != -1)
	{
		int item_to_return;
		item_to_return = Queue_Array[front];
		if(end != 0)                    // Only one element is not present in the list
		{	
			for(int i = front+1 ; i <= end; i++)
			{
				Queue_Array[i -1] = Queue_Array[i];
			}
			// Enter the garbage value in the loaction Queue[top]
			Queue_Array[end] = GARBAGE_VALUE;
			end--;
		}
		else{
			front--;
			end--;
		}
	}
	else
	{
		printf("%s\n", "Queue is empty");
	}
}

void display_front()
{
	printf("%s%d\n","The value that is present at the front location is ", Queue_Array[front]);
}

void display_all()
{
	printf("%s\n", "Printing all the elements present in the Queue" );
	for(int i = front ; i <= end; i++)
	{
		printf("%d\n", Queue_Array[i]);
	}
}