#include <iostream>
#include "singly_linked_list.hpp"

// What is a singly linked list 
// A singly list has a data item and a pointer to the next node 

// HOW CAN A CODER DEFINE A SINGLY LINKED LIST:
// We can define singly list using a referential structure.
// A referential struct is the one that points to itself or that points to the struct of the same type

/* struct Node{
	int data;                       // Data Member of the struct
	struct Node *link;				// POinter to the next Node // Note the pointer type has to same as that of the ADT
	}
*/

// What are the different functionalities that a singly linked list provides??
/*Here are some of them
1. Traversal of a linked list
2. Searching of a linked list
3. Insertion of a linked list
4. Deletion of a linked list
5. Creation of a linked list
6. Reversal of a linked list
*/

// I have declared all the main functions in singly_linked_list.hpp 
// Have a look there

int main(){
	// COntains Driver COde

}


// LETS DEFINE ALL FUNCTIONS DEFINED IN singly_linked_list.hpp
// 1. struct Node* create_list(struct Node* start)

struct Node* create_list(struct Node* start){
	int data, number_of_nodes;
	start = NULL;
	start = insertAtFirst(start, data); 
}

// Inserts a node at the first position
struct Node* insertAtFirst(struct Node* start, int data)
{
	// node = malloc(Node, sizeof(Node*));
	// node->data = data;
	// node->link = start;
	Node *tmp;
	tmp = (Node *)malloc(sizeof(Node));
	tmp -> data= data;
	tmp -> link = start;
	start = temp;

	return start;

}

struct Node* insertAfter(struct Node* start , int item , int data)
{
	while(start->link != NULL)
	{
		if (start -> data == item)
		{
			break;
		}
		else
		{
			start = start->link;
		}
	}

	// Now start contains the node that contains the data (item)
	// NOw create a new temp node
	Node *tmp;
	tmp = (Node *)malloc(sizeof(Node));
	tmp->data = data;

	// Next is to change the tmp variable link to the start link 
	tmp-> link = start->link;

	// Change the link of the start to the tmp NOde
	start-> link = &tmp;


	// FInally return start
	return start;

}

