// Given an array arr[] of size N, check if it is sorted in non-decreasing order or not. 

// Example 1:

// Input:
// N = 5
// arr[] = {10, 20, 30, 40, 50}
// Output: 1
// Explanation: The given array is sorted.

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        for(int i=0; i<n-1;i++)
       {
           if(arr[i]>arr[i+1])
            return false;
       }
       return true;
    }
};
