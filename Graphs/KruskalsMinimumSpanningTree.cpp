#include <iostream>
#include <vector>
#include <algorithm>


int find(vector<int> &parent, int x)
{
	if(parent[x] = -1)
		return x;
	return find(parent, parent[x]);
}

void union(vector<int> &parent, int src, int dest)
{
	int xset = find(parent, src);
	int yset = find(parent, dest);
	parent[yset] = xset;
}
int main()
{
	int v, e;
	cin >> v >> e;

	vector< pair<int, pair<int, int> > > edges;
	for(int i = 0; i < e; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		edges.push_back(make_pair(c, make_pair(a,b)));
	}
	sort(edges.begin(), edges.end());
	for(int i = 0; i < e; i++)
	{
		cout << edges[i].first << " " << edges[i].second.first << " "<< edges[i].second.second << endl;
	}
	int i = 0, j = 0;
	vector<int> parent(v, -1);
	vector<pair<int, pair<int, int> > > res;
	while(i < v - 1)
	{
		int src = edges[j].second.first;
		int dest = edges[j].second.second;
		int weit = edges[j].first;
		j++;

		src = find(parent, src);
		dest = find(parent, dest);

		if(src != dest)
		{
			res.push_back(make_pair(weit, make_pair(src,dest)));
			union(parent, src, dest);
			i++;
		}
	}

	for(int k = 0; k < i; k++)
	{
		cout << "weight -> " << res[k].first << ", src -> " << res[k]second.first << ", dest -> " << res[k].second.second << endl;
	}

	return 0;
}