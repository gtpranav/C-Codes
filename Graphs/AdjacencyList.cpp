#include <iostream>

using namespace std;

struct AdjNode
{
	int dest;
	AdjNode *next;
};
struct AdjList
{
	AdjNode *head;
};
struct Graph
{
	int v;
	AdjList* array;	
};

AdjNode* newAdjNode(int dest)
{
	AdjNode* node = new AdjNode;
	node -> dest = dest;
	node -> next = NULL;
	return node;
}
void addedge(Graph* graph, int src, int dest)
{
	AdjNode* new_node = newAdjNode(dest);
	new_node -> next = graph -> array[src].head;
	graph -> array[src].head = new_node;

	//for undirected graph
	new_node = newAdjNode(src);
	new_node -> next = graph -> array[dest].head;
	graph -> array[dest].head = new_node;
}
Graph* CreateGraph(int v)
{
	Graph* graph = new Graph;
	graph -> v = v;
	graph -> array = new AdjList[v];
	for(int i = 0; i < v; i++)
		graph -> array[i].head = NULL;
	
	return graph;
}
void printgraph(Graph* graph)
{
	int v;
	for(int i = 0; i < graph -> v; i++)
	{
		AdjNode* it;
		it = graph -> array[i].head;
		while(it)
		{
			cout << it -> dest << " -> ";
			it = it -> next;
		}
		cout << endl;
	}
}
int main()
{
	int v;
	cin >> v;
	Graph* graph = CreateGraph(v);
	for(int i = 0; i < v; i++)
	{
		int src, dest;
		cin >> src >> dest;
		addedge(graph, src, dest);
	}
	printgraph(graph);
}