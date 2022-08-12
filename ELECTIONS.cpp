#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int arr[3];
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }
        if(arr[0]>50)
        {
            cout << "A" << endl;
        }
        else if(arr[1]>50)
        {
            cout << "B" << endl;
        }
        else if(arr[2]>50)
        {
            cout << "C" << endl;
        }
        else
        {
            cout << "NOTA" << endl;
        }
        
    }
	// your code goes here
	return 0;
}
