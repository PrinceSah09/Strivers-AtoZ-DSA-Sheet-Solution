/*
Example 1:

Input: 5

Output:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

class Solution {
  public:
    void printSquare(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<"* ";
            }
            cout<<endl; 
        } 
    }
};
