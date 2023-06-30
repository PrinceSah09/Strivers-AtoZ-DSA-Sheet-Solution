//GFG -> Uploaded Wrong Question link in Sheet

// Code Studio
/*
Problem Statement
Sample Input 1 :7

Sample Output 1 :
true
 
*/

#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	bool x = false;
	for(int i=2;i<n;i++){
		if(n%i==0){
			x = true;
			cout<<"false";
			break;
		}
	}
	if(x==false)cout<<"true";
}
