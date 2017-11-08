#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector< vector<int> > adj;
vector< bool > vis;
long count;

void DFS(int i)
{
	vis[i] = true;
	for(int j = 0; j < adj[i].size(); j++)
	{
		if(vis[adj[i][j]] == false)
		{
            count++;
			DFS(adj[i][j]);
		}
	}
}
int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		int n, m;
        long clib, croad;
		cin >> n >> m >> clib >> croad;
		if(clib <= croad)
		{
            long a = n*clib;
			cout << a << endl;
			continue;
		}
		adj.assign(n+1, vector<int> ());
		vis.assign(n+1, false);

		for(int i = 0; i < m; i++)
		{
			int a, b;
            cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		
		long cost = 0;
		for(int i = 1; i <= n; i++)
		{
            count = 0;
			if(vis[i] == false)
			{
                count++;
				DFS(i);
				cost = cost + clib + (count - 1)*croad;	
			}
			vis.clear();
			
			// cout << count << endl;
            
		}
		cout << cost << endl;
		
	}
	
}