#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string str;
	    cin >> str;
	    int count = 0;
	    for (int i = 0; i < n; i++) 
	    {
	        if((str[i]==str[i+1] && str[i] == '1')||(str[i]==str[i+1] && str[i] == '0'))
	        {
	            count++;
	        }
	        else
	        {
	           // count--;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}