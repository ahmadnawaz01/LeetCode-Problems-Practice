class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())  //if empty return count 0
        {
            return 0;
        }
        int count=1;     //at least one unique elemnet is presenet if it non empty
        for(int i=1;i<nums.size();i++)  //loop from 1 to n becuz 1 unique element is already present
        {
            if(nums[i]!=nums[count-1]) //now we compare if it same (dup) then skip if unique comparing with i index and replace that with count index and increment it
            {
                nums[count]=nums[i];
                count++;
            }
        }
        return count;   //now just return the count
    }
};