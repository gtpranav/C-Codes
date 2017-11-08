#include <iostream>
#include <vector>
#include <queue>
#include <cstdio>
#include <cstdlib>
using namespace std;

void BFSUtil(int i, vector< vector<int> > &adj, vector<bool> &visited)
{
	queue<int> qu;
	qu.push(i);
	visited[i] = true;

	while(!qu.empty())
	{
		i = qu.front();
		cout << i << endl;
		qu.pop();
		
		for(int j = 0; j < adj[i].size(); j++)
		{
			int x = adj[i][j];
			if(visited[x] == false){
				visited[x] = true;
				qu.push(x);
			}
				
		}
	}
}
void BFS(vector< vector<int> > &adj, int v)
{
	vector <bool> visited(4, false);
	BFSUtil(2, adj, visited);
}
void addEdge(vector< vector<int> > &adj, int src, int dest)
{
	adj[src].push_back(dest);
}
int main()
{
	int v = 4;
	vector< vector<int> > adj(4, vector<int> ());

	addEdge(adj,0 , 1);
    addEdge(adj,0 , 2);
    addEdge(adj,1 , 2);
    addEdge(adj,2 , 0);
    addEdge(adj,2 , 3);
    addEdge(adj,3 , 3);
    BFS(adj, 4);
}