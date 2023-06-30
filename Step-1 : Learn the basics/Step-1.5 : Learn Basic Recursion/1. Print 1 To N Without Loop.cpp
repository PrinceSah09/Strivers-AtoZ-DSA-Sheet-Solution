// GFG

/*
Print numbers from 1 to N without the help of loops.

Example 1:

Input:
N = 10
Output: 1 2 3 4 5 6 7 8 9 10
*/

//Time Complexity: O(N)  
class Solution{
    public: 
    void printNos(int N)
    {
        if(N<=0)return;
        printNos(N-1);
        cout<<N<<" "; 
    }
};
