class Solution {
public:
    int binarys(vector<int>& nums,int t,bool flag)
    {
        int ans=-1;  //initailly ans =-1
        int start=0;int end=nums.size()-1;  //store start and end   
        while(start<=end)  //start <=end codntion
        {
            int mid=start+(end-start)/2;  //find mid
            if(nums[mid]==t)  //if target found 
            {
                ans=mid;  //save the mid
                if(flag==true)  //check flag of start if it true move to left till last find
                {
                    end=mid-1;
                }
                else  //if flag is false means we move to right for last
                {
                    start=mid+1;
                }
            }
            else if(t<nums[mid])  //update the end if target <mid
            {
                end=mid-1;
            }
            else  //upadte the start if target > mid
            {
                start=mid+1;
            }
        }
        return ans;  //return answer
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=binarys(nums,target,true); //binart seatch for start index
        int end=binarys(nums,target,false);  //binary seatch for end index
        return {start,end};
    }
};