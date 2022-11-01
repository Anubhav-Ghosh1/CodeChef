#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int size,k;
        cin >> size >> k;
        int arr[size];
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
            sum1 += arr[i];
            if(arr[i] >= k)
            {
                arr[i] = k;
            }
        }
        for (int i = 0; i < size; i++) {
            sum2 = sum2 + arr[i];
        }
        cout << (sum1 - sum2) << endl;
    }
	// your code goes here
	return 0;
}
