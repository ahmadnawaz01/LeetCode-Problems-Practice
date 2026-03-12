class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string cprefix="";
        if(strs.empty())  //if empty return empty string
        {
            return cprefix;
        }
        for(int i=0;i<strs[0].size();i++)   //take first letter of first string and match to other string one by one if they are in all then in add in common prefix and when not matched just returned it
        {
            char check=strs[0][i];
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j].size()<=i)
                {
                    return cprefix;
                }
                if(strs[j][i]!=check)
                {
                    return cprefix;
                }
            }
            cprefix=cprefix+check;
        }
        return cprefix;
    }
};