#include <iostream>
using namespace std;

int main() {
    // y/2 used per house hold ever week
    // y is litres of grey water
    
    int t;
    cin >> t;
    while(t--)
    {
        int houses,x,y,c;
        cin >> houses >> x >> y >> c;
        int a = y/2;
        int b = x+a;
        int ans = houses*b;
        if(ans <= c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
	// your code goes here
	return 0;
}
