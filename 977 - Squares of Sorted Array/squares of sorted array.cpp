class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n =nums.size(); //store the size of array
        vector<int>res(n,0);  //make a result dublicate array initialize with zero
        int left=0; //left pointer initailes
        int right=n-1; //right pointer
        int i=right; //i index right of result array we stores value from right
        while(i>-1)  //when all result array is filled
        {
            if((nums[left]*nums[left])>(nums[right]*nums[right]))  //if left value square is greater than right place 
            {
                res[i]=nums[left]*nums[left]; //their square in the right of result array 
                i--;  //minus the result pointer
                left++;  //increment the left pointer of actual array
            }
            else
            {
                res[i]=nums[right]*nums[right];  //if right is bigger
                i--;  //minus the result pounter
                right--; //decremneted the right pointer of actual array
            }
        }
        return res;  //return the result
        }
};