// Given an integer array nums, return the largest perimeter of a triangle with a non-zero area,
// formed from three of these lengths. If it is impossible to form any triangle of a non-zero area, return 0.

// Example 1:
// Input: nums = [2,1,2]
// Output: 5
// Explanation: You can form a triangle with three side lengths: 1, 2, and 2.

class Solution {
public:
    int largestPerimeter(vector<int>& n) {
        sort(n.begin(), n.end());
        for(int i = n.size()-3; i >= 0; i--)
        {
            if(n[i] + n[i+1] > n[i+2])
            {
                return n[i] + n[i+1] + n[i+2];
            }
        }
        return 0;
    }
};
