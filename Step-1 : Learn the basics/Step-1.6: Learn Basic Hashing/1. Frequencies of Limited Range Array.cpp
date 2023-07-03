// GFG
/*
QUESTION: 
Given an array A[] of N positive integers which can contain integers from 1 to P where elements can be repeated or can be absent from the array.
Your task is to count the frequency of all elements from 1 to N.

Note: The elements greater than N in the array can be ignored for counting and do modify the array in-place.

___________________________________
Example 1:

Input:
N = 5
arr[] = {2, 3, 2, 3, 5}
P = 5

Output:
0 2 2 0 1
__________________________________
Explanation: 
Counting frequencies of each array element
We have:
1 occurring 0 times.
2 occurring 2 times.
3 occurring 2 times.
4 occurring 0 times.
5 occurring 1 time.
*/

//Time Complexity: O(N)
//Space Complexity: O(1)
class Solution{
    public:
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        unordered_map<int,int>mp;
        for(int it: arr)mp[it]++;
        for(int i=0;i<N;i++){
            if(mp.find(i+1)!=mp.end())arr[i] = mp[i+1];
            else arr[i] = 0;
        }
    }
};
