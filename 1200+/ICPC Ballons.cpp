#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        // unordered_map<int,int>mp;
        int size;
        int count = 0;
        cin >> size;
        int answer = 0;
        for(int i = 0;i<size;i++)
        {
            int a;
            cin >> a;
           if(a >= 1 && a <= 7 && count <= 7)
           {
               count++;
               answer = i;
            //   cout << a << " ";
           }
        }
        cout << (answer+1) << endl;
        
    }
	// your code goes here
	return 0;
}
