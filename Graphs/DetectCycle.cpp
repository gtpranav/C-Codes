#include <iostream>
#include <vector>

using namespace std;


bool DFS(int i, vector< vector <int> > &adj, vector<bool> &vis, vector<bool> &stack)
{
	if(vis[i] == false)
	{
		vis[i] = true;
		stack[i] = true;

		for(int j = 0; j < adj[i].size(); j++)
		{
			int x = adj[i][j];
			if(!vis[x] && DFS(x, adj, vis, stack))
				return true;
			else if(stack[x] == false)
				return true;	
		}
	}
	stack[i] = false;
	return false;
}
bool Cycle(vector< vector <int> > &adj, int v)
{
	vector<bool> vis(v, false);
	vector<bool> stack(v, false);

	for(int i = 0; i < v; i++)
	{
		if(DFS(i, adj, vis, stack))
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
	if(Cycle(adj, v))
		cout << "Yes cycle exist";
	else
		cout << "Cycle does not exist";
}