// GFG
/*
Print GFG n times without the loop.

Example:

Input:
5
Output:
GFG GFG GFG GFG GFG

*/

//Time Complexity: O(n)
class Solution {
  public:
    void printGfg(int N) {
        if(N<=0)return;
        cout<<"GFG"<<" ";
        printGfg(N-1);
    }
};
