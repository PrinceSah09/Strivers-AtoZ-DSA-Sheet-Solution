/*
Input: 5

    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/


class Solution {
  public:
    void printDiamond(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=(n-i);j++){
                cout<<" ";
            }
            
            for(int k=1;k<=i;k++){
                cout<<"* ";
            }
            cout<<endl;
        }
        
        for(int i=1;i<=n;i++){
            
            for(int j=1;j<=i-1;j++){
                cout<<" ";
            }
            
            for(int k=1;k<=(n-i)+1;k++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};
