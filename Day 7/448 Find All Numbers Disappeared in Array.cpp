// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

// Example 1:
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [5,6]

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>res{};
        
		// Negative elements (Marking foud)
        for(int i{}; i<n; ++i){
            
            int idx = abs(nums[i]) - 1; // since 0-based indexing
            nums[idx] = (nums[idx]>0)? -nums[idx]:nums[idx];
        }
        
		// Store positive index+1 as missing elements
        for(int i{}; i<n; ++i){
            if(nums[i] > 0)
                res.push_back(i+1);
        }
        
        return res;
    }
};
