#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
int main()
{
	int t;
	int flag;
	cin >> t;

	for(int i = 0; i < t; i++)
	{
		string str;
		string rtr;
		cin >> str;
		rtr = str ;
		int len = str.length();
		for(int j = 0; j < len/2; j++)
		{
			  swap(rtr[j] , rtr[ len - j - 1]);
		}
		
		for(int k =  1; k < len; k++)
		{
			if(abs(str[k] - str[k - 1]) != abs(rtr[k] - rtr[k - 1]))
			{
				flag = 1;
				break;
				//cout << "NOT FUNNY" << endl;
			}
			else
			flag = 0;
		}
		if(flag == 0)
		cout << "Funny" << endl;
		else if(flag == 1)
		cout << "Not Funny" << endl;
	}
}
