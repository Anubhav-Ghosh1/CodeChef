#include <bits/stdc++.h>

int Number(int array[],int n)
{   
    // Example n = 4 
    //  5 * 6 / 2 = 30/2 = 15 and there is only sum in array 11 so 4 is the obvious missing number
   int algo = (n+1) * (n+2) / 2;
//    it was found that the sorted array total is equal to all the number
//    in the function
for (int i = 0; i < n; i++)
{
    algo = algo - array[i];
}
  return algo;
}


int main()
{
    int array[] = {1,2,3,5};
    
    int sizeofarray = sizeof(array)/sizeof(array[0]);
    
    int number1 = Number(array,sizeofarray); 
    printf("%d",number1);  
    return 0;
}
