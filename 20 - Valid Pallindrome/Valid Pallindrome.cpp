class Solution {
public:
    bool isPalindrome(string s) {
        string cpa = "";
        if (s.size() == 0) {   //string is empty return true
            return true;
        }
        for (int i = 0; i < s.size(); i++) {   
            if (s[i] >= 'A' && s[i] <= 'Z') {    //remove symbols and convert to lowercase into new string
                cpa.push_back(s[i] + 32);
            } else if ((s[i] >= 'a' && s[i] <= 'z') ||
                       (s[i] >= '0' && s[i] <= '9')) {
                cpa.push_back(s[i]);

            } else {
            }
        }
        if (cpa.size() == 0) {
            return true;
        }
        int mid = cpa.size() / 2;   //find mid and conpare from back to the front and return it is pallidrome or not
        bool check = false;
        int k = 0;
        for (int i = cpa.size() - 1; i >= mid; i--) {
            if (cpa[i] != cpa[k]) {
                return false;
            } else {
                check = true;
            }
            k++;
        }
        return check;
    }
};