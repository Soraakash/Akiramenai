// Given an array of integers nums, sort the array in increasing order based on the frequency of the values.
// If multiple values have the same frequency, sort them in decreasing order.

// Return the sorted array.

// Example 1:
// Input: nums = [1,1,2,2,2,3]
// Output: [3,1,1,2,2,2]
// Explanation: '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.

class Solution {
public:
    struct compare
    {
        bool operator()(pair<int,int> a,pair<int,int>b)
        {
            if(a.first == b.first) return a.second<b.second;
            return a.first>b.first;
        }
    };

    vector<int> frequencySort(vector<int>& nums) {
        // Frequency of each element.
    unordered_map<int,int> map;
    for(auto x:nums)
        map[x]++;

    priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq;
    for(auto x:map)
    {
        pq.push({x.second,x.first});
    }
    vector<int> w;
    while(!pq.empty()){
        for(int i=0;i<pq.top().first;i++)
            w.push_back(pq.top().second);
        pq.pop();
    }
    return w; 
    
    }
};
