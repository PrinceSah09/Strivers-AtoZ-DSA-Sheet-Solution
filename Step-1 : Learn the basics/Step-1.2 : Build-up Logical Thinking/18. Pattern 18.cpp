/*
Input: 5

Output:
E
E D
E D C
E D C B
E D C B A

*/

class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            for(char j = 'A'+n-1; j>='A'+(n-i);j--){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};
