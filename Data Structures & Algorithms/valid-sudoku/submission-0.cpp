class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // 1. Check Rows
        for(int i = 0; i < 9; i++){
            vector<bool> check(10, false); // Size 10 to safely index 1-9
            for(int j = 0; j < 9; j++){
                if(isdigit(board[i][j])){
                    int k = board[i][j] - '0';
                    if(check[k] == false){
                        check[k] = true;
                    }else{
                        return false;
                    }
                }
            }
        }

        // 2. Check Columns
        for(int i = 0; i < 9; i++){
            vector<bool> check(10, false); // Size 10 to safely index 1-9
            for(int j = 0; j < 9; j++){
                if(isdigit(board[j][i])){
                    int k = board[j][i] - '0';
                    if(check[k] == false){
                        check[k] = true;
                    }else{
                        return false;
                    }
                }
            }
        }
        
        // 3. Check 3x3 Blocks
        for (int blockRow = 0; blockRow < 9; blockRow += 3) {
            for (int blockCol = 0; blockCol < 9; blockCol += 3) {
                vector<bool> check(10, false); // Size 10 to safely index 1-9
                
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        int row = blockRow + i;
                        int col = blockCol + j;
                
                        if (isdigit(board[row][col])) { // Fixed 'matrix' to 'board'
                            int num = board[row][col] - '0';
                            if(check[num] == false){
                                check[num] = true;
                            }else{
                                return false;
                            }
                        }
                    }
                }
            }
        }
        return true; // Return true if all checks pass
    }
};
