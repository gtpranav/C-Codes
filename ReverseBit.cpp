#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	for(int i =0; i <t; i++){
	    int n , k;
	    cin >> n >> k;
	    //converting n to binary
	    int rbin =0, bin =0;
	    while(n != 0){
	    int remain ;
	    remain = n % 2;
	 	rbin = rbin*10 + remain ;
	    n = n / 2 ;
	    }
	   // cout << rbin << endl;
	    //reversing bin
	    while(rbin != 0){
	        int remaind = 0;
	        remaind = rbin % 10;
	        bin = bin*10 + remaind ;
	        rbin = rbin / 10 ;
	    } cout << bin << endl;
	    //converting binary to string
	    string s = to_string(bin);
	    int l = s.length();
	    cout << s << endl;
	   cout << l << endl;
	   cout << n | (1 << (l-k)) << endl;
	 
	    //cout << sum << endl;
	}
	return 0;
}