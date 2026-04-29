class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();  //stores the size
        int i=n-2;  //save the size n-2 becasuse we are comapreing to n+1
        while(i>=0 && nums[i]>=nums[i+1])  //stop when i<0 or nums[i]<nums[i+1]
        {
            i--;  //find the breakpoint
        }
        if(i>=0)  //if the breakpoint avaiable
        {
            int j=n-1;  //again store the size
            while(nums[j]<=nums[i])  //now check the value that is greater than breakpoint
            {
                j--; 
            }
            swap(nums[i],nums[j]);  //just swap that
        }
        reverse(nums.begin()+i+1,nums.end());  //then just reverse the right side of breakpoint
    }
};