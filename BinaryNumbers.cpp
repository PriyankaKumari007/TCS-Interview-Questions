/*
Binary Number

Sample Input 1 :
2
4
3
Sample Output 1 :
1
2    
Explanation of the Sample Input 1:
For the first test case :  
The binary representation 4 is 0..0100, therefore there is only 1 set bit. Hence, the answer will be 1.

For the Second Test case:
The binary representation 3 is 0..0011, therefore there are 2 set bits. Hence, the answer will be 2.
*/

#include <bits/stdc++.h> 
int countSetBits(int n)
{
    int count=0;
	while(n>0)
    {
        int ld=n%2;
        if(ld==1)
            count++;
        n=n/2;
    }
    return count;
}