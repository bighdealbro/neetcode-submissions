class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string,bool> seen;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    char num=board[i][j];
                    string row_key="r"+to_string(i)+"_"+num;
                    string col_key="c"+to_string(j)+"_"+num;
                    string block_key = "b" + to_string(i / 3) + "_" + to_string(j / 3) + "_" + num;
                    if(seen[row_key] || seen[col_key] || seen[block_key])
                        return false;
                    seen[row_key]=true;  
                    seen[col_key]=true;
                    seen[block_key]=true; 
                }
            }
        }
        return true;
        
    }
};
