// GFG
/*
For a given 3 digit number, find whether it is armstrong number or not. An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is 
equal to the number itself. Return "Yes" if it is a armstrong number else return "No".

NOTE: 371 is an Armstrong number since 3^3 + 7^3 + 1^3 = 371

Example 1:

Input: N = 153
Output: "Yes"
Explanation: 153 is an Armstrong number
since 1^3 + 5^3 + 3^3 = 153.
Hence answer is "Yes".

Question Link: https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1
*/


// Time Complexity : O(1)
class Solution {
  public: 
    string armstrongNumber(int n){ 
        int temp = n;
        int dig1 = (n%10);
        dig1 = dig1*dig1*dig1;
        n/=10;
        
        int dig2  = (n%10);
        dig2 = dig2*dig2*dig2;
        n/=10;
        
        int dig3 = (n%10);
        dig3 = dig3*dig3*dig3;
        
        
        // 153 => 0+27+125+1 => 153
        if(temp == (dig1+dig2+dig3)) {
            return "Yes";
        }
        return "No";
    }
};



// Leetcode: Premium Question**
