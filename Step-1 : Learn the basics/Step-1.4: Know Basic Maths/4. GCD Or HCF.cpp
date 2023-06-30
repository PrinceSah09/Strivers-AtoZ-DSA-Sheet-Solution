// GFG
/*
Given two numbers A and B. The task is to find out their LCM and GCD.

Example 1:

Input:
A = 5 , B = 10
Output:
10 5
Explanation:
LCM of 5 and 10 is 10, while
thier GCD is 5.

Question Link: https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1
*/


// Time Complexity: O(log N)
class Solution {
  public:
  
  long long gcd(long long a,long long b)    // Finding GCD
  {
      if(a==0)return b;
      return gcd(b%a,a);
  }
  
  
  long long lcm(long long a,long long b,long long gcd)     //Finding LCM
  {
      return(a*b)/gcd;    // Formulae
  }
  
    vector<long long> lcmAndGcd(long long A, long long B) {
        long long GCD = gcd(A, B);
        long long LCM = lcm(A, B, GCD);

        return {LCM, GCD};
    }
};


