class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();  //get the nums size
        vector<vector<int>>answer;  //to store the quadripletes answer
        sort(nums.begin(),nums.end()); //that store the vector to able to apply the two pointer thing
        for(int i=0;i<n-3;i++)  //outer first fixed value interator
        {
            if(i>0 && nums[i]==nums[i-1])  //check for dublicates and skip them
            {
                continue;
            }
            for(int j=i+1;j<n-2;j++)  //that the second fixed iterator j
            {
                if(j!=i+1 && nums[j]==nums[j-1])  //it also check for same output and skip them
                {
                    continue;
                }
                int k=j+1;  //left part of window
                int l=n-1;  //right part of the window
                while(k<l)
                {
                   long long sum=nums[i];
                   sum=sum+nums[j]; //callcalte the sum  //we are doing it indiviual becacuse the sum is done first in int and then save to long long varaible so it might be overflow that why we did this one by one
                   sum=sum+nums[k];
                   sum=sum+nums[l];
                    if(sum==target)  //if we found
                    {
                        vector<int>temp={nums[i],nums[j],nums[k],nums[l]};  //store the quadriplets and later save to man answer vector
                        answer.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1]) k++;  //checcks for dublicates and accordingly moves the pointer left and right acccording to the same value
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }
                    else if(sum<target)  //if less than the target we havwe to move the  left pointer
                    {
                        k++;
                    }
                    else  //otherwise the  left pointer
                    {
                        l--;
                    }
                }
            }
        }
        return answer;  //just retur the answer
    }
};