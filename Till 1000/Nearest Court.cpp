Problem statement ----------> https://www.codechef.com/START50D/problems/NEARESTCOURT
#include <iostream>
using namespace std;

int main() {
int t;
cin >> t;
for (int i = 0; i < t; i++) {
    int a,b;
    cin >> a >> b;
    int temp = (a+b)/2;
    int maxi = max(a,b);
    cout << maxi - temp << endl;
}
	// your code goes here
	return 0;
}
