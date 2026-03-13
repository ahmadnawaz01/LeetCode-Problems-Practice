class Solution {
public:
    string intToRoman(int num) {
        vector<int> val = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};  //creates an array of values
        vector<string> sym = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};  //corrsponding roman symbols
        string result="";  //result ot store
        int number =num;  
        int i=0;  //index
        while(i<val.size() && number!=0)  //if iterates through values and false when number  is equal to zero
        {
            if(val[i]<=number)  //if value is less than equal to number substract that
            {
                result=result+sym[i];
                number=number-val[i];
            }
            else  //only if greater move to next lower symbol values
            {
                i++;
            }
        }
        return result; 
    }
};