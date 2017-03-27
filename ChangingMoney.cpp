#include <iostream>

using namespace std;

int main()
{
	int m;
	cin >> m;
	int d1 = m / 10;
	int r1 = m % 10;
	int d2 = r1 / 5;
	int r2 = r1 % 5;

	cout << d1 + d2 + r2;
}