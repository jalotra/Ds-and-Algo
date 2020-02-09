// BFS IS DONE WITH THE HELP OF A QUEUE
// LETS IMPORT THE USEFUL HEADER FILES
#include <iostream>
#include <queue>
using namespace std;

typedef enum 
{
    ready, waiting, visited
}State;

// THE CREATE GRAPH METHOD TAKES IN A GRAPH AT RUNTIME AND RETURNS THE ADJENCY MATRIX
int ** create_graph();

// BFS_traversal()
// BFS traversal takes in the adjency matrix and print all the vertices in the 
// BFS order
void BFS_traversal(int **arr);


int main()
{
    int ** adj_matrix = create_graph();
    BFS_traversal(adj_matrix);


    return 0;
}

// Define the Bfs Algorithm
// THE ALGO IS QUITE SIMPLE 
// LETS LOOK AT THE STEPS 
// 1. GO TO THE VERTEX i in the adj_matrix
// 2. PUSH ALL THE NEIGHBOURING VERTICES OF Vertex i in a queue
// 3. MAKE THE STATE OF THIS VERTEX as waiting
// 4. POP out of the queue and recurse
// 5. TILL THE QUEUE IS EMPTY
void BFS_traversal(int **arr)
{
    // Lets create a queue
    
}
