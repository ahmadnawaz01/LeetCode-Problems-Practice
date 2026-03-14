class Solution {
public:
    bool isMatch(string s, string p) {

        int m = s.length();   //takes the length of the string
        int n = p.length();   //takes the len of the pattern 

        vector<vector<bool>> dp(n+1, vector<bool>(m+1, false)); //make vector 2d array and initialized with false

        for(int i=0;i<=n;i++)  //i for pattern
        {
            for(int j=0;j<=m;j++) //col for string
            {
                if(i==0 && j==0)   //both null is always true
                {
                    dp[i][j] = true;
                }
                else if(i==0)  //null to all string pattern column is always false
                {
                    dp[i][j] = false;
                }
                else if(j==0) //it match the null string to the pattern
                {
                    if(i>=2 && p[i-1]=='*')  //if any char * comes it will check 2 rows up 
                        dp[i][j] = dp[i-2][j];
                    else
                        dp[i][j] = false;
                }
                else
                {
                    char pch = p[i-1];   //takes the character 
                    char sch = s[j-1];

                    if(pch=='*')  //if parttern is * 
                    {
                        dp[i][j] = dp[i-2][j];  //we check 2 rows up or

                        char pc = p[i-2];
                        if(pc=='.' || pc==sch)  //check if second last pattern ch is . or == to string 
                        {
                            dp[i][j] = dp[i][j] || dp[i][j-1];  //we take the bool value of second last column
                        }
                    }
                    else if(pch=='.' || pch==sch)  //if pattern ch is . or == to we simply take the diagonal value of boolean
                    {
                        dp[i][j] = dp[i-1][j-1];
                    }
                    else  //if not equal simply make it false
                    {
                        dp[i][j] = false;
                    }
                }
            }
        }

        return dp[n][m];  
    }
};