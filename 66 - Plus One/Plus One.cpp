class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--)   //loop check from end to 0
        {
            int num=digits[i];
            if(num<9)   //if number is less than 9 just add 1
            {
                digits[i]++;
                return digits;
            }  
            else   //if not make it zero
            {
                digits[i]=0;
            }
        }
        digits.push_back(0);    //if all are 9 they become and zero so add a 0 to the end 
        digits[0]=1; //make first index to 1
        return digits;
    }
};