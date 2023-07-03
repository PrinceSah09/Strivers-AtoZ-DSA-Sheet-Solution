// GFG
/*
Given a non-empty array of integers, find the top k elements which have the highest frequency in the array. If two numbers have the 
same frequency then the larger number should be given preference. 

Note: Print the elements according to the frequency count (from highest to lowest) and if the frequency is equal then larger number will be given preference.

____________________________________
Example 1:

Input:
N = 6
nums = {1,1,1,2,2,3}
k = 2
Output: {1, 2}
____________________________________
*/

//Time Complexity: O(N)
//Space Complexity: O(N)

class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        //creating a map
        map<int,int>mp;
        for(int it: nums)mp[it]++;
        
        //creating priority queue pair 
        priority_queue<pair<int,int>>pq;
        for(auto it: mp){
            pair<int,int>p;
            p.first = it.second;
            p.second = it.first;
            pq.push(p);
        }
        
        vector<int>v;
        while(k--){
            if(!pq.empty()){
                v.push_back(pq.top().second);
                pq.pop();
            }
        }
        return v;
    }
};

___________________________________________________________________________________

//Leetcode: Same as GFG's Solution :)
