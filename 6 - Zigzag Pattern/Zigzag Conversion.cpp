class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)  //if one row means string is same after  zigzag
        return s;

        vector<string> rows(numRows); //make equal number of container in vecctor to store zigazag pattern

        int currrow=0; //currrow
        bool downdirection=false;  //direction checker

        for(char c : s)
        {
            rows[currrow]=rows[currrow]+c;  //add first character to first row
            if(currrow==0 || currrow==numRows-1)
            {
                downdirection=!downdirection;  //this when reaches bottom it toogles 
            }
            if(downdirection==true)  //if it direction is down rows like 0 1 2 3
            currrow++;
             else   //if it direction is change 3 2 1 0
            currrow--;
            
        }
        string res="";
        for(string row : rows)  //just now return the result array made by sending the rows
        {
            res+=row;
        }
        return res;
        
    }
};