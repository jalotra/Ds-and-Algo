// CODE FOR THE FAMOUS DIJKSTRAS ALGORITHM
// HOPE YOU WILL LIKE IT


// THE ALGORITHM IS QUITE NOOB
// WRITING THIS ALGORITHM DUE TO ITS USE IN THE ROUTING ALGORITHMS
// ALGORITHM EXPLAINATION :

//Include the header files
#include <bits/stdc++.h>
#include <string.h>
#include "Dijkstras-Algo.hpp"
// using namespace std;

// const unsigned int MAX_NODES = 20;
const int INF = 10e+8;


// CReate a ADJENCY MATRIX HAVING THE PATH LENGTHS IN IT
// n denotes the number of nodes currently in the network
int path_lengths[20][20];
state states[20];

// enum {permanent, tentative} label;


void do_all_nodes(int k, int n)
{
	for(int i = 0; i < n ;i++)
	{
		// CHECK IF THE path_lengths B/W NODE k and i is non-negative
		// ALSO if Node i is labelled TENTAVIVE
		if(states[i].label == state::tentative && path_lengths[i][k] > 0)
		{
			if(states[i].length > path_lengths[i][k] + states[k].length)
			{
				states[i].predecessor = k;
				states[i].length = path_lengths[i][k] + states[k].length;
			}
		}
		
	}
}

void shortest_path_finder(int s, int t, int n, int path[])
{

	int i,j,min;
	struct state *p;

	// LETS MAKE ALL THE NODES TENTAIVE 
	// ALSO MAKE THE LENGTS INFINITE 
	// AND THEIR PREDESSECOR AS -1
	for(p = &states[0]; p < &states[n]; p++)
	{
		p->predecessor = -1;
		p->length = INF;
		p->label = state::tentative;
	}

	// NOW THE MAIN ALGORITHM STARTS
	// I HAVE THE TERMINAL OR THE FINAL NODE THAT I HAVE TO REACH TO
	// THIS NODE IS NODE t -> REPRESENTED BY int t
	// THE NODE THAT IS THE STARTING NODE IS THE NODE S -> REPRESENTED BY int s

	// I AM GOING FROM THE TERMINAL NODE ALL THE WAY TO THE FIRST NODE
	// LETS DO THIS
	// MARK T as NODE THAT HAS BEEN SEEN 
	states[t].length = 0;
	states[t].label = state::permanent;

	int k = t;
	do
	{
		do_all_nodes(k, n);

		// FIND THE TENTAIVELY WRITTEN LABEL WITH THE SMALLEST LABEL
		k = 0; min = INF;
		for(int i = 0; i < n; i++)
		{
			if(states[i].label == state::tentative && states[i].length < INF)
			{
				min = states[i].label;
				k = i;
			}
		}

		states[k].label = state::permanent;
	}while(k != s);



	// THE ALGORITHM IS DONE
	// NEXT IS TO COPY THE PATH INTO A ARRAY PATH
	// Start with the starting Point
	   k = s;
		for(int i = 0 ; i < n ;i++)
		{
			// if(k >= 0)
			// {
				path[i] = k;
				k = states[k].predecessor;
			// }
			
		}
	

	// i = 0; k = s;
	// do{
	// 	path[i++] = k;
	// 	k = states[k].predecessor;
	// }while(k >= 0);

}


int main()
{
	// LETS CHECK-THIS OUT 
	// LETS CHECK WITH THE EXAMPEL GIVEN IN THE TANNENBAUM
	// PAGE 366

	// CHECK THE EXAMPLE OUT
	// HERE WE HAVE 8 DIFFERENT NODES
	// A, B, C, D, E, F, G, H
	// 0, 1, 2, 3, 4, 5, 6, 7

	// PATH LENGTHS LOOK LIKE THIS
	// 0 1 2
	// 0 6 6
	// 1 4 2
	// 1 2 7
	// 6 4 1
	// 6 7 4
	// 4 5 2
	// 2 5 3
	// 2 3 3
	// 7 5 2
	// 7 3 2
	// memset(path_lengths, 0, sizeof(path_lengths));

	int n =8;
	
		std::vector<int>first = {0 ,0,1,1,6,6,4,2,2,7,7};
		std::vector<int>second = {1,6,4,2,4,7,5,5,3,5,3};
		std::vector <int> value = {2,6,2,7,1,4,2,3,3,2,2};
		
		for(int i = 0; i < first.size(); i++)
		{
			path_lengths[first[i]][second[i]] = value[i];
			path_lengths[second[i]][first[i]] = value[i];	
		}
		

	// LETS RUN THE ALGORITHM ON THE GRAPH COLLECTED
	int path[n];
	int starting_position = 0;
	int ending_position = 3;
	shortest_path_finder(starting_position, ending_position, n, path);

	// LETS PRINT THE PATH OUT
	int i = 0;
	while(i < n)
	{
		// if(path[i] > 0)
		// {
			std::cout << path[i] << " " ;
	
		// }
		i++;
	}



	return 0;


}
