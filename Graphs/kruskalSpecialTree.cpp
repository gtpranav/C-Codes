#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii > node;

vector< pair <int, pair<int, int> > > edge;
vector<int> parent;
vector<bool> vis;
vector< pair <int, pair<int, int> > > res;
vector<int> rank_;

bool _comp(node a, node b)
{
    if(a.first == b.first)
            return((a.second.first + a.second.second) <= (b.second.first + b.second.second));
    return (a.first > b.first);
}

int find(int x)
{
    if(parent[x] != x)
        parent[x] = find(parent[x]);
    
    return parent[x];
}

void union_(int x, int y)
{
    int xset = find(x);
    int yset = find(y);
    if(rank_[xset] > rank_[yset])
        parent[yset] = xset;
    else if(rank_[yset] > rank_[xset])
        parent[xset] = yset;
    else
    {
        parent[yset] = xset;
        rank_[xset]++;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    edge.clear();
    parent.clear();
    vis.clear();
    res.clear();
    int v, e;
    cin >> v >> e;
    
    for(int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge.push_back(make_pair(c, make_pair(a,b)));
    }
    sort(edge.begin(), edge.end(), _comp);
    
    int nodes = 0, i = 0, ans = 0;
    //vector<bool> vis(v, false);
    vis.assign(v, false);
        
    //vector<int> parent(v, -1);
    for(int i = 0; i < v; i++)
    {
        parent[i] = i;
        rank_[i] = 0;
    }

    //res.assign(v-1, pair<int, pair<int, int> >);
    while(i < e)
    {
        int src = edge[i].second.first;
        int dest = edge[i].second.second;
        int weight = edge[i].first;
        i++;

        int x = find(src);
        int y = find(dest);
        if(x != y)
        {
            res.push_back(make_pair(weight, make_pair(src, dest))); 
            union_(x, y);
            nodes++;
        }
        if(nodes == v-1)
            break;
    }
    cout << ans;
    return 0;
}
