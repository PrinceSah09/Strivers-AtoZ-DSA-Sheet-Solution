/*
Given a number N. Count the number of digits in N which evenly divides N.

Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.
 

Example 1:

Input:
N = 12
Output:
2
Explanation:
1, 2 both divide 12 evenly

*/


//Time Complexity O(N)   N -> Number of Digit
class Solution{
public:
    int evenlyDivides(int N){
        int cnt=0,g=N;
        while(N){
            int dig = N%10;
            if(dig!=0) {
              if(g%dig ==0)cnt++;
            }
            N  = N/10;
        }
        return cnt;
    }
};


// For counting Digits the optimize way is: return log10(N)


