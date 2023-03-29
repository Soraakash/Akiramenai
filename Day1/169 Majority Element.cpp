// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Example 1:

// Input: nums = [3,2,3]
// Output: 3

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count=0;
       int ans;
       for(int i=0;i<nums.size();i++)
       {
            if(count==0)
            {
                ans = nums[i];
                count = 1;
            }
            else if(nums[i] == ans)
                count++;
            else
                count--;
       }
        return ans;
    }
};
