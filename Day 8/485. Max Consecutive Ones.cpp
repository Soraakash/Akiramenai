// Given a binary array nums, return the maximum number of consecutive 1's in the array.

// Example 1:
// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int count = 0;
      int ct = 0;
      int n = nums.size();
      for(int i=0;i<n;i++)
      {
          if(nums[i]==0)
              ct=0;
          else
          {
              ct++;
              count = max(count,ct);
          }
      }
        return count;   
    }
};
