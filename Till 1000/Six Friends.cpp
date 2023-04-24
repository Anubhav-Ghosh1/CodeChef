Problem statement -------------> https://www.codechef.com/submit/SIXFRIENDS

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    int a,b;
	    cin >> a >> b;
	    int c = a*3;
	    int d = b*2;
	    if(c<d)
	    {
	       cout << c << endl; 
	    }
	    else 
	    {
	        cout << d << endl;
	    }
	}
	return 0;
}
