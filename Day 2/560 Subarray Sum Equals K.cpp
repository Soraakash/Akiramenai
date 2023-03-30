// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
  
// A subarray is a contiguous non-empty sequence of elements within an array.

// Example 1:
// Input: nums = [1,1,1], k = 2
// Output: 2

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     unordered_map<int,int> mp;
     mp[0] = 1;
     int sum = 0 ,count= 0;
        int n = nums.size();
     for(int i=0;i<n;i++)
     {
         sum = sum + nums[i];
         count = count + mp[sum-k];
         mp[sum]++;
     }
        return count;
    }
};
