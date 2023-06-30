// GFG
/*
Given a positive integer N., The task is to find the value of [Sigma F(i) upper-> i=n , lower -> i=1]  sum_{i=1}^{i=n} F(i)  
where function F(i) for the number i be defined as the sum of all divisors of ‘i‘.

Example 1:

Input:
N = 4
Output:
15
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
ans = F(1) + F(2) + F(3) + F(4)
    = 1 + 3 + 4 + 7
    = 15

*/

// Approach-1 (Brutte Force)  *Time Linit Exceed
// Time Complexity: O(N*N)
class Solution
{
public:
    long long div(int n){
        long long sum=0;
        for(int i=1;i<=n;i++){
            if(n%i==0)sum+=i;
        }
        return sum;
    }

    long long sumOfDivisors(int N)
    {
        long long sum=0;
        for(int i=1;i<=N;i++){
            sum+=div(i);
        }
        return sum;
    }
};


_______________________________________________________________________________

//Approach-2 (Thora Optimized)  *Time Limit Exceed
// time Complexity: O(N sqrt(N))

class Solution
{
public:

    long long solve(long long num){
        long long sum=0;
            for(int j=1;j*j<=num;j++){
                if(num%j==0){
                    sum+=j; 
                    if(num/j!=j)sum+=num/j;
                }
            }
        return sum;
    }
    
    long long sumOfDivisors(int N)
    {
        long long totalsum=0;
        for(int i=1;i<=N;i++){
            totalsum+=solve(i);
            // cout<<totalsum<<" ";
        }
        // cout<<endl;
        return totalsum;

        // return solve(N);
    }
};


______________________________________________________________________________


// Approach-3 (Optimized)  *Accepted 
// Time Complexity: O(N) 

class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long long sum=0;
        for(int i=1;i<=N;i++){
            sum = sum + (N/i)*i;     // If someone know how this work, please push your documentation
        }
        return sum;
    }
};
