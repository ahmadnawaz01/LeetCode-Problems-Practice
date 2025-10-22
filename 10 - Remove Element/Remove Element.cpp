class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int nonvalelement=0;   //default !=val elements =0
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)  //check those not equal to and add to the nonvalelement index and increment it
            {
                nums[nonvalelement]=nums[i];
                nonvalelement++;
            }
        }
        return nonvalelement;  //return their number
    }
};