#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n; i++)
		cin >> arr[i];
	int sum; 
	cin >> sum;

	bool subset[2][sum+1];

	for(int i = 0; i <= n; i++)
	{
		for(int j = 0; j <= sum; j++)
		{
			if(j == 0)
				subset[i % 2][j] = true;
			else if(i == 0)
				subset[i%2][j] = false;
			
			else if(j >= arr[i-1])
				subset[i%2][j] = subset[(i+1)%2][j] || subset[(i+1)%2][j - arr[i - 1]];
			else
				subset[i%2][j] = subset[(i+1)%2][j];
		}
	}
	if(subset[n%2][sum] == true)
		cout << "Yes" ;
	else
		cout << "No";
	return 0;
}