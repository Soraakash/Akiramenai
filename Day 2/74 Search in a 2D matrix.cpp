// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.
  
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int row,col;
     int r = matrix.size();
     int c = matrix[0].size();
     int low = 0;
     int high = r * c - 1;
     int mid;
        while(low<=high)
        {
            mid = low + (high - low)/2;
            row = mid/c;
            col = mid %c;
            int num = matrix[row][col];
            if(num == target)
                return true;
            if(target > num)
                low = mid + 1;
            else high = mid - 1;
        }
        return false;
        
    }
};
