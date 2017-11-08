#include <iostream>
#include <map>
#include <vector>
using namespace std;

bool CheckDuplicates(vector <int> &vec, int n, int k)
{
	map <int, bool> m;
	for(int i = 0; i < n; i++)
	{
		if(m[vec[i]])
			return true;
		if(i >= k)
			m[arr[i - k]] = false;
		m[arr[i]] = true;
	}
	return false;
}
int main() 
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n, flag = 0, k;
	    cin >> n >> k;
	    vector <int> vec(n);
	    for(int i = 0; i < n; i++)
	    {
	    	cin >> vec[i];
	    }
	    if(CheckDuplicates(vec, n, k))
	    	cout << "True" << endl;
	    else
	    	cout << "False" << endl;
	}
	return 0;
}