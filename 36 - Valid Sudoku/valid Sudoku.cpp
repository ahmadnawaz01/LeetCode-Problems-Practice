class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9); // make unique set for rows
        vector<unordered_set<char>> column(9); //for column
        vector<unordered_set<char>> boxes(9); //for individual 3x3 boxes

        for(int i=0;i<9;i++)  //rows  iterator
        {
            for(int j=0;j<9;j++)  //column iterator
            {
                char num=board[i][j];  //get the num
                if(num=='.') //if it empty contain '.' skip that iteration
                {
                    continue;
                }
                int boxindex=(i/3)*3+(j/3);  //that the formula get the box index out of 9 boxes
                if(rows[i].count(num)||column[j].count(num)||boxes[boxindex].count(num))  //check if the number  is already explore means sukoda is invalid
                {
                    return false;
                }
                else
                {
                rows[i].insert(num);  //else just add the num to the set
                column[j].insert(num);  
                boxes[boxindex].insert(num);
                }
            }
        }
        return true;
    }
};