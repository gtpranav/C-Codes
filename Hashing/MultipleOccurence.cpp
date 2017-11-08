#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n], brr[n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	map<int,int> m;
	
	for(int i = 0; i < n; i++)
	{
		if(m[arr[i]])
			m[arr[i]] += 1;
		else
			m[arr[i]] = 1;
	}
	int j = 0;
	for(int i = 0; i < n; i++)
	{
		while(m[arr[i]] > 0)
		{
			brr[j] = arr[i];
			m[arr[i]] -= 1;
			j++;
		}
		m[arr[i]] = 0;

	}
	for(int i = 0; i < n; i++)
	{
		cout << brr[i] << " ";
	}
}