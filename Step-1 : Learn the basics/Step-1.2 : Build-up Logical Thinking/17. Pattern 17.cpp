/*
Input: 4
Output:
   A
  ABA
 ABCBA
ABCDCBA

*/

class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            
            //for left side
            for(int j=1;j<=(n-i);j++){
                cout<<" ";
            }
            for(char k='A';k<='A'+i-1;k++){
                cout<<k;
            }
                  
            //for right side 
            if(i>1){
                for(char j=('A'+i)-2;j>='A';j--){
                    cout<<j;
                }
            } 
            cout<<endl;
        }
    }
};
