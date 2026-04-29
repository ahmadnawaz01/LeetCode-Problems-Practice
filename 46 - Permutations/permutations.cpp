class Solution {
public:
    void solveperm(vector<int>& n, vector<vector<int>>& ans, 
                   vector<int>& path, vector<bool>& used)
    {
        if(path.size() == n.size())  //base case 
        {
            ans.push_back(path);  //add  the path to answer final 
            return;  //return from that
        }

        for(int i = 0; i < n.size(); i++)  //loop of size n
        {
            if(!used[i])  //check in boolean vector if numebr is used
            {
                used[i] = true;  //make it true
                path.push_back(n[i]);  //add to path

                solveperm(n, ans, path, used);  //recusive call

                path.pop_back();  //backtrack pop
                used[i] = false;  //make it false becasue we pop this
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> answer;  //solve all permutation
        vector<int> path;  //stores path
        vector<bool> used(nums.size(), false);  //default make all false occurence

        solveperm(nums, answer, path, used);
        return answer;
    }
};