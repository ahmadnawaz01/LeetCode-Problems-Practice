class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> occur(256,-1);     //create integer array of 256 slot initialized with -1
        int start=0;   //left side of window
        int length=0;

        for(int i=0;i<s.length();i++)  //iterate through the string
        {
            char curr=s[i];  //current character in the string
            if(occur[curr]>=start)  //check if the character in duplicate come before 
            {
                start=occur[curr]+1;
            }
            occur[curr]=i;  //save occurence of each charcter


            length=max(length,i-start+1);  //store the max length on each step
        }
        return length;
    }
};