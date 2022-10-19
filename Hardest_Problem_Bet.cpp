#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b,c;
	    cin >> a >> b >> c;
	    if(a<b && a<c)
	    {
	        cout << "Draw" << endl;
	    }
	    else if(b<a && b<c)
	    {
	        cout << "Bob" << endl;
	    }
	    else
	    {
	       cout << "Alice" << endl;
	    }
	}
	return 0;
}