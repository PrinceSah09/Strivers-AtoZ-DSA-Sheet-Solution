/*
Input: 5

Output:
1 
0 1 
1 0 1
0 1 0 1 
1 0 1 0 1

*/

class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if((i+j)%2==1)cout<<"0 ";
                else cout<<"1 ";
            }
            cout<<endl;
        }
    }
};
