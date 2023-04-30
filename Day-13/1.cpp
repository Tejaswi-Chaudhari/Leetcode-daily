// Set Approach

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string> s;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                int box=(i/3)*3+(j/3);
                if(board[i][j]!='.'){
                    string str1 = "r"+to_string(i)+board[i][j];
                    string str2 = "c"+to_string(j)+board[i][j];
                    string str3 = "b"+to_string((i/3)*3+(j/3))+board[i][j];
                    if(s.count(str1))
                        return false;
                    if(s.count(str2))
                        return false;
                    if(s.count(str3))
                        return false;
                    s.insert(str1);
                    s.insert(str2);
                    s.insert(str3);
                }
            }
        }
        return true;
    }
};
