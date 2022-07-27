// Problem Statement ---------> https://www.codechef.com/submit/FRIMEET?tab=statement
#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    int x,y;
	    int xsteps ,ysteps;
	    cin >> x >> y;
	    xsteps = x*1;
	    ysteps = y *2;
	    if(x>=y)
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
