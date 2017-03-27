#include <iostream>

using namespace std;

int main()
{
	int n , k , q ;
	cin >> n >> k >> q ;

	int arr[n];
	for(int i = 0; i< n; i++)
		cin >> arr[i] ;
	
	for(int i = 0; i < q; i++)
	{
		int m;
		cin >> m ;      
		cout << arr[ (m+(2*k)) % n ] << "\n";
	}	
	return 0;
}