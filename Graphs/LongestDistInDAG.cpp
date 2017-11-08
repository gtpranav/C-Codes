#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void DFS(int i, vector< pair <int, int> > adj[], vector<bool> &vis, stack<int> &st)
{
	vis[i] = true;
	for(int j = 0; j < adj[i].size(); j++)
	{
		int x = adj[i][j].second;
		if(vis[x] == false)
			DFS(x, adj, vis, st);
	}
	st.push(i);
}
void LongestPath(int s, vector< pair <int, int> > adj[], vector<int> &dist, int v)
{
	stack<int> st;
	vector<bool> vis(v, false);
	for(int i = 0; i < v; i++)
	{
		if(vis[i] == false)
			DFS(i, adj, vis, st);
	}
	dist[s] = 0;
	
	while(!st.empty())
	{
		int top = st.top();
		st.pop();

		if(dist[top] != INT_MIN)
		{
			for(int i = 0; i < adj[top].size(); i++)
			{
				int x = adj[top][i].second, w = adj[top][i].first;
				if(dist[x] < dist[top] + w)
					dist[x] = dist[top] + w; 
			}
		}
	}	
}
int main()
{
	int v, e;
	cin >> v >> e;
	vector< pair <int, int> > adj[v];
	
	for(int i = 0; i < e; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		adj[a].push_back(make_pair(c,b));
	}

	vector<int> dist(v, INT_MIN);
	
	int s;
	cin >> s;
	LongestPath(s, adj, dist, v);
	for(int i = 0; i < v; i++)
	{
		if(dist[i] == INT_MIN)
			cout << "MIN" << "";
		else
			cout << dist[i] << " ";
	}
	return 0;
}