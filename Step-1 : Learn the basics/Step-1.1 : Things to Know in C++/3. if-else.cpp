/*
Question: Given two integers, n and m. The task is to check the relation between n and m.

Example 1:

Input:
n = 4
m = 8

Output:
lesser

Explanation:
4 < 8 so print 'lesser'.

*/

// Solution:
class Solution {
  public:
    string compareNM(int n, int m){
        if(n<m){
            return "lesser" ;
        }
        else if(n==m){
            return "equal" ;
        } 
        return "greater" ; 
    }
};
