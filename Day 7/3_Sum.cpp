// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
// Notice that the solution set must not contain duplicate triplets.


// Example 1:
// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: 
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i==0 || (i>0 && nums[i] != nums[i-1]))
            {
                int lo = i+1;
                int hi = n-1;
                int sum = 0 - nums[i];

                while(lo<hi)
                {
                    if(nums[lo] + nums[hi] == sum)
                    {
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[hi]);

                        res.push_back(temp);
                        while(lo<hi && nums[lo] == nums[lo+1])lo++;
                        while(lo<hi && nums[hi] == nums[hi-1])hi--;
                        
                        lo++;
                        hi--;

                    }
                    else if(nums[lo] + nums[hi] <sum)
                        lo++;
                    else
                        hi--; 
                }
            }
        }
        return res;
    }
};
