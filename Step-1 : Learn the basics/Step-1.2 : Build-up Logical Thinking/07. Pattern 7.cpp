/*
Input: 5

Output:
    *
   ***  
  *****
 *******
*********

*/

class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            //for printing space
            for(int j=1;j<=(n-i);j++){
                cout<<" ";
            }
            
            //for printing star
            for(int k=1;k<=(i*2)-1;k++){
                cout<<"*";
            }
            
            cout<<endl;
        }
    }
};
