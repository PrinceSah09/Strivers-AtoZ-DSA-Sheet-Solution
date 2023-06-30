// GFG

/*
Given a string S, check if it is palindrome or not.

Example 1:

Input: S = "abba"
Output: 1
Explanation: S is a palindrome

*/


// Time Complexity: O(N)    *Recursive Solution
class Solution{
public:	 
    bool solve(string &S, int s, int e){
        if(s>=e)return true;
        if(S[s]!=S[e])return false;
        return solve(S, ++s, --e);
    }

	int isPalindrome(string S)
	{
        int s=0,e=S.length()-1;
        return solve(S,s,e);
	} 
};
