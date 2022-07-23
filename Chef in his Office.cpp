Problem Statement - - - - - - > https://www.codechef.com/JULY222D/problems/OFFICE
#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t;
cin >> t;
	for (int i = 0; i < t; i++) {
	    int x,y;
        int sum = 0;
	    cin >> x >> y;
	   for (int j = 0; j < 4; j++)
       {
         sum = sum + x;
       }
       
	    int ans = sum + y;
	    cout << ans << endl;
	}
	return 0;
}
