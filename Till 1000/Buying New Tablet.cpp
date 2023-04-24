Problem Statement --------> https://www.codechef.com/submit/TABLET?tab=statement
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    int n,b;
	    cin >> n >> b;
	    int w,h,p;
	   
	    
	    int l = -1;
	    for (int k= 0; k < n; k++) {
	         cin >> w >> h >> p;
	         int area = w*h;
	        /* code */
	        if(p<=b)
	    {
	       if(area>l)
	       {
	        l = area;
	       }
	        
	    }
	    
	    
	    }
	    if(l==-1)
	    {
	        cout << "no tablet" << endl;
	    }
	    else
	    {
	        cout << l << endl;
	    }
	    
	    
	}
	return 0;
}
