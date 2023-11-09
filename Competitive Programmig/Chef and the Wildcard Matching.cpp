/*
Problem Statement https://www.codechef.com/practice/course/strings-cpp/PCPPST01/problems/TWOSTR?tab=statement
T.C. O(n) * (O(n))
S.C O(1)

Solution when we observe the test cases we can find an pattern to be an valid answer the answer needs to be following these conditions

1. Both the character must be same
2. Either of one character should be ?
3. Both the character should be ?
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1;
        string str2;
        cin >> str1 >> str2;
        int size = str1.size();
        bool flag = false;
        for (int i = 0; i < size; i++) {
            if (!((str1[i] == '?' && str2[i] != '?') ||
                (str1[i] != '?' && str2[i] == '?') ||
                (str1[i] == str2[i]) ||
                (str1[i] == '?' && str2[i] == '?'))) {
                flag = true;
                break;
            }
        }
        if (flag == false) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
