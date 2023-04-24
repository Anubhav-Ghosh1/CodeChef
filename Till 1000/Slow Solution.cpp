#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int t1,maxN,sumN;
        cin >> t1 >> maxN >> sumN;
        int ans = 0,count = 0;
        while(sumN > 0 && t1 > count)
        {
            if(sumN>maxN)
            {
                ans = ans + ( maxN*maxN);
            }
            else
            {
                ans = ans + (sumN*sumN);
                count++;
            }
                sumN -= maxN;

            t1--;
        }
        cout << ans << endl;
    }
	// your code goes here
	return 0;
}
