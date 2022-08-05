#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n,a,b;
	    cin >> n >> a >> b;
	    if(n>=a)
	    {
	        cout << "PIZZA" << endl;
	    }
	    else if(a>n&&b>n)
	    {
	        cout << "NOTHING" << endl;
	    }
	    else 
	    {
	        cout << "BURGER" << endl;
	    }
	}
	return 0;
}
