class Solution {
    public:
    bool safe(int row,int col,vector<string>&board,int n){
        int row2=row; //for saving these values
        int col2=col;
        
        while(row>=0 and col>=0){
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        col=col2;
        row=row2;
        
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }
        col=col2;
        row=row2;
        while(row<n and col>=0){
            if(board[row][col]=='Q')return false;
            row++;
            col--;
        }
        return true;
        
    }
    public:
    void func(int col,vector<string>&board,vector<vector<string>>&ans,int &n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(safe(row,col,board,n)){
                board[row][col]='Q';
                func(col+1,board,ans,n);
                board[row][col]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        func(0,board,ans,n);
        return ans;
    }
};
