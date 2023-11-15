#include <bits/stdc++.h>
using namespace std;

/*
Approach 1
Time Complexity O(n^2)
Space Complexity O(n)

  void approach1(){
  for(int resistance = 0;resistance<maxElement;resistance++)
    {
      for(int i = 0;i<size;i++)
      {
        if(v[i] > resistance && v[i] < x)
        {
            count -= v[i];
        }
        else if(v[i] > resistance && v[i] >= x)
        {
            return break;
        }
      }
      if(count > 0)
      {
        cout << resistance << endl;
        break;
      }
    }
}
*/

/*
Binary search approach
T.C. O(nlogn)
S.C. O(n)
*/
bool checkResistance(int resistance,int x,vector<int>&v)
{
    int size = v.size();
    int count = x;
    for(int i = 0;i<size;i++)
    {
        if(v[i] > resistance && v[i] < count)
        {
            count -= v[i];
        }
        else if(v[i] > resistance && v[i] >= count)
        {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int size;
        cin >> size;
        int x;
        cin >> x;
        vector<int>v(size);
        for(int i = 0;i<size;i++)
        {
            cin >> v[i];
        }
        int s = 0;
        int e = *max_element(v.begin(),v.end());
        int mid;
        while(s <= e)
        {
            mid = (s+e)/2;
            int resistanceValue = checkResistance(mid,x,v);
            if(resistanceValue)
            {
                e = mid - 1;
            }
            else if(resistanceValue == false)
            {
                s = mid + 1;
            }    
        }
        cout << s << endl;
    }
	return 0;
}
