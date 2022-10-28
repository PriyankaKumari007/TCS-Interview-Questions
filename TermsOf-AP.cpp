/*
Terms of AP
Problem Statement
Detailed explanation ( Input/output format, Notes, Constraints, Images )
Sample Input 1:
2
2
5
Sample Output 1:
5 11
5 11 14 17 23
Explanation For Sample Input 1:
In the first test case, the first number is 5, while the second number cannot be 8 as it is divisible by 4, and so, the next number is directly 11 as it is not divisible by 4.

In the second test case, the first two numbers are 5 and 11. While following three numbers are 14, 17 and 23 for ‘N’ = 4, 5 and 7 respectively. 20 is divisible by 4, and thus, 20 cannot be included in the list.
Sample Input 2:
2
7
8
Sample Output 2:
5 11 14 17 23 26 29
5 11 14 17 23 26 29 35
*/

#include <bits/stdc++.h> 
#include <vector>

vector < int > termsOfAP(int x) {
    vector<int> v;
   int i=1;
   int count=0;
    
    while(count<x)
    {
       int ans= 3*i+2;
        if(ans%4!=0)
        {
             v.push_back(ans);
            count++;
        }
       
        i++;
        
    }
    return v;
}
