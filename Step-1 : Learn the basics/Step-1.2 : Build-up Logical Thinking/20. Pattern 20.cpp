/*

Input: 5

Output:
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

class Solution {
  public:
    void printTriangle(int n) { 
      
        if(n==2){  //Ye GFG ke compiler ke karn dena pda :\
            cout<<"*  *"<<endl<<"****"<<endl<<"*  *"<<endl; 
        }
          
        else {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++)cout<<"*";
            for(int k=1;k<=(n-i);k++)cout<<" ";
            
            for(int j=1;j<=(n-i);j++)cout<<" ";
            for(int k=1;k<=i;k++)cout<<"*";
            cout<<endl;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=(n-i);j++)cout<<"*";
            for(int k=1;k<=i;k++)cout<<" ";
        
            for(int j=1;j<=i;j++)cout<<" ";
            for(int k=1;k<=n-i;k++)cout<<"*";
            cout<<endl;
        }
        }
    }
};
