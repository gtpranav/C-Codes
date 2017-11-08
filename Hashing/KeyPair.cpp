#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() 
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n, x, flag = 0;
	    cin >> n >> x;
	    map<int,bool> m;
	    for(int i = 0; i < n; i++)
	    {
	        int y;
	        cin >> y;
	        if(m[x-y])
	        {
	        	cout << "Yes" << endl;
	            flag = 1;
	            break;
	        }
	        m[y] = true; 
	    }
	    if(flag != 1)
	        cout << "No" << endl;
	}
	return 0;
}