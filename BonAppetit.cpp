#include<iostream>

using namespace std;

int main()
{
	int n, k;                //n = number of items orderes, k = index that anna didn't eat.
	cin >> n >> k;
	int cost[n];              //cost of items ordered.
	int bCharged, bActual=0;
	                          //amount charged from anna.

	for(int i=0; i <n; i++)
	{
	     cin >> cost[i];
	}
	cin >> bCharged; 
	for(int i =0; i<n; i++)
	{
		bActual = bActual + cost[i];

	}
	bActual = (bActual - cost[k])/2 ;
	
	if(bActual < bCharged)
		cout << bCharged - bActual;
	else if( bActual==bCharged)
	 	cout << "Bon Appetit";
	
}