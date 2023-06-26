/*
Input: 5

Output:
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

*/

 class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            
            //for left side
            for(int j=1;j<=i;j++){
               cout<<j<<" ";
            }
            //printing a space
            for(int k=1;k<=n-i;k++){
                cout<<"  ";
            }
        
            
            
            //for right side
            
            //pritning space
            for(int j=1;j<=(n-i);j++){
                cout<<"  ";
            }
            //printing number
            for(int k=i; k>=1;k--){
                cout<<k<<" ";
            }
            cout<<endl;
        }
    }
};
