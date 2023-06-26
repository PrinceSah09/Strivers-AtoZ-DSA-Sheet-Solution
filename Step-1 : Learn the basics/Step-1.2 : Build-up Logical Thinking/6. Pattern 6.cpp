/*
Input: 5

Output:
1 2 3 4 5
1 2 3 4
1 2 3 
1 2  
1 

*/

class Solution{
public:
	
	void printTriangle(int n) {
    //Approach-2
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<i-j+1<<" ";
        }
        cout<<endl;
    }
	    
	    
	    //Approach-1
	   for(int i=1;i<=n;i++){
	       for(int j=1;j<=n-i+1;j++){
	           cout<<j<<" ";
	       }
	      cout<<endl;
	   }
	}
};
