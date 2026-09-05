class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        k=k%size; //handling the beyond size of arrays cases
        r(nums,0,size-k-1);    //reversing the first k values
        r(nums,size-k,size-1);  //reversing the other values
        r(nums,0,size-1);  //now reversing the whole array
    }
    void r(vector<int>&n,int s,int e){
        while(s<e){  //if start <= end two pinter technique
            int temp=n[s];  //swapping between the range
            n[s]=n[e];
            n[e]=temp;
            s++;
            e--;
        }
    }
};