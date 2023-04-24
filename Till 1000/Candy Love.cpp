problme Statement ----------> https://www.codechef.com/problems/CNDLOVE?tab=submissions
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;

	cin >> t;
while(t)
	  {
	int n,a;	    
	    cin >> n;

	    int sum = 0;
	    for (int i = 0; i < n; i++) {
	        cin >> a;
	        sum = sum + a;
	    }
	    if(sum%2 == 0)
	    {
	      cout << "NO" << endl;  
	    }
	    else 
	    {
	        cout << "YES" << endl;
	    }
	    t--;
	}
	return 0;
}
