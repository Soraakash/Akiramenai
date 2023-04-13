// A peak element is an element that is strictly greater than its neighbors.
// Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.
// You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.
// You must write an algorithm that runs in O(log n) time.

// Example 1:
// Input: nums = [1,2,3,1]
// Output: 2
// Explanation: 3 is a peak element and your function should return the index number 2.

class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int  n = arr.size();
       int low = 0;
       int high = n-1;
       int mid;
       int ans = 0;
       while(low<=high)
       {
           mid = low + (high - low)/2;
           if((mid == 0 || (arr[mid-1]<=arr[mid])) && (mid == n-1 || (arr[mid+1]<=arr[mid])))
                return mid;
           else if(arr[mid+1]>arr[mid])
                low = mid + 1;
           else
            high = mid - 1;
       }
       return -1;  

    }
};
