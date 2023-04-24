#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    int n;
	    cin >> n;
	    int rem=120-n;
	    char arr[n];
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    int count = 0;
	    for (int i = 0; i < n; i++) {
	        if(arr[i]=='1')
	        {
	            count++;
	        }
	        
	    }
	    int present = count+rem;
	    	    float per = (present/120.0)*100;

	     if(per>=75){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
