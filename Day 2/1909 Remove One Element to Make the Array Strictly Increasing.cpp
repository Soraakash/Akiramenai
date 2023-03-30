// Given a 0-indexed integer array nums, return true if it can be made strictly increasing after removing exactly one element,
// or false otherwise. If the array is already strictly increasing, return true.

// The array nums is strictly increasing if nums[i - 1] < nums[i] for each index (1 <= i < nums.length).

// Example 1:

// Input: nums = [1,2,10,5,7]
// Output: true
// Explanation: By removing 10 at index 2 from nums, it becomes [1,2,5,7].
// [1,2,5,7] is strictly increasing, so return true.

class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
      int AisSorted = 1, BisSorted = 1, size = nums.size();
        vector<int> a(size, 0), b(size, 0);
        
        for(int i = 0; i < size; i++){
            a[i] = b[i] = nums[i];
        }
        
        for(int i = 0; i < size-1; i++){
            if(nums[i] >= nums[i+1]){
                a.erase(a.begin()+i);
                b.erase(b.begin()+i+1);
                break;
            }
        }
        
        for(int i = 0; i < size-2; i++){
            if(a[i] >= a[i+1]){
                AisSorted = 0;
            }
            
            if(b[i] >= b[i+1]){
                BisSorted = 0;
            }
            
            if(AisSorted == 0 && BisSorted == 0){
                return false;
            }
        }
        return true;  
    } 
};
