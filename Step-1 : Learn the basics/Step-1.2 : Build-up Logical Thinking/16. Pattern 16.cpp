/*
Input: 5

Output:
A
BB
CCC
DDDD
EEEEE

*/
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(char i='A';i<=n+'A'-1;i++){
            for(int j=1;j<=i-'A'+1;j++){
                cout<<i;
            }
            cout<<endl;
        }
    }
};
