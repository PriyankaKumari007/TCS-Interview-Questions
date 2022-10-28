/*
Sum Or Product

Sample Input 1 :
2
4 1 
4 2
Sample Output 1 :
10
24 
Explanation of the Sample Input 1:
In the first test case, the answer is 10 because all integers between 1 and 4 are 1, 2, 3, and 4. Hence 1 + 2 + 3 + 4 is equal to 10.


In the second test case, the answer is 25 because all integers between 1 and 4 are 1, 2, 3, and 4. Hence 1 * 2 * 3 * 4 is equal to 24.
*/

#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{
    int sum=0;
   long long int mul=1;
	if(q==1)
    {
        for(int i=1;i<=n;i++)
        {
            sum=sum+i;
        }
        return sum;
    }
    else if(q==2)
    {
        for(int i=1;i<=n;i++)
        {
            mul=mul*i;
            mul%=1000000000+7;
        }
        return mul;
    }
}