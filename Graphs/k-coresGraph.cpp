#include <iostream>
#include <vector>

using namespace std;

bool DFS(int i, vector<vector<int> >&adj, vector<bool>&vis, vector<int>&degree, int k)
{
	vis[i] = true;
	for(int j = 0; j < adj[i].size(); j++)
	{
		if(degree[i] < k)
			degree[adj[i][j]]-- ;
		
		if(!vis[adj[i][j]])
		{
			if(DFS(adj[i][j], adj, vis, degree, k));
				degree[i]--;
		}
				
	}
	return (degree[i] < k);
}
int main()
{
	int v, e, k;
	cin >> v >> e >> k;

	vector< vector< int > > adj(v, vector<int> ());
	for(int i = 0; i < e; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	vector<bool> vis(v, false);
	vector<int> degree(v);
	int mindeg = INT_MAX;
	int start;
	for(int i = 0; i < v; i++)
	{
		degree[i] = adj[i].size();
		if(degree[i] < mindeg)
		{
			mindeg = degree[i];
			start = i;
		}
	}
	DFS(start, adj, vis, degree, k);
	for(int i = 0; i < v; i++)
	{
		if(vis[i] == false)
			DFS(i, adj, vis, degree, k);
	}

	for(int i = 0; i < v; i++)
	{
		if(degree[i] >= k)
		{
			cout << "[" << i << "]";
			for(int j = 0; j < adj[i].size(); j++)
			{
				int x = adj[i][j];
				if(degree[x] >= k)
					cout << " -> " << x; 
			}
			cout <<endl;
		}
	}
	return 0;
}