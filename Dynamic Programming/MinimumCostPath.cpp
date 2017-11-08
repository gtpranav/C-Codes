#include <iostream>
#include <vector>

using namespace std;

void printPath(vector<int> &path, int dp[][], int sum, int n)
{
	if(sum == 0)
	
}
int mini(int x, int y, int z)
{
	int min = x;
	if(min > y)
		min = y;
	if(min > z)
		min = z;
	
	return min;
}
int main()
{
	int a;
	cin >> a;
	int arr[a];
	for(int i = 0; i < a; i++)
			cin >> arr[i];


	int sum;
	cin >> sum;
	dp[a][sum+1];

	for(int j = 0; j <= sum; j++)
		dp[j][0] = true;

	for(int i = 1; i < a; i++)
	{
		for(int j = 0; j <= sum; j++)
		{
			if(j >= arr[i - 1])
				dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
			else if(j < arr[i - 1])
				dp[i][j] = dp[i - 1][j];
		}
	}
	vetor<int> path;
	printPath(path, dp, sum, a);
	return 0;
}