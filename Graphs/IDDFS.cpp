#include <iostream>
#include <vector>

using namespace std;


bool DFS(vector< vector <int> > &adj, int src, int target, int limit)
{
	if(src == target)
		return true;
	if(limit <= 0)
		return false;
	for(int j = 0; j < adj[src].size(); j++)
	{
		int x = adj[src][j];
		if(DFS(adj, x, target, limit - 1))
			return true;
	}
	return false;
}

bool IDDFS(vector< vector <int> > &adj, int src, int target, int depth)
{
	for(int i = 0; i <= depth; i++)
	{
		if(DFS(adj, src, target, i))
			return true;
	}
	return false;
}
int main()
{
	
	int v, e;
	cin >> v >> e;
	vector< vector <int> > adj(v, vector<int> ());
	for(int i = 0; i < e; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
	}
	int src, target, max_depth;
	cin >> src >> target >> max_depth;

	if(IDDFS(adj, src, target, max_depth))
		cout << "Yes node can be reached";
	else
		cout << "Node can't be reached";
}