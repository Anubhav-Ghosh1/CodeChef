#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
    int n,x,y,a,b;
   
        cin >> n >> x >> y >> a >> b;
        float petrol = n / (float)a*x;
        float diesel = n / (float)b*y;
        if(petrol > diesel)
        {
            cout << "DIESEL" << endl;
        }
    else if(petrol < diesel)
    {
        cout << "PETROL" << endl;
    }
    else
    {
        cout << "ANY" << endl;
    }
    }
	// your code goes here
	return 0;
}
