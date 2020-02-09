#ifndef _DIJKSTRAS_H
#define _DIJKSTRAS_H



struct state
{
	int predecessor;
	int length;
	enum {permanent, tentative} label;
};


// struct Node
// {
// 	int val;
// 	struct *Node next = NULL;
// }


#endif