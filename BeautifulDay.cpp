#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i , j, k;
    int count =0;
    cin >> i >> j >> k;
    
    for (int x =i; x <= j; x++){
        int rx =0;
        int a =0;
        int remainder, y = x;
        while( y != 0){
            remainder = y % 10; 
        rx = rx*10 + remainder;
        y = y/10;
        }
        a = abs(x - rx);
         
         if( a % k == 0)
         count++;  
    }
        cout << count; 
    return 0;
}
