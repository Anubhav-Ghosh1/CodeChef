#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        char a[n];
        string str;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i+=2) {
            if(a[i] == a[i+1] && a[i] == '0')
            {
                cout << "A";
            }
            else if(a[i] == a[i+1] && a[i] == '1')
            {
                cout << "G";
            }
            else if(a[i] == '0' && a[i+1] == '1')
            {
                   cout << "T";
            }
            else if(a[i] == '1' && a[i+1] == '0')
            {
                cout << "C";
            }
            
        }
        cout << endl;
    }
	// your code goes here
	return 0;
}
