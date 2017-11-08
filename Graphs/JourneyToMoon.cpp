#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void DFS(int i, int &count,vector< vector<int> > &adj,vector<bool> &visited)
{
    visited[i] = true;
    for(int j = 0; j < adj[i].size(); j++)
    {
        int x = adj[i][j];
        if(visited[x] == false)
        {
            count++;
            DFS(x, count, adj, visited);
        }
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int v, e;
    cin >> v >> e;
    vector< vector<int> > adj(v, vector<int> ());
    vector<bool> visited(v,false);
    vector<int> pair;
    for(int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 0; i < v; i++)
    {
        int count = 0;
        if(visited[i] == false)
        {
            count++;
            DFS(i, count, adj, visited);
            pair.push_back(count);
        }
    }
    
    long ans = 0;
    long n = v;
    for(auto e : pair){
        ans += e * (n -= e);
    }
    
    cout << ans;
    
    return 0;
}
