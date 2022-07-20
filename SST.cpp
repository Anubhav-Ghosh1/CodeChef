#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    int x,y;
	    cin >> x >> y;
	    int a = (x *100)/10;
	    int b = (y *100)/20;
	    if(a>b)
	    {
	        cout << "First" << endl;
	    }
	    else if(b>a)
	    {
	        cout << "Second" << endl;
	    }
	    else
	    {
	        cout << "Any" << endl;
	    }
	}
	return 0;
}
