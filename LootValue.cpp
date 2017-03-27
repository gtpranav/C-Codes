#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool sortinrev(const pair<int,int> &v , const pair<int,int> &wi)
{
	return (v.first > wi.first);
}
int main()
{
	int n , w;
	cin >> n >> w;
	int v[n] , wi[n];
	vector<pair<int , int>>k;
	for(int i = 0; i < n; i++)
	{
		cin >> v[i] >> wi[i];
	}
	for(int i = 0; i < n; i++)
	{
		k.push_back(make_pair(v[i] , wi[i]));
	}
	sort(v.begin() , wi.end() , sortinrev);
	int i = 0 , sum = 0 , p = 0 , s = 0;

	while(s < w)
	{
		if( w - p < k[i].second )
		{
			i++;
		}
		sum = sum + k[i].first;
		p = p + k[i].second;
		
	}

}