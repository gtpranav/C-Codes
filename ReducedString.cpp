#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int len = str.length();
	int i;
	for( i = 0; i < len -1; )
	{
		//int j = i + 1 ;
		if(i > -1 && str[i] == str[i+1])
		{
			str.erase( i, 2);
			i = 0;
		}
		else
		{
			i++;
		}
	}
	if(str.empty())
	{
		cout << "Empty String" << endl;
	}
	else
	cout << str ;
}