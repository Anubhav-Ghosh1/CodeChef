#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    int n,x;
	    cin >> n >> x;
	   // N is the length 
	   if(n<x)
	   {
	       cout << "NO" << endl;
	   } /*If length of stick is more then the 
	   desired length so it will not be possible*/
	   else if(n%2 == 0 && x%2 != 0)
	   {
	       cout << "YES" << endl;
	       /* If the stick are even then the length should be odd */
	   } 
	   else if(n%2 != 0 && x%2 == 0)
	   {
	       cout << "NO" << endl;
	       
	   }
	   else
	   {
	       cout << "YES" << endl;
	   }
	  
	}
	return 0;
}
