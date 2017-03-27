#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	arr[0] = 0;
	arr[1] = 1;
	int sum = 0;
	for(int i = 2; i <= n ; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		sum = sum + arr[i];
	}
	if (n == 0)
	cout << n;
	else
	cout << (sum + 1);
}