// GFG

/*
Given and integer N.Calculate the sum of series 13 + 23 + 33 + 43 + … till N-th term.

Example 1:

Input:
N=5
Output:
225
Explanation:
1^3+2^3+3^3+4^3+5^3=225

*/

//Recursive Solution  *Time Limit Exceed
// Time complexity: O(N)

class Solution {
  public:
    long long sum=0;
    long long sumOfSeries(long long N) {
        if(N==0)return sum;  //Base Case
        sumOfSeries(N-1);   //Recursive call
        return sum+=pow(N,3);  
    }
};


____________________________________________________________________________

// Optimized Solution  *Accepted
//Time complexity: O(1)

class Solution {
  public: 
    long long sumOfSeries(long long N) {
        long long x =( N*(N+1))/2;
        return x*x;
    }
     
};
