/*
Input: 5

Output:

*********
 *******
  *****
   ***
    *

*/

class Solution{
public:
	
	void printTriangle(int n) {
	     //outer loop
	     for(int i=1;i<=n;i++){
	         //for printing space
	         for(int j=1;j<=(i-1);j++){
	           //  j = 1, i = 1
	           cout<<" ";
	         }
	         
	         //for ptinting star
	         for(int k=1;k<=(((n-i)*2)+1);k++){
	             cout<<"*";
	         }
	         cout<<endl;
	     }
	}
};
