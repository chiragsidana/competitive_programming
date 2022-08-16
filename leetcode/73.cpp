class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        map<int,int> mp1;
        map<int,int> mp2;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    mp1[i]++;
                    mp2[j]++;
                    // cout<<i<<' '<<j<<'\n';
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mp1[i]+ mp2[j]>0){
                    // cout<<matrix[i][j]<<" ";
                    matrix[i][j]=0;
                }
            }
        }
    }
};
