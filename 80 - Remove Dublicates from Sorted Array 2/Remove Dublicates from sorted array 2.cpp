class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())    //if it is empty return that
        {
            return 0;
        }
        int k=1;   //assume 1 is already we have to compare with previous is same to count
        int count=1;
        for(int i=1;i<nums.size();i++)  //iterate through all array
        {
            if(nums[i]==nums[i-1])   //if same number count++
            {
                count++;
            }
            else  //reset it
            {
                count=1;
            }
            if(count<=2)   //if count less than 3 add in array otherwise not
            {
                nums[k]=nums[i];
                k++;
            }
        }
        return k; //just return this k
    }
};