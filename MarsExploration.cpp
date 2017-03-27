#include <iostream>
#include <string>

using namespace std;


int main()
{
    string s;
    cin >> s;
    int l = s.length();
    int count = 0;

    for(int i = 0; i < l; i = i + 3)
    {
    	if(s[i] != 'S')
    	{
    		count++;
    	}
    	if(s[i + 1] != 'O')
    	{
    		count++;
    	}
    	if(s[i + 2] != 'S')
    	{
    		count++;
    	}
    }
    cout << count << endl;
    return 0;
}