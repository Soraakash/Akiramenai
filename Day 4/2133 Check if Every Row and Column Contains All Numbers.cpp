// An n x n matrix is valid if every row and every column contains all the integers from 1 to n (inclusive).
// Given an n x n integer matrix matrix, return true if the matrix is valid. Otherwise, return false.
  
// Example 1:

// Input: matrix = [[1,2,3],[3,1,2],[2,3,1]]
// Output: true
// Explanation: In this case, n = 3, and every row and column contains the numbers 1, 2, and 3.
// Hence, we return true.


// Failed attempt:Tried to take sum of every row and matching with global sum
  
class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
         int n = matrix.size();
        vector<set<int>> rows(n), cols(n);
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                
                int curr = matrix[i][j] ;
                if (rows[i].count(curr) || cols[j].count(curr)) 
                    return false;
                
                rows[i].insert(curr);
                cols[j].insert(curr);
            }
        }
        
        return true;
    }
};  
