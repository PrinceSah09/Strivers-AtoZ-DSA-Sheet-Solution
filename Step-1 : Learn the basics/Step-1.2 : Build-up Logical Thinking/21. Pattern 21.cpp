/*
Input: 4

Output:
****
*  *
*  *
****

*/

class Solution {
  public:
    void printSquare(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==1 || i==n || j==1 || j==n){
                    cout<<"* "; 
                }
                else cout<<"  ";
            }
            cout<<endl;
        }
    }
};
