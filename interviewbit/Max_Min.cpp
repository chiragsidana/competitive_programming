int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int n=A.size();
    int ans=A[0]+A[n-1];
    return ans;
}
