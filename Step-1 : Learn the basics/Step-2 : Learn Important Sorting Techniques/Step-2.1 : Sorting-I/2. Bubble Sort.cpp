// GFG
/*
Given an Integer N and a list arr. Sort the array using bubble sort algorithm.
Example 1:

__________________________________
Input: 
N = 5
arr[] = {4, 1, 3, 9, 7}
Output: 
1 3 4 7 9
__________________________________
*/


// Time Complexity: O(N*N)
class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
         for(int i=1;i<n;i++){
            for(int j=0;j<n-i;j++){
              if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
};
