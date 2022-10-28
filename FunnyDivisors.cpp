/*
Funny Divisors

Sample Input 1 :
2
3
1 2 3
4
5 6 9 8
Sample Output 1 :
5
23  
Explanation For Sample Input 1 :
In the first test case, 1 is neither divisible by 2 or 3. 2 is divisible by 2, and 3 is divisible by 3. So here we return the sum of 2 + 3 which is equal to 5.

In the second test case, 5 is divisible by neither 5 nor 6.6 is divisible by 2, 9 is divisible by 3, and 8 is divisible by 2. So here we return 6 + 9 + 8 = 23. 
*/

#include <bits/stdc++.h> 
int findSum(int n, vector<int>& arr) {
    int sum=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]%2==0||arr[ i]%3==0)
       {
           sum+=arr[i];
       }
   }
    return sum;
}