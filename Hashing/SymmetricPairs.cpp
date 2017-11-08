#include <iostream>
#include <map>
#include <vector>

using namespace std;


int main()
{
	int n, flag = 0;
	cin >> n;
	map <int, bool> m1;
	map <int, bool> m2;
	for(int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		if(m1[b] && m2[a])
		{
			cout << a << "," << b << endl;
			flag = 1;
		}
		m1[a] = true;
		m2[b] = true;
	}
	if(flag != 1)
	{
		cout << "No Pairs" << endl;
	}
	return 0;
}