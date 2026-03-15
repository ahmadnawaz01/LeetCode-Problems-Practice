class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;   //a vector to store triplet result

        sort(nums.begin(),nums.end());  //this fun sort an array

        for(int i=0;i<nums.size()-2;i++)  //that the iterator
        {
            if(i>0 && nums[i]==nums[i-1])  //this skip if i and i-1 are same becuz it make the same triplets
            {
                continue;
            }
           
            int left=i+1;  //take the i+1 left
            int right=nums.size()-1;  //take the right end pointer
            while(left<right)  //condition
            {
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==0)  //if found triplet
                {
                    result.push_back({nums[i],nums[left],nums[right]}); //add to reult
                    left++;  //shrink the window left and right
                    right--;
                    while(left<right && nums[left]==nums[left-1]) //if the left pointer is same as left-1  it alse give same triplet and we skip 
                    {
                        left++;
                    }
                    while(left<right && nums[right]==nums[right+1]) //if the right ponter is same as right+1 we also skip that
                    {
                        right--;
                    }

                }
                else if(sum<0)  //if sum is less than zero means we need to increse left pointer
                {
                    left++;
                }
                else  //otherwise right pointer
                {
                    right--;
                }
            }
        }
            return result;  //just return the result
    }
};