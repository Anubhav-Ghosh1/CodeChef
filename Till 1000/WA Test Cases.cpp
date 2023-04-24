#include <iostream>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
        string binary;
       
        
        cin >> binary;
        int mini=INT_MAX;
	    int i=0;
	    while(i<n)
	    {
	        if(binary[i]=='0')
	        {
	            mini=min(mini,arr[i]);
	        }
            i++;
	    }
	    cout << mini << endl;
        
    }
	// your code goes here
	return 0;
}
