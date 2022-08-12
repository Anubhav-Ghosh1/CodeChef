#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int arr[t];
	for (int i = 0; i < t; i++) {
	    for (int i = 0; i < t; i++) {
	        cin >> arr[i];
	    }
	    cout << 100-arr[i] << endl;
	}
	return 0;
}
