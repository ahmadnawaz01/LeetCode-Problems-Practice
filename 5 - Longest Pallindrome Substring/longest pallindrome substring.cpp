class Solution {
public:
   void expand(string t,int l,int r,int &bestleft,int &bestright)
   {
    while(l>=0 && r<t.length() && t[l]==t[r])  //it check the left and right are equal and if not it breaks means pallindrome breaks 
    {
        l--;
        r++;
    }
    l++;
    r--;
    if(r-l+1>bestright-bestleft+1)  //this check for the longest pallindrome in previous records of pallindrome
    {
        bestleft=l;
        bestright=r;
    }
   }

    string longestPalindrome(string s) {
    int start=0;

    int bestleft=0,bestright=0;   

    for(int i=0;i<s.length();i++)
    {
        expand(s,i,i,bestleft,bestright);  //for odd center is i left and right is i
        expand(s,i,i+1,bestleft,bestright); //for even left is i and right is i+1 equals
    }
    string result="";
    for(int i=bestleft;i<=bestright;i++)   //this store result of longest pallindrome
    {
        result.push_back(s[i]);
    }
    return result;
    }

};