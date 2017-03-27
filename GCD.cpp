#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a , b , c;
	cin >> a >> b;
	//long long int e = a * b ;


	if( a < b)
	{
		int temp ;
		temp = a;
		a = b;
		b = temp;
		cout << a << " " << b << endl;
	}
	int p = a;
	int q = b;
	while( b > 0)
	{
		c = b ;
		b = a % b ;
		
		a = c;	
	if ( b == 0)
	 {
	 	cout << a << endl;
	 	cout << (p / a) * q ;
	 }
	}
	 
}
