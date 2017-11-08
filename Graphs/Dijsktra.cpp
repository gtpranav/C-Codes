#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int main()
{
	int v, e;
	cin >> v >> e;
	vector< vector < pair <int, int> > > adj(v, vector<pair<int,int> > ());
	for(int i = 0; i < e; i++)
	{
		int a, b, c;
		cin >>a >> b >> c;
		adj[a].push_back(make_pair(c,b));
		adj[b].push_back(make_pair(c,a));
	}
	vector<int> res(v);
	vector<bool> vis(v, false);
	vector<int> dist(v, INT_MAX);

	//int i = 0;
	dist[0] = 0;
	priority_queue<pair<int,int> , vector<pair<int, int> > , greater<pair<int, int> > > pq;
	pq.push(make_pair(0, 0));
	
	while(!pq.empty())
	{
		int u = pq.top();
		pq.pop();
		for(int i = 0;  i < adj[u].size(); i++)
		{
			int de = adj[u][i].second;
			int w = adj[u][i].first;
			if(dist[de] > dist[u] + w)
			{
				dist[de] = dist[u] + w;
				pq.push(make_pair(dist[de], de));
			}
		}	
	}
	cout << "Index  Weight\n";
	for(int j = 0; j <v; j++)
	{
		cout << j << "      " << dist[j] << endl;
	}
	return 0;
}