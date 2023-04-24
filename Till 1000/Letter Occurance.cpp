#include <iostream>
#include <string>

using namespace std;
void Occurance(string s,char c,int a)
{ int i,occur = 0;
    for (i = 0; i <a; i++)
    {
        if (s[i]== c)
        {
            occur++;
        
        
        }

        // return occur;
    }
    cout << occur << endl;
    
}
int main()
{
char c;
cout << "Enter char" << endl;
cin >> c;
string sentence;

cout << "Enter sentence" << endl;
cin >> sentence;

int size = sentence.length();
Occurance(sentence,c,size);
return 0;
}
