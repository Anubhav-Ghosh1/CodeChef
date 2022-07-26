#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    int sum=(x*5)+(y*10);
	    int ans=sum/z;
	    cout<<ans<<endl;
	}
	return 0;
}
