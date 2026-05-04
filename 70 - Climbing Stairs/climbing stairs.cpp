class Solution {
public:
    int climbStairs(int n) {
        if(n==1 || n==2)  //base case if n = 1 or 2 return n
        {
            return n;
        }   
        int first=2;  //storing previous two steps
        int second=1;
        for(int i=3;i<=n;i++)  //to the n stairs
        {
            int sum=first+second;  //add the previous two 
            second=first;  //and store now the previous two 
            first=sum;
        }
        return first;  //return the last previous 
        //this works are finacci series that f(n)=f(n-1)+f(n-2); total steps
    }
};