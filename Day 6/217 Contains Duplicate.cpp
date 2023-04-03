// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
  
// Example 1:

// Input: nums = [1,2,3,1]
// Output: true

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i =0;i<nums.size();i++)
        
            mp[nums[i]]++;
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]>=2)
                return true;
        }
        return false;
    }
};
