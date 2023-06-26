/*
Input: 5

Output:
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/


class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            
            //for left upper side 
            
            for(int j=1;j<=(n-i)+1;j++){
                cout<<"*";
            }
            //printing space 
            for(int k=1;k<=(i-1);k++){
                cout<<" ";
            }
            
            
            //for right upper
            //printing spaces
            for(int j=1;j<=(i-1);j++){
                cout<<" ";
            }
            //printing star
            for(int k=1;k<=n-i+1;k++){
                cout<<"*";
            } 
            cout<<endl;  
        }
      

       //for niche aane ke liye

    
        for(int i=1;i<=n;i++){
             //for left lower
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            
            
            //printing spaces
            for(int k=1;k<=n-i;k++){
                cout<<" ";
            }
            
            //printing spaces
            for(int j=1;j<=(n-i);j++){
                cout<<" ";
            }
            
            //printing star
            for(int k=1;k<=i;k++)cout<<"*";
            cout<<endl; 
        } 
    }
};
