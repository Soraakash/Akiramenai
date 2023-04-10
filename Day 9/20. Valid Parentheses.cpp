// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 

// Example 1:

// Input: s = "()"
// Output: true

class Solution {
public:
    bool isValid(string s) {
      stack<char> stk;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                stk.push(s[i]);
            }
            else if(s[i] == ')') {
                if(stk.empty() || stk.top() != '('){
                    return false;
                }
                stk.pop();
            }
            else if(s[i] == ']') {
                if(stk.empty() || stk.top() != '['){
                    return false;
                }
                stk.pop();
            }
            else if(s[i] == '}') {
                if(stk.empty() || stk.top() != '{'){
                    return false;
                }
                stk.pop();
            }
        }
        if(!stk.empty()){
            return false;
        }
        return true;
        
    }
};
