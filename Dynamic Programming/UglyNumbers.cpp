#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int dp[n];

	dp[0] = 1;
	int i2 = 0, i3 = 0, i5 = 0, ans = 0;
	int next_2 = 2;
	int next_3 = 3;
	int next_5 = 5;
	for(int i = 1; i < n; i++)
	{
		ans = min(next_2, min(next_3, next_5));
		dp[i] = ans;
		cout << ans << " ";
		if(ans == next_2)
		 {
		 	i2 = i2 + 1;
		 	next_2 = dp[i2]*2;
		 }
		if(ans == next_3)
		 {
		 	i3 = i3 + 1;
		 	next_3 = dp[i3]*3;
		 }
		if(ans == next_5)
		 {
		 	i5 = i5 + 1;
		 	next_5 = dp[i5]*5;
		 }
	}
	cout<< endl << ans;	
}