class Solution {
public:
    int myAtoi(string s) {
        long number=0;  //result of integer number
        int sign=false; //false it positive sign
        int index=0;  
        while(index<s.length() && s[index]==' ')  //skip spaces
        {
            index++;
        }
        if(s[index]=='-')   //check - sign and store
        {
            sign=true;
            index++;
        }
        else if(s[index]=='+')   //if positive sign skip
        {
            index++;
        }
        for(int i=index;i<s.length();i++)
        {
            if(s[i]>='0' && s[i]<='9')  //check the numeber in the string
            {
                int temp=s[i]-48;  //chnage asc  to int
                if(!sign) {
                    if(number > (INT_MAX - temp) / 10)   
                        return INT_MAX; // overflow positive
                } else {
                    if(-number < (INT_MIN + temp) / 10)
                        return INT_MIN; // overflow negative
                }
                number = number * 10 + temp; 
            }
            else  //any non int break the loop
            {
                break;
            }
        }
        if(sign==true)  //in the ened check sign and add it if negative number
        {
            number=number*-1;
        }
        return number;
    }
};