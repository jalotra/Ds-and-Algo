// Header File


#ifndef Singly_Linked_List
#define Singly_Linked_List
#include <bits/stdc++.h>                                             // C++ Header File
using namespace std;

// Struct Node definition
typedef struct {
	int data;
	struct Node* link;
}Node;

// Function Declarations
struct Node* create_list(struct Node *start);                     // Creates a new sll with a Null Pointer
void display(struct Node *start);									// Displays the data item at a node
void count(struct Node *start);																
void search(struct Node *start, int data);
struct Node* insertAtLast(struct Node* start, int data);
struct Node* insertAtFirst(struct Node* start, int data);
struct Node* insertAfter(struct Node* start , int item , int data);
struct Node* insertBefore(struct Node* start, int item, int data);
struct Node* insertAtPos(struct Node* start, int data, int pos);
struct Node* deleteNode(struct Node* start, int data);
struct Node* reverse(struct Node* start);


#endif