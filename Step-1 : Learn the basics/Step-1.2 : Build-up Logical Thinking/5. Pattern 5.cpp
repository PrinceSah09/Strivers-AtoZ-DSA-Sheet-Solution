/*

Input: 5

Output:
* * * * *
* * * * 
* * * 
* *  
* 


*/

class Solution{
public:
	
	void printTriangle(int n) {
	    
	   //using reverse loop
	   for(int i=n;i>=1;i--){
	       for(int j=i;j>=1;j--){
	           cout<<"* ";
	       }
	       cout<<endl;
	   }
	    
	    // Approach-2
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=n-i+1;j++){
	            cout<<"* ";
	        }
	        cout<<endl;
	    }
	}
};
