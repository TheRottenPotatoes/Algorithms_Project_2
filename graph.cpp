#include <stdio.h>
#include <stdlib.h>

// struct to represent an adjacency list node
struct AdjListNode
{
	int dest;
	struct AdjListNode* next;
};

// struct to represent an adjacency list
struct AdjList
{
  // pointer to head node of list
	struct AdjListNode *head;
};

// struct to represent a graph. A graph is an array of adjacency lists.
// Size of array will be N (number of Nodes in graph)
struct Graph
{
	int N;
	struct AdjList* array;
};

// function to create a new adjacency list node
struct AdjListNode* newAdjListNode(int dest)
{
	struct AdjListNode* newNode =
			(struct AdjListNode*) malloc(sizeof(struct AdjListNode));
	newNode->dest = dest;
	newNode->next = NULL;
	return newNode;
}

// function that creates a graph of N Nodes
struct Graph* createGraph(int N)
{
	struct Graph* graph = (struct Graph*) malloc(sizeof(struct Graph));
	graph->N = N;

	// Create an array of adjacency lists. Size of array will be N
	graph->array = (struct AdjList*) malloc(N * sizeof(struct AdjList));

	// Initialize each adjacency list as empty by making head as NULL
	int i;
	for (i = 0; i < N; ++i)
		graph->array[i].head = NULL;

	return graph;
}

// Adds edge to an undirected graph
void addEdge(struct Graph* graph, int src, int dest)
{
	// Add edge from src to dest. A new node is added to the adjacency
	// list of src. The node is added at the begining
	struct AdjListNode* newNode = newAdjListNode(dest);
	newNode->next = graph->array[src].head;
	graph->array[src].head = newNode;

	// Since graph is undirected, add an edge from dest to src also
	newNode = newAdjListNode(src);
	newNode->next = graph->array[dest].head;
	graph->array[dest].head = newNode;
}

// A utility function to print the adjacenncy list representation of graph
void printGraph(struct Graph* graph)
{
	int N;
	for (N = 0; N < graph->N; ++N)
	{
		struct AdjListNode* pCrawl = graph->array[N].head;
		printf("\n Adjacency list of Node %d\n head ", N);
		while (pCrawl)
		{
			printf("-> %d", pCrawl->dest);
			pCrawl = pCrawl->next;
		}
		printf("\n");
	}
}

// Test
int main()
{
	// create the graph
	int N = 5;
	struct Graph* graph = createGraph(N);
	addEdge(graph, 0, 1);
	addEdge(graph, 0, 4);
	addEdge(graph, 1, 2);
	addEdge(graph, 1, 3);
	addEdge(graph, 1, 4);
	addEdge(graph, 2, 3);
	addEdge(graph, 3, 4);

	// print the adjacency list representation of the above graph
	printGraph(graph);

	return 0;
}
