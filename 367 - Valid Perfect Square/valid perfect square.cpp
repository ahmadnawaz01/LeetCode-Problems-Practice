class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)  //1 is always a complete square
        {
            return num;
        }
        int start=1;
        int end=num;  
        while(start<=end)  //condition of binary search
        {
            long long mid=start+(end-start)/2;  //find the mid
            if(mid*mid==num)  //if mid*mid is equal to number return true
            {
                return true;
            }
            else if(mid*mid<num)  //if mid*mid < num move to right side
            {
                start=mid+1;
            }
            else  //else move to left side
            {
                end=mid-1;
            }
        }
        return false;  //after search return false because it is not a perfect square
        
    }
};