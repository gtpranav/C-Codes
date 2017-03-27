#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int  t, n, m, s;
    cin >> t;
    for(long long int i =1; i <=t; i++)
        { 
	        cin >> n >> m >> s;
	        if(!((m+s-1)%n));
	        cout << n;
	        else
	        cout << (m+s-1)%n;
	    }
    return 0;
}