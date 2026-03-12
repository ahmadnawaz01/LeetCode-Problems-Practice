class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> num3;
        num3.resize(nums1.size() + nums2.size());
        for (int i = 0; i < nums1.size(); i++)          //two loops to merge two array
        {
            num3[i] = nums1[i];
        }
        for (int j = 0; j < nums2.size(); j++)
        {
            num3[j + nums1.size()] = nums2[j];
        }
        sort(num3.begin(), num3.end());           //this function to sort vector array
        double median = num3.size() / 2.0;     //stores median index flaot value
        int m = num3.size() / 2;            //this stores integer
        if (num3.size() % 2 != 0)   //this check if its odd then median is m 
        {
            return num3[m];
        }
        else                 //but if its even we need index value before and after the flaot index
        {
            int n1 = floor(median) - 1;   //before index value
            int n2 = ceil(median);         //after index value
            double t = (num3[n1] + num3[n2]) / 2.0;   //that the calculate median
            return t;
        }
    }
};