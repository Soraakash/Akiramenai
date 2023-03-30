// Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

// Example 1:
// Input: nums = [2,2,3,2]
// Output: 3
  
// Intitution : We will for every bit find the total number of 1's and 0's bit and we will generate our number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ans=0;
        for(int i=0;i<32;i++)
        {
            int bit=1<<i;
            int c=0;
            for(int j:nums)
            {
                if(j&bit)
                c++;
            }
            if(c%3)
            ans= ans | bit;
        }
        return ans;
    }
};
