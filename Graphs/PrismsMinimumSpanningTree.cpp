#include <iostream>
#include <vector>

using namespace std;

int findkey(vector<int> key, vector<bool> mstset)
{
	int min = INT_MAX, mkey;
	for(int i = 0; i < key.size(); i++)
	{
		if(mstset[i] == false && key[i] < min)
		{
			min = key[i];
			mkey = i;
		}
	}
	return mkey;
}

int main()
{
	int v, e;
	cin >> v >> e;
	vector< vector < pair <int, int> > > adj(v, vector< pair<int, int> > ());

	for(int i = 0; i < e; i ++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		adj[a].push_back(make_pair(c,b));
		adj[b].push_back(make_pair(c,a));
	}

	vector<bool> mstset(v, false);
	vector<int> key(v, INT_MAX);
	vector<int> parent(v, -1);
	key[0] = 0;
	for(int i = 0; i < v; i++)
	{
		
		int src = findkey(key, mstset);
		mstset[src] = true;
		for(int j =0; j < adj[src].size(); j++)
		{
			int dest = adj[src][j].second;
			int weight = adj[src][j].first;
			if(weight < key[dest] && mstset[dest] == false)
			{
				key[dest] = weight;
				parent[dest] = src;
			}
		}
	}
	cout << "Edge   Weight \n";
	for(int i = 1; i < v; i++)
	{
		cout << parent[i] << "->" << i << "   " << key[i] << endl;	
	}
	return 0;
}