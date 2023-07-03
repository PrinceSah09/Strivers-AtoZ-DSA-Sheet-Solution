// GFG
/*
Given a number N, find the first N Fibonacci numbers. The first two number of the series are 1 and 1.

Example 1:

Input:
N = 5
Output: 1 1 2 3 5
*/



/* 
Solution-1 (Optimized)   **ACCEPTED
Time Complexity: O(N) 
Space Comlexity: O(N)
*/
class Solution   
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        long long a = 1, b = 1, c = a+b;
        vector<long long>v(n);
      
        v[0]=a;
        v[1]=b;
        for(int i=2;i<n;i++){
            v[i] = c;
            a = b;
            b = c;
            c = a+b;
        }
        return v;
    }
};


_________________________________________________________________
/*
Solution-2 (Memoization)   **ACCEPTED
Time Complexity: O(N) 
Space Comlexity: O(N)
*/
class Solution
{
    public:
    vector<long long> printFibb(int n) 
    {
        vector<long long>v(n);
        v[0] = 1;
        v[1] = 1;
        
        for(int i=2;i<n;i++){
            v[i] = v[i-1]+v[i-2];
        }
        return v;
    }
};


_________________________________________________________________
/*
Solution-3 (Recursive)   **TLE
Time Complexity: O(N * 2^N). 
Space Comlexity: O(2^N) //Recursive Stack
*/
class Solution
{
    public:

    int get(long long n){   // Function which return nth fibonacci number
        if(n==0 || n==1)return 1;
        return get(n-2)+get(n-1);    
    }
    vector<long long> printFibb(int n) 
    {
      vector<long long>v;
      for(int i=0;i<n;i++){
          int y = get(i);
          v.push_back(y);
      }
      return v;
    }  
};

____________________________________________________________________
// Leetcode : Same Solution :)

