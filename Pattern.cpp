/*
Pattern
Input:
4
5
Sample Output 2:
****
 ***     
  **
   *

*****
 ****     
  ***
   **
    *
*/

#include <bits/stdc++.h> 
void ninjaPuzzle(int n)
{
    int i=1;
    int p=n;
    while(i<=n)
    {
        int j=1;
        while(j<i)
        {
            cout<<" ";
            j++;
        }
        
        int k=1;
        while(k<=p)
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
        p--;
        i++;
    }
}
