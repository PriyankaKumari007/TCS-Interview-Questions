/*
Star Pattern
Problem Statement

Detailed explanation ( Input/output format, Notes, Constraints, Images )
Sample Input 1 :
2
1
2   
Sample Output 1 :
   *
   * 
  ***
Sample Input 2 :
2
3
4
Sample Output 2 :
    *
   ***
  *****
    *
   ***
  *****
 *******
*/

#include <bits/stdc++.h> 

void printPattern(int n) {
	int i=1;
    int space=n;
    while(i<=n)
    {
        
        int m=1;
        while(m<n-i+1)
        {
            cout<<" ";
            m++;
        }
        
        int k=1;
        
        while(k<=2*i-1)
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
        space--;
        i++;
    }
}
