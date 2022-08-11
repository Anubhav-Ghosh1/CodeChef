#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	string str;
	
	int x,y;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    int streak = 0,present = 0,store = 0;
	    cin >> x >> y;
	    cin >> str;
	    for (int i = 0; i <=30; i++) {
	
	        if(str[i] == '1')
	        {
	            present++;
	            store++;
	           // We are storing the number of times 1 is occuring with store++ and then
	           // The streak simply put store = 0
	           // or store the value of store in streak
	        }
	        else
	        {
	            if(streak>store)
	            {
	                store = 0;
	            }
	            else
	            {
	                streak = store;
	                store = 0;
	            }
	        }
	    }
	    
cout << present * x + streak * y << endl;;
	}
	return 0;
}
