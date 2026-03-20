class Solution {
public:
    int divide(int dividend, int divisor) {
          if(dividend==INT_MIN && divisor==-1)  //that stops overflow when -2^31 * -1 it become 1 greateer than 2^31-1 which is positive overflow we just return 2^31-1
          {
            return INT_MAX;
          }

          long long divend=labs(dividend);  //give us absolute value of divend and divsor
          long long divsor=labs(divisor);

          long  result=0;  //store the result

          while(divend>=divsor)  //condition till the diviend is greater than divisor
          {
            long temp=divsor;  //that the divisor who many times it divides the dividend
            long multiple=1;  //that the times

            while(divend>=(temp<<1))  //condition till the dividend is greater than 2^k 
            {
                temp=temp<<1;  //for example 3 it bit manipulation left shift 3 6 12 48
                //temp * 2(^k) every time 
                multiple<<=1;  //that count the multiple 2 4 8 16 32 
            }
            divend = divend-temp;   //that subtract the chunk from the divisor and if still dividend is greater than we agian do this 
            result=result+multiple;  //just store the result
          }
          if((dividend<0) ^ (divisor<0))  //xor check if one the number is negative our answer is also negative
          {
            result=result*-1;
          }
          return result;
    }
}; 