// Given an integer array nums that does not contain any zeros, find the largest positive integer k such that -k also exists in the array.

// Return the positive integer k. If there is no such integer, return -1.

// Example 1:

// Input: nums = [-1,2,-3,3]
// Output: 3
// Explanation: 3 is the only valid k we can find in the array.

class Solution {
public:
    int findMaxK(vector<int>& nums) {
       unordered_map<int,int>mp;
       int ans=-1;
       for(int i=0;i<nums.size();i++)
       {
           if(mp.find(0-nums[i]) != mp.end())
               ans = max(ans,abs(nums[i]));
           mp[nums[i]]++;
       }
        return ans;
    }
};
