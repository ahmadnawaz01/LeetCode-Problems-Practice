class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool endspaces = false;
        int n = s.size();
        while (s[n - 1] == ' ' && n > 0) {    //if spaces at the end remove that 
            n--;
        }
        for (int i = n - 1; i >= 0; i--) {    //then just count the last word till the space comes
            if (s[i] == ' ') {
                break;
            }
            count++;
        }
        return count;  //just return that
    }
};