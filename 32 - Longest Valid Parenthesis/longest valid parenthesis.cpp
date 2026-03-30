class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> ss;  //make a stack of integers
        ss.push(-1);  //initially push -1 for correct length
        int count=0;  //that the count
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')  //if '(' push their index to stack
            {
                ss.push(i);
            }
            else
            {
                ss.pop();  //pop() and check ss is  empty push index of ')' to stack
                if(ss.empty())
                {
                    ss.push(i);
                }
                else  //otherwise get max of count and i-top() into count
                {
                    count=max(count,i-ss.top());
                }
            }
        }
        return count;  //just return that
         }
};