int Solution::maxSubArray(const vector<int> &A) {
    int n=A.size();
    int sum=A[0],max_sum=A[0];
    for(int i=1;i<n;i++){
        // max_ending_here=max_ending_here+A[i];
        // if(max_ending_here<0)
        // max_ending_here=0;
        // if(max_so_far<max_ending_here)
        // max_so_far=max_ending_here;
        sum=max(A[i],sum+A[i]);
        max_sum=max(sum,max_sum);
    }
    return max_sum;
}
