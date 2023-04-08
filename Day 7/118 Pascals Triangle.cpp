// Given an integer numRows, return the first numRows of Pascal's triangle.
// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

// Example 1:

// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);
        
        for(int i=0;i< numRows;i++) // traversing to n rows
        {
            r[i].resize(i+1); //seetting up the size of array by+1 
                r[i][0] =r[i][i]=1; //setting up the last n 1st element as 1
        for(int j=1;j<i;j++)  // linearly traverse for i number of columns 
            r[i][j]=r[i-1][j-1]+r[i-1][j];
        }
        return r;
    }
};
