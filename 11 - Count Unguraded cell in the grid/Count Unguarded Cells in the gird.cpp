class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, 0));  //make a 2d array and initial with 0

        for (int i = 0; i < guards.size(); i++) {   //postion the guard values to 1
            int r = guards[i][0];
            int c = guards[i][1];
            grid[r][c] = 1;
        }

        for (int i = 0; i < walls.size(); i++) {   //postion the walls in 2darray and give value to 2
            int r = walls[i][0];                         
            int c = walls[i][1];
            grid[r][c] = 2;
        }

        //checks for left to right in a array and check for seen cells and place 5 in them
        for (int i = 0; i < m; i++) {
            bool see = false;
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    see = false;
                }
                else if (grid[i][j] == 1) {
                    see = true;
                }
                else if (see == true) {
                    grid[i][j] = 5;
                }
            }

            see = false;     //that loop checks from right to left
            for (int j = n - 1; j >= 0; j--) {
                if (grid[i][j] == 2) {
                    see = false;
                }
                else if (grid[i][j] == 1) {
                    see = true;
                }
                else if (see == true) {
                    grid[i][j] = 5;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            bool see = false;
            for (int j = 0; j < m; j++) {
                if (grid[j][i] == 2) {
                    see = false;
                }
                else if (grid[j][i] == 1) {
                    see = true;
                }
                else if (see == true) {
                    grid[j][i] = 5;   // corrected index order
                }
            }

            see = false;     //that loop checks from right to left
            for (int j = m - 1; j >= 0; j--) {     // fixed iteration bound
                if (grid[j][i] == 2) {
                    see = false;
                }
                else if (grid[j][i] == 1) {
                    see = true;
                }
                else if (see == true) {
                    grid[j][i] = 5;   // corrected index order
                }
            }
        }

        //now checks from top to bottom and bottom to top
        for (int j = 0; j < n; j++) {
            bool seen = false;

            for (int i = 0; i < m; i++) {
                if (grid[i][j] == 2) {
                    seen = false;
                }
                else if (grid[i][j] == 1) {
                    seen = true;
                }
                else if (seen == true) {
                    grid[i][j] = 3;
                }
            }

            seen = false;
            for (int i = m - 1; i >= 0; i--) {
                if (grid[i][j] == 2) {
                    seen = false;
                }
                else if (grid[i][j] == 1) {
                    seen = true;
                }
                else if (seen == true) {
                    grid[i][j] = 3;
                }
            }
        }

        int unguarded = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    unguarded++;
                }
            }
        }

        return unguarded;
    }
};