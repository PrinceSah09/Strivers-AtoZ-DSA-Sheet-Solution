// GFG

/*
Print numbers from N to 1 (space separated) without the help of loops.

Example 1:

Input:
N = 10
Output: 10 9 8 7 6 5 4 3 2 1

*/


//Time Complexity: O(N)
class Solution {
  public:
    void printNos(int N) {
         //base case
         if(N<=0)return;
         cout<<N<<" ";
         printNos(N-1);
    }
};
