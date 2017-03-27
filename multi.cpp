#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>numbers(n);

	for(int i = 0; i < n; i++)
	{
		cin >> numbers[i];
	}
	long long int r;
	sort(numbers.begin() , numbers.end());
	for(int i = 0; i < n; )
	{
		r = (long long)(numbers[n - 1] * numbers[n - 2]);
		//cout << numbers[n - 1] * numbers[n - 2];
		break;
	}
	cout << r;
	// int max = 0;
	// for(int i = 0; i < n; i++)
	// {
	// 	for(int j = i + 1; j < n; j++)
	// 	{
	// 	if(numbers[i] * numbers[j] > max)
	// 	max = numbers[i] * numbers[j];
	// 	}
	// }

	//cout << max;
}