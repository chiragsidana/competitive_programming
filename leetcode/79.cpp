class Solution {
public:
    
    bool dfs(vector<vector<char>>& board, string word,int i,int j,int n){
        if(n==word.size())return true;
        if(i<0 or i>=board.size() or j<0 or j>=board[i].size() or board[i][j]!=word[n])return false;
        board[i][j]='0';
        bool status=dfs(board,word,i+1,j,n+1) or dfs(board,word,i,j+1,n+1) or dfs(board,word,i-1,j,n+1) or dfs(board,word,i,j-1,n+1);
        board[i][j]=word[n];
        return status;
    }
    bool exist(vector<vector<char>>& board, string word) {
        if(word=="")return false;
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0] and dfs(board,word,i,j,0)) return true;
            }
        }
        return false;
    }
};
