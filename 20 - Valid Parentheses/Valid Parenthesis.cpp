class Solution {
public:
    bool isValid(string s) {
        stack <char> p;   //make a character stack
        bool check=true;  //make check
        for(int i=0;i<s.size();i++)   //itereate through string size
        {
            if(s[i]=='{'||s[i]=='['||s[i]=='(')   //if opening backet push to stack
            {
                p.push(s[i]);
            }
            else   //if closing check if it is in stack pop it correct bracket or just make check false
            {
                if(p.empty())   //if stack is empty means string is invaid check false
                {
                    check=false;
                    break;
                }
                if(p.top()=='('&&s[i]!=')'||p.top()=='['&&s[i]!=']'||p.top()=='{'&&s[i]!='}')  //check if top of stack is not the current closing bracket then check false and break it 
                {
                    check=false;
                    break;
                }
                 p.pop();  // otherwise pop from the stack means corresponding closing bracket is available
                 check=true;
            }
        }
        if(!p.empty())  //means string has not complete brackets or stack has remaining opening bracket 
        {
            return false;
        }
        else
        {
           return check;   //now just return 
        }    
    }
};