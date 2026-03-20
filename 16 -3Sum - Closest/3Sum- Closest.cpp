class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();   //store the size of array
        sort(nums.begin(),nums.end());  //sort the array so we use two pointer
        int ans = nums[0]+nums[1]+nums[2];  //inintailly save the first 3 items sums

        for(int i=0;i<nums.size();i++)  //the i pointer and the othe
        {
            int j=i+1;  //j and k are sliding window expland from the i left and right
            int k=n-1;
            while(j<k)  //chcek of j<k
            {
                int sum=nums[i]+nums[j]+nums[k];  //calculate triplet sum
                if(abs(sum-target)<abs(ans-target))  //check of new sum is closet upadte the ans
                {
                    ans=sum;
                }
                if(sum<target)  //if sum is less than target increase the left
                {
                    j++;
                }
                else if(sum>target)  //if sum is greter than decrease the right
                {
                    k--;
                }
                else  //if it is equal just return the sum
                {
                    return sum;
                }
            }
        }
        return ans;  //int he end return sum
    }
};