// Given two arrays of strings list1 and list2, find the common strings with the least index sum.
// A common string is a string that appeared in both list1 and list2.
// A common string with the least index sum is a common string such that if it appeared at list1[i]
// and list2[j] then i + j should be the minimum value among all the other common strings.

// Return all the common strings with the least index sum. Return the answer in any order.

// Example 1:
// Input: list1 = ["Shogun","Tapioca Express","Burger King","KFC"], list2 = ["Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"]
// Output: ["Shogun"]
// Explanation: The only common string is "Shogun".

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> mp,m;
        vector<string> v;
        int mini =INT_MAX;
        int mi;
        int sum;
        for(int i=0;i<list1.size();i++)
            m[list1[i]] = i;
        for(int j=0;j<list2.size();j++)
        {
            if(m.find(list2[j]) != m.end())
            {
                sum = j + m[list2[j]];
                if(sum<mini)
                {
                    v.clear();
                    mini = sum;
                    v.push_back(list2[j]);
                }
                else if( sum == mini)
                    v.push_back(list2[j]);
            }
        }
        return v;
    }
};
