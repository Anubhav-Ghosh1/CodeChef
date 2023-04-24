#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b,c,d;
	    cin >> a >> b >> c >> d;
	    int ans_B = b*7;
	   // c*a workout for the first few days and 7-a for last remaing days
	    int ans_C = ((c*a) + (7-a)*d);
	    int answer = max(ans_B,ans_C);
	    cout << answer << endl;
	}
	return 0;
}
