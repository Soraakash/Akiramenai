// Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice.
// Find the two elements that appear only once. You can return the answer in any order.

// You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.

// Example 1:
// Input: nums = [1,2,1,3,2,5]
// Output: [3,5]
// Explanation:  [5, 3] is also a valid answer.

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xo = 0;
        for(auto i : nums) // taking XOR of all values in nums
            xo^=i;
        int pos = 0; 
        while(xo) // checking first set bit in xo
        {
            if(xo & (1 << pos)) break;
            pos++;
        }
        xo = (1 << pos); // making mask where the ith index is set 
        vector<int> ans(2,0); // separating in two groups with ith index is set and not
        for(auto i : nums)
        {
            if(xo & i) ans[0]^=i; // 
            else ans[1]^=i;
        }
        return ans;
    }
};
