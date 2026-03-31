class Solution {
public:
   /* int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)   //just iterate through the array 
        {
            if(nums[i]==target)  //because it is sorted and rotated so the actuall number is its index before rotation
            {
                return i;  //return index if found 
            }
        }
        return -1;  //return -1 if not found
    } /*   complexity is o(n)
   */ int search(vector<int>& nums, int target)
    {
        int start=0; int end=nums.size()-1;  //binary search from start is 0 and end is size-1
        while(start<=end)  //condition till start <=end
        {
            int mid=start+(end-start)/2;  //find mid on each iteration
            if(nums[mid]==target)  //if target found return the mid 
            {
                return mid;
            }
            if(nums[start]<=nums[mid])  //let chceck if nums[start] is less than nums[mid] means left is sorted
            {
                if(nums[start]<=target &&  target <nums[mid])  //let check if number is in the range of start and mid 
                {
                    end=mid-1;  //upadte the new end
                }
                else //update the new start
                {
                    start=mid+1;
                }
            }
            else  //if right is sorted
            {
                if(target>nums[mid] && target<=nums[end])  //check if number i in that rannge
                {
                    start=mid+1;  //update the new start
                }
                else
                {
                    end=mid-1;  //else update the new end
                }
            }
        }
        return -1;  //if not found return simply -1    
    }  //solution is n(log(N))
};