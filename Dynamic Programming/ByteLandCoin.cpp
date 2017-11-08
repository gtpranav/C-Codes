#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long n;
		cin >> n;
		long n1 = 0, n2 = 0, n3 = 0, sum = 0;
		for(long i = 0; i <= n; i = i+2)
		{
			if(i <= 1)
				n1 = 0;
			else
				n1 = n1 + 1;
		}
		for(long i = 0; i <= n; i = i+3)
		{
			if(i <= 2)
				n2 = 0;
			else
				n2 = n2 + 1;
		}
		for(long i = 0; i <= n; i = i+4)
		{
			if(i <= 3)
				n3 = 0;
			else
				n3 = n3 + 1;
		}

		sum = n1 + n2 + n3;
		if(sum > n)
			cout << sum << endl;
		else
			cout << n << endl;
	}
}