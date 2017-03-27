#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n] , b[n];

	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " " ;
	}
	for(int i = 0; i < n; i++)
	{
		cout << endl;
		cout << b[i] << " ";
	}
	sort(a.begin() , a.end());
	sort(b.begin() , b.end());
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " " ;
	}
	for(int i = 0; i < n; i++)
	{
		cout << endl;
		cout << b[i] << " ";
	}
}