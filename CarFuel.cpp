#include <iostream>

using namespace std;

int main()
{
	int ft;
	cin >> ft;
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i]; 
	}
	int refil = 0;
	for(int i = 0; i < n; )
	{
		if( (arr[i] % ft) < (arr[i + 1] % ft))
		{
			i++;
		}
		if( arr[i +  1] % ft == 0)
		{
			refil++;
			ft = (i + 1) + ft;
			i = i + 2;
			continue;
		}
		if((arr[i] % ft) > (arr[i + 1] % ft))
		{
			refil++;
			ft = i + ft;
			i++;
		}

	}
	cout << refil;
}