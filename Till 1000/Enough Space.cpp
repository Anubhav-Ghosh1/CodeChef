Problem Set --------> https://www.codechef.com/problems/ENSPACE

#include <iostream>

using namespace std;

int main() {

	int t;	cin >> t;

	while(t--)

	{

	    int n,x,y;

	    cin >> n >> x >> y;

	    if(n>=(x+(y*2)))

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
