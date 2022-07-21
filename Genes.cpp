Problem Statement ------> Genes https://www.codechef.com/submit/GENE01?tab=statement

#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	// r brown b blue g green
	char r,b;
	cin >> r >> b;
	if(r == 'R' && b == 'R')
	{
	    cout << "R";
	}
	else if(r == 'B' && b == 'R')
	{
	    cout << "R" << endl;
	}
	else if(r == 'R' && b == 'B')
	{
	    cout << "R" << endl;
	}
	else if(r == 'B' && b == 'B')
	{
	    cout << "B" << endl;
	}
	else if(r == 'G' && b == 'R')
	{
	    cout << "R" << endl;
	}
	else if(r == 'G' && b == 'B')
	{
	    cout << "B" << endl;
	}
	else if(r == 'R' && b == 'G')
	{
	    cout << "R" << endl;
	}
	else
	{
	    cout << "G" << endl;
	}
	return 0;
}
