// Leetcode 
/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer
range [-231, 231 - 1], then return 0. Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321
*/

// Time Complexity : O(log N)
class Solution {
public:
    int reverse(int x) {
        long long temp = 0;
        while(x){
            int dig = x%10;
            temp = temp*10+dig;
            if(temp <INT_MIN || temp >INT_MAX)return 0;
            x/=10;
        }

        return temp;
    }
};




//GFG 
/*
Given a 32 bit number X, reverse its binary form and print the answer in decimal.

Example 1:

Input:
X = 1
Output:
2147483648 
Explanation:
Binary of 1 in 32 bits representation-
00000000000000000000000000000001
Reversing the binary form we get, 
10000000000000000000000000000000,
whose decimal value is 2147483648.
*/

// Brutte Force Solution    
// Time Complexity: O(log N) or O(32) not confirm
// Space Complexity: O(32)
class Solution {
  public:
     long long toDecimal(vector<int>v){
         long long sum=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==1){
                sum+=pow(2,i);
            }
        }
        return sum;
    }
    
    long long reversedBits(long long n) { 
        int i=0;
    	vector<int>v(32,0);
    	while(n){
    		if(n%2==0)v[i++] = 0;
    		else v[i++] = 1;
    		n/=2;
    	}
    	reverse(v.begin(),v.end()); 
      return toDecimal(v);
    }
};
