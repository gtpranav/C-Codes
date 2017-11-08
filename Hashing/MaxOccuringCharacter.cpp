#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;
	vector <int> vec(26,0);
	char arr[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	for(int i = 0; i < str.length(); i++)
	{
		int a =  str[i] - 'a';
		vec[a]++;	
	}
	int max = vec[0], ans = 0;
	for(int i = 0; i < 26; i++)
	{
		if(vec[i] > max)
		{
			max = vec[i];
			ans = i;
		}
	}
	cout << arr[ans];
}