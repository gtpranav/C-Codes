#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	vector<int> temp(n);
	map<int, int> m;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int j = 0;
	for(int i = 0; i < n; i++)
	{
		temp[j] = arr[i];
		j++;
	}
	sort(temp.begin(), temp.end());
	for(int i = 0; i < n; i++)
	{
		m[temp[i]] = i; 
	}
	for(int i = 0; i < n; i++)
	{
		cout << m[arr[i]] << " ";
	}
	return 0;
}