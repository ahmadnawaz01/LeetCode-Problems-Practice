class Solution {
    void solve(string digit,string output,int i,vector<string>&ans,string mapping[]) 
    {
        if(i>=digit.length()) //bas case if combination size is equal to digit return that push to answer vecotre
        {
            ans.push_back(output);
            return;
        }
        int num=digit[i]-'0';  //convert to integer from digits in string form
        string value=mapping[num];   //take string mapped to number
        for(int j=0;j<value.length();j++)  //iterate over the first string 
        {
            output.push_back(value[j]);  //push to output
            solve(digit,output,i+1,ans,mapping);  //recursion call 
            output.pop_back();  //backtrack pop from output and ready for other function
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;   //that vectore store the answer
        if(digits.length()==0) return ans;   //if digits length is zero just return that

        int i=0;   //that the size of combination
        string output;  //that contains combination
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};  //that mapps to number s 2 to 9
        solve(digits,output,i,ans,mapping);  //calls the helper function
        return ans; 
    }
};