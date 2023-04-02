// There are two mice and n different types of cheese, each type of cheese should be eaten by exactly one mouse.

// A point of the cheese with index i (0-indexed) is:

// reward1[i] if the first mouse eats it.
// reward2[i] if the second mouse eats it.
// You are given a positive integer array reward1, a positive integer array reward2, and a non-negative integer k.

// Return the maximum points the mice can achieve if the first mouse eats exactly k types of cheese.

  
// Example 1:
// Input: reward1 = [1,1,3,4], reward2 = [4,4,1,1], k = 2
// Output: 15
// Explanation: In this example, the first mouse eats the 2nd (0-indexed) and the 3rd types of cheese, and the second mouse eats the 0th and the 1st types of cheese.
// The total points are 4 + 4 + 3 + 4 = 15.
// It can be proven that 15 is the maximum total points that the mice can achieve.

class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
    vector<int> v;
    long long sum = 0;
    for (int i = 0; i < reward1.size(); i++) {
        v.push_back(reward1[i] - reward2[i]);
        sum += reward2[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < k; i++)
        sum += v[i];

    return sum;
    }
};
