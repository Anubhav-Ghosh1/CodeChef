#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int answer_A = a*b;
        int answer_B = a + c;
        int answer = min(answer_A,answer_B);
        cout << answer << endl;
    }
	// your code goes here
	return 0;
}
