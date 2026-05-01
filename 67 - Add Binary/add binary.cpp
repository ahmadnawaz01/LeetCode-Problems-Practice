class Solution {
public:
    string addBinary(string a, string b) {
        int asize=a.size()-1; //size of a string
        int bsize=b.size()-1; //size of b string
        string result="";//this to store result in string
        int carry=0; // to store carry
        while(asize>=0 || bsize>=0 || carry){  //it runs till one of these condtions is true
        if(asize>=0)
        {
            carry+=a[asize]-'0';  //add the bit from right to the carry
            asize--;
        }
        if(bsize>=0)
        {
            carry+=b[bsize]-'0';  //add the bit from the right of string b to carry
            bsize--;
        }
        result+=(carry%2)+'0';  //append to result by taking carry mod
        carry=carry/2;  //divide the carry value to get the carry for the next bits
        }
        reverse(result.begin(),result.end());  //in the end reverse the result
        return result;
    }
};