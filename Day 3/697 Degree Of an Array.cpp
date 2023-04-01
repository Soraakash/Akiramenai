// Given a non-empty array of non-negative integers nums, the degree of this array is defined as the maximum frequency of any one of its elements.
// Your task is to find the smallest possible length of a (contiguous) subarray of nums, that has the same degree as nums.

// Example 1:
// Input: nums = [1,2,2,3,1]
// Output: 2
// Explanation: 
// The input array has a degree of 2 because both elements 1 and 2 appear twice.
// Of the subarrays that have the same degree:
// [1, 2, 2, 3, 1], [1, 2, 2, 3], [2, 2, 3, 1], [1, 2, 2], [2, 2, 3], [2, 2]
// The shortest length is 2. So return 2.

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
    int maxx=0;
    
    map<int,int> count,start,end;
    for(int i=0;i<nums.size();i++)
    {
        if(count[nums[i]]==0)
        {
            start[nums[i]] = i;
            end[nums[i]] =i;
        }
        else
            end[nums[i]] =i;
        count[nums[i]]++;
        
    maxx = max(maxx,count[nums[i]]);
    }
        int length = INT_MAX;
    for(auto it : count){
        
        if(it.second==maxx)
            length = min(length, end[it.first]-start[it.first]+1);
    }
    
    return length;
        
    }
};
