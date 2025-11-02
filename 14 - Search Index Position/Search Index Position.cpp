class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index=0; 
        bool found=false;  
        for(int i=0;i<nums.size();i++)
        {
            if(target==nums[i])   //if target found index saved
            {
                index=i;
                found=true;
                break;
            }
            if(nums[i]>target)  //if value in array is greater than target means the correct index need to be before that
            {
                index=i;
                found=true;
                break;
            }
        }
        if(found==false)  //if not found means greater and not in array then i will the size+1 index of array
        {
            return nums.size();
        }
        return index;
    }
    
};