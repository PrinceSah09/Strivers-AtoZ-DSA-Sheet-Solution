/*
Input: 5

Output:
A
AB
ABC
ABCD
ABCDE

*/

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            char ch='A';
            for(char j='A';j<=i+'A'-1;j++){
                cout<<j;
                ch++;
            }
            cout<<endl;
        }
        
    }
};
