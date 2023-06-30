// GFG
class Solution {
  public:
    void printNos(int N) {
         //base case
         if(N<=0)return;
         cout<<N<<" ";
         printNos(N-1);
    }
};
