#include<iostream>
#include<string>
#include<cstring>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string time;

	cin >> time;
    
    int l = time.length();
   
    if( time[l-2] == 'P' )
    {
        if( time[0] == '1' && time[1] == '2'  )
      {
       int a = ( time[0] - '0' )*10 + ( time[1] - '0' );

       time[0] = a % 11 + '0' ;
       time[1] = a % 10 + '0' ;
      }
      else
       {
    	int a = ( time[0] - '0' )*10 + (time[1] - '0' );
    	a += 12;
    	time[0] = a / 10 + '0' ;
    	time[1] = a % 10 + '0' ;
       }
    }

    if( time[0] == '1' && time[1] == '2' && time[l-2] == 'A')
    {
        time[0] = '0' ;
        time[1] = '0' ;
    }

    time.erase(8,2);

    cout<< time;
    
}
    
