// GFG

/*
A number N is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial 
numbers are 1, 2, 6, 24, 120,Given a number N, the task is to return the list/vector of the factorial numbers smaller than or equal to N.

Example 1:

Input: N = 3
Output: 1 2

Explanation: The first factorial number is 
1 which is less than equal to N. The second 
number is 2 which is less than equal to N,
but the third factorial number is 6 which 
is greater than N. So we print only 1 and 2.
*/

//Time Complexity: O()
class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long>v;
        long long fact = 1;
      
        if( N==1)return {1};
        for(int i=1;(fact*i)<=N;i++){
            fact = fact*i;
            v.push_back(fact);
        } 
        return v; 
    }
};
