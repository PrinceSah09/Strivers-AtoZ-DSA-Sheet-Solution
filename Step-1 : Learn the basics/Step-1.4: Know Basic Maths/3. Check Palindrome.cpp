// GFG
/*
Given an integer, check whether it is a palindrome or not.

Example 1:

Input: n = 555
Output: Yes
*/

// Time Complexity : O(Log N)  or Number of Digit
class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int temp = n,temp2=0;
		    while(n){
		        int dig = n%10;
		        temp2 =temp2*10+ dig;
		        n/=10;
		    }
		   if(temp==temp2)return "Yes";
		   return  "No";
		}
};


// ______________________________________________________________________________________________________________//


// Leetcode
/*
Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
*/

// Time Complexity: O(Log N) or Number of Digit
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false; 
        int temp = x;
        long long rev =0;
        while(x){
            int dig = x%10;
            rev = rev*10+dig;
            x=x/10;
        } 
        return rev==temp;
    }
};
