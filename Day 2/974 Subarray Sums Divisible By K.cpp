// Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.

// A subarray is a contiguous part of an array.

// Example 1:

// Input: nums = [4,5,0,-2,-3,1], k = 5
// Output: 7
// Explanation: There are 7 subarrays with a sum divisible by k = 5:
// [4, 5, 0, -2, -3, 1], [5], [5, 0], [5, 0, -2, -3], [0], [0, -2, -3], [-2, -3]

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            int remaining =sum%k;
            if(remaining<0) // for handling if remainder comes out to be negative
                remaining+=k;
            count=count+mp[remaining];
            mp[remaining]++;
        }
        return count;
    }
};
