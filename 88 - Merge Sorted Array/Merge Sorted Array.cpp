class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int lastnum1 = m - 1; // take the last num index in num1
        int lastnum2 = n - 1; // take the last index in num2
        int totalspace =
            m + n - 1; // this give the last total space empty in num1

        while (lastnum1 >= 0 && lastnum2 >= 0) // either one is copy it leaves
        {
            if (nums1[lastnum1] >
                nums2[lastnum2]) // compare last numbers in num1 and num2
            {
                nums1[totalspace] =
                    nums1[lastnum1]; // put large num at num1 end index
                totalspace--;
                lastnum1--;
            } else // else is also doing the same coresponding
            {
                nums1[totalspace] = nums2[lastnum2];
                totalspace--;
                lastnum2--;
            }
        }
        while (
            lastnum2 >=
            0) // yup when num2 is not empty we just  copying remainnig elements
        {
            nums1[totalspace] = nums2[lastnum2];
            totalspace--;
            lastnum2--;
        }
    }
};