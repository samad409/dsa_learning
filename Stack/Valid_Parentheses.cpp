/*You are given a string s consisting of the following characters: '(', ')', '{', '}', '[' and ']'.

The input string s is valid if and only if:

Every open bracket is closed by the same type of close bracket.
Open brackets are closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
Return true if s is a valid string, and false otherwise.

Example 1:

Input: s = "[]"

Output: true
Example 2:

Input: s = "([{}])"

Output: true*/

class Solution {
public:
    bool isValid(string s) {
        int size = s.size();
        unordered_map<char,char> hash{
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        std::stack<char> stack;
        if(size%2!=0) return false;
        
        for (char c : s) {
            if (hash.count(c)) {
                if (!stack.empty() && stack.top() == hash[c]) {
                    stack.pop();
                } else {
                    return false;
                }
            } else {
                stack.push(c);
            }
        }
        return stack.empty();

    }
};
