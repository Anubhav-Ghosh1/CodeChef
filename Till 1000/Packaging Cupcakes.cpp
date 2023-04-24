Packaging Cupcakes
https://www.codechef.com/viewsolution/70307691
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    int n;
	    cin >> n;
	    int a;
	    if(n%2==0)
	    {
	        a = (n/2)+1;
	        cout << a << endl;
	    }
	    else
	    {
	        cout << (n+1)/2 << endl;
	    }
	}
	return 0;
}
