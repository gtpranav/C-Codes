#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int j = 0; j < t; j++)
	{
		int n;
		
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < n; i++)
		{
			cout << arr[i];
		}
	}
}