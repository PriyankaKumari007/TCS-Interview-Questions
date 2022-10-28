/*
Remove Consecutive Duplicates

 
Sample Input 1:
2
7
aazbbby
6
aabbcb
Sample Output 1:
azby
abcb
Explanation of Sample Input 1:
Test Case 1:

Given ‘str' = ”aazbbby”
After removing adjacent duplicates string will be “azby”

Test Case 2:

Given ‘str’ = “aabbcb”
After removing adjacent duplicates string will be “abcb”
Sample Input 2:
2
5
abcde
5
aaaaa
Sample Output 2:
abcde
a*/


/* 
   Time complexity: O(N)  
   Space complexity: O(N) for recursion stack

   Where N is the length of the string 
*/

string removeDuplicate(string &s)
{
    int n = s.size();

    // Check for the base case if the length of the string is less than 2 then return string itself
    if (n < 2)
    {
        return s;
    }

    // Compare last and second last character of the string
    if (s[n - 1] == s[n - 2])
    {
        // If both are equal remove the last character and call recursion for the remaining part

        // Remove last
        s.pop_back();

        // Call recursion for remaining part
        return removeDuplicate(s);
    }
    else
    {
        //If both are not equal remove last and call recursion for remaining and add last to the end

        // Store last character for append it in the final string
        char last = s.back();

        // Remove last
        s.pop_back();

        // Call recursion for remaining string and add the last character to the end
        return removeDuplicate(s) + last;
    }
}

