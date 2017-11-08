#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int main()
{
	int v, e;
	cin >> v >> e;
	vector < pair< int ,pair <int, int> > > edge;
	for(int i = 0; i < e; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		edge.push_back(make_pair(c, make_pair(a,b)));
	}
	int src;
	cin >> src;
	vector<int> dist(v, INT_MAX);
	dist[src] = 0;
	for(int i = 0; i < v - 1; i++)
	{
		//BFS(adj, src, dis);
		for(int j = 0; j < e; j++)
		{
			int u = edge[j].second.first;
			int v = edge[j].second.second;
			int w = edge[j].first;

			if(dist[u] != INT_MAX && dist[v] > dist[u] + w)
			{
				dist[v] = dist[u] + w;
			}
		}
	}
	bool iscycle = false;
	for(int j = 0; j < e; j++)
	{

		int u = edge[j].second.first;
		int v = edge[j].second.second;
		int w = edge[j].first;

		if(dist[u] != INT_MAX && dist[v] > dist[u] + w)
		{
			cout << "negative cycle\n";
			iscycle = true;
			break;
		}
	}

	for(int i = 0; i < v; i++)
	{
		cout << dist[i] << " ";
	}

	return 0;
}