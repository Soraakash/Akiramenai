// You are given an array of strings names, and an array heights that consists of distinct positive integers. Both arrays are of length n.
// For each index i, names[i] and heights[i] denote the name and height of the ith person.
// Return names sorted in descending order by the people's heights.


// Example 1:
// Input: names = ["Mary","John","Emma"], heights = [180,165,170]
// Output: ["Mary","Emma","John"]
// Explanation: Mary is the tallest, followed by Emma and John.

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string>mp;
        for(int i=0;i<heights.size();i++)
        {
            mp[heights[i]] = names[i];
        }
        sort(heights.begin(),heights.end());
        reverse(heights.begin(),heights.end());
        vector<string>v;
        for(int i=0;i<heights.size();i++)
        {
            v.push_back(mp[heights[i]]);
        }
        return v;
    }
};