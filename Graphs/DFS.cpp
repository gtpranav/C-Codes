#include <iostream>
#include <vector>

using namespace std;


void addEdge(vector< vector<int> >adj, int src, int dest)
{
	adj[src].push_back(dest);

	adj[dest].push_back(src);
}
void DFSUtil(int i, vector< vector<int> >adj, vector<bool> &visited)
{
	visited[i] = true;
	cout << i << " ";
	for(int j = 0; j < adj[i].size(); j++)
	{
		if(visited[j] == false)
			DFSUtil(j, adj, visited);
	}
}
void DFS(vector< vector<int> >adj, int v)
{
	vector<bool> visited(v, false);

	// visited.assign(v, false);

	for(int i = 0; i < v; i++)
	{
		if(visited[i] == false)
		{
			DFSUtil(i, adj, visited);
		}
	}
}
int main()
{
	int v = 5;
	vector< vector<int> >adj(v, vector<int>());
	// adj.assign(5, vector<int>());
	//cin >> v;
	addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    DFS(adj, 5);

}