#include <iostream>
#include <vector>

using namespace std;


void Topological(vector< vector <int> > adj, vector<bool> &vis, vector<int> &indegree, vector<int> &res, int v)
{
	bool flag = false;
	for(int i = 0; i < v; i++)
	{
		if(indegree[i] == 0 && !vis[i])
		{
			for(int j = 0; j < adj[i].size(); j++)
				indegree[adj[i][j]]--;

			vis[i] = true;
			res.push_back(i);
			Topological(adj, vis, indegree, res, v);

			vis[i] = false;
			res.erase(res.end()-1);
			for(int j = 0; j < adj[i].size(); j++)
			indegree[adj[i][j]]++;
	
			flag = true;
		}
	}
	if(!flag)
	{
		for(int j = 0; j < res.size(); j++)
			cout << res[j] << " ";
		cout << endl;
	}
}
int main()
{
	int v, e;
	cin >> v >> e;
	vector< vector <int> > adj(v, vector<int> ());
	vector<int> indegree(v);
	for(int i = 0; i < e; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		indegree[b]++;
	}
	vector<bool> vis(v, false);
	vector<int> res;
	
	Topological(adj, vis, indegree, res, v);
	return 0;
}