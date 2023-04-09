// Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".

// A string is palindromic if it reads the same forward and backward.

// Example 1:
// Input: words = ["abc","car","ada","racecar","cool"]
// Output: "ada"
// Explanation: The first string that is palindromic is "ada".
// Note that "racecar" is also palindromic, but it is not the first.

class Solution {
public:
    bool check(string str)
    {
        string s = str;
        reverse(s.begin(),s.end());
        return (s == str);
    }
    string firstPalindrome(vector<string>& words) {
        string t = "";
        for(int i = 0 ;i<words.size();i++)
        {
            if(check(words[i]))
            {
                t = words[i];
                break;
            }
        }
        return t;
    }
};
