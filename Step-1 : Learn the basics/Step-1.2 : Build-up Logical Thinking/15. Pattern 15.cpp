/*
Input: 5

Output:
ABCDE
ABCD
ABC
AB
A

*/

class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            for(char j='A';j<='A'+(n-i);j++){
                 cout<<j;
            }
            cout<<endl;
        }
    }
};
