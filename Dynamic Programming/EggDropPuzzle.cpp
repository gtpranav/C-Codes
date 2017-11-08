#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;


int main()
{
	int n, k;
	cin >> n >> k;

	int dp[n+1][k+1];

	for(int i = 0; i<= n; i++)
	{
		dp[i][0] = 0;
		dp[i][1] = 1;
	}
	for(int j = 1; j <= k; j++)
	{
		dp[1][j] = j;
	}
	int ans = 0;
	for(int i = 2; i <= n; i++)
	{
		for(int j = 2; j <= k; j++)
		{
			dp[i][j] = INT_MAX;
			for(int l = 1; l <= j; l++)
			{
				ans = 1 + max(dp[i-1][l - 1], dp[i][j-l]);
				if(dp[i][j] > ans)
					dp[i][j] = ans;	
			}
		}
	}
	cout << dp[n][k] << endl;
}