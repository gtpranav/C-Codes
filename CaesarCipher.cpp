#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    for(int i =0; i < s.length(); i++)
    {
        char ch;
        if(isalpha(s[i]))
        {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            ch = 'a';
        }
        else
        {
            ch = 'A';
        }
         s[i] = ch + ((s[i] - ch + k ) % 26); 
        }
    }
    cout << s;
    return 0;
    
}