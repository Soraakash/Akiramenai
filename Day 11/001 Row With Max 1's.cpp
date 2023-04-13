// Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

// Example 1:
// Input: 
// N = 4 , M = 4
// Arr[][] = {{0, 1, 1, 1},
//            {0, 0, 1, 1},
//            {1, 1, 1, 1},
//            {0, 0, 0, 0}}
// Output: 2
// Explanation: Row 2 contains 4 1's (0-based
// indexing).

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int max = INT_MAX;
        int ans = -1;
        for(int i=0;i<n;i++){
            int index = lower_bound(arr[i].begin(),arr[i].end(),1)-arr[i].begin();
            if(index<m){
                if(index<max){
                    max = index;
                    ans = i;
                }
            }
        }
        return ans;
	}

};
