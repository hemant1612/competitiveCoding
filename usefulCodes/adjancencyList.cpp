#include <iostream>
using namespace std;

//this represents the adjacency list node
struct AdjListNode
{
	int dest;
	struct AdjListNode* next;
};

//this represents the adjacency list
struct AdjList
{
	struct AdjListNode *head; //pointer to head node of list
};

//this will represent the graph.
//graph is an array of adjacency 
//size of the array is V(numer of vertices in graph)
struct Graph
{
	int V;
	struct AdjList* array;
};

//this function creates a new adjacency list node
struct AdjListNode* newAdjListNode(int dest)
{
	struct AdjListNode* newNode=(struct AdjListNode*) malloc(sizeof(struct AdjListNode));
	newNode->dest=dest;
	newNode->next=NULL;
	return newNode;
};

//creates a graph of V vertices
struct Graph* createGraph(int V)
{
	struct Graph* graph=(struct Graph*) malloc(sizeof(struct Graph));
	graph->V=V;

	//create an array of adjacency lists. Size of array will be V
	graph->array=(struct AdjList*) malloc(V * sizeof(struct AdjList));

	//inititalize each adjacency list as empty by making head an NULL
	for(int i=0;i<V;i++)
	{
		graph->array[i].head=NULL;
	}
	return graph;
}

//this adds an edge to an undirected graph
void addEdge(struct Graph* graph,int src,int dest)
{
	//Add an edge from src to dest. A new node is added to the adjacency list of src. The node is added at the begining.
	struct AdjListNode* newNode=newAdjListNode(dest);
	newNode->next=graph->array[src].head;
	graph->array[src].head=newNode;

	//graph is undirected so another edge is added from dest to src
	newNode = newAdjListNode(src);
	newNode->next=graph->array[dest].head;
	graph->array[dest].head=newNode;
}

//this function prints the graph
void printGraph(struct Graph* graph)
{
	for(int v=0;v<graph->V;v++)
	{
		struct AdjListNode* pCrawl=graph->array[v].head;
		cout<<"Adjacency list of vertex "<<v<<" head"<<endl;
		while(pCrawl)
		{
			cout<<"-> "<<pCrawl->dest;
			pCrawl=pCrawl->next;
		}
		cout<<endl;
	}
}

//main function
int main()
{
	int V=5;
	struct Graph* graph=createGraph(V);
	addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
    printGraph(graph);
    return 0;
}