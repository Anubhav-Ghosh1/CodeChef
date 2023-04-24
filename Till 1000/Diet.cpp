#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    int n,k;
	    cin >> n >> k;
	    int a[n];
	    
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	        
	    }
	    int ans=0,temp=0;
	    for (int i = 0; i < n; i++) {
	        ans += a[i];
	         if(ans<k)
	         {
	             cout << "NO " << i+1 << endl;
	             temp = 1;
	             break;
	         }
	         else
	         {
	             ans = ans - k;
	             
	         }
	         
	    }
	    if(temp == 0)
	    {
	        cout << "YES" << endl;
	    }
	   
	}
	return 0;
}
