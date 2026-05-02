class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)   //special case just return 0 and 1 same
        {
            return x;
        }
        int start=1;  //start of number
        int end=x;  //end of search
        int ans=0;  //answer to store
        while(start<=end)  //while start <=end it runs 
        {
            long long mid=start+(end-start)/2;  //find mid
            if(mid*mid==x)  //if proper square than return that
            {
                return mid;
            }
            else if(mid*mid<x)  //if square of number less than the value store its answer and move to right space
            {
                ans=mid;
                start=mid+1;
            }
            else  //otherwise move to left
            {
                end=mid-1;
            }
        }
        return ans;  //just return the answer
    }
};