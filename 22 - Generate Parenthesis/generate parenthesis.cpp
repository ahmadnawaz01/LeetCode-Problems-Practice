class Solution {
public:
   void solve(int open,int close,int n, string s,vector<string>& ans)
   {
    if(s.length()==n*2)   //means proper combination of open and closing brackets
    {
        ans.push_back(s);
        return;
    }
    if(open<n)  //means if n < to opening brakets add (
    {
        solve(open+1,close,n,s+"(",ans);
    }
    if(close<open)  //not closing bracket is always less than the opening
    {
        solve(open,close+1,n,s+")",ans);
    }
   }
    vector<string> generateParenthesis(int n) {
        vector<string> answer;
        solve(0,0,n,"",answer);  //recursiona and adding result in answer vector result
        return answer;
        
    }


};