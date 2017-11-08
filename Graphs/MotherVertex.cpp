#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void DFS(int i, vector< vector<int> > &adj, vector<bool> &vis, int &count)
{
	vis[i] = true;
	for(int j = 0; j < adj[i].size(); j++)
	{
		int x = adj[i][j];
		if(vis[x] == false)
		{
			count++;
			DFS(x, adj, vis, count);
		}
	}
	
}

int MotherVertex(vector< vector<int> > &adj, int v)
{
	vector <bool> vis(v, false);
	//stack<int> st;
	int count;
	for(int i = 0; i < v; i++)
	{
		count = 0;
		if(vis[i] == false)
		{
			count++;
			DFS(i, adj, vis, count);
			if(count == v)
				return i;
			for(int j = 0; j < v; j++)
				vis[j] = false;
		}
		
	}
	
	// int count = 0;
	// while(!st.empty())
	// {
	// 	int x = st.top();
	// 	st.pop();
	// 	for(int i = 0; i < adj[x].size(); i++)
	// 	{
			
	// 	}
	// }
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
	int ans = MotherVertex(adj, v);
	cout << ans;
}