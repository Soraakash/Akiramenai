// Given an array of integers arr, a lucky integer is an integer that has a frequency in the array equal to its value.
// Return the largest lucky integer in the array. If there is no lucky integer return -1.

// Example 1:

// Input: arr = [2,2,3,4]
// Output: 2
// Explanation: The only lucky number in the array is 2 because frequency[2] == 2.

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
            mp[arr[i]]++;
        int maxi = -1;
        for(int i=0;i<arr.size();i++)
        {
            if(mp[arr[i]] == arr[i])
                maxi = max(maxi,arr[i]);
        }

        return maxi;
    }
};
