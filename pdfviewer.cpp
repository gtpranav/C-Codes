#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int numbers[26];
	for(int i=0; i <26; i++)
	{
		cin >> numbers[i];
	}
	string word;
	cin >> word;

	int l = word.length();
     int height=1;
    for(int i1 =0; i1 <l; i1++)
    {
     height = max( height , numbers[ word[i1] - 'a'] );
    }
    cout << height*l;
}  
