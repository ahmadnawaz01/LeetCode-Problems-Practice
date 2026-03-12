class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxarea=0;   //area= length*width
        while(left<right)
        {
            int heights=min(height[left],height[right]);   //calaculate min height of range
            int width=right-left;   //calcaultate width
            maxarea=max(maxarea,heights*width);  //calculate maxarea 

            if(height[left]<height[right]) //if left value is low than right then left++
            {
                left++;
            }
            else  //otherwise right++
            {
                right--;
            }
        }
        return maxarea;  //just return maxarea
    }
};