// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int i1 = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        int i2 = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
        if(i1<nums.size() && nums[i1] == target){
            v.push_back(i1);
            v.push_back(i2-1);
        } 
        else{
            v.push_back(-1);
            v.push_back(-1);
        }
        return v;   
    }
};
