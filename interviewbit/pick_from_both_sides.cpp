int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int sum=0;
    for(int i=0;i<B;i++){
        sum+=A[i];
    }
    int maxsum=sum;
    int inc=n-1,exc=B-1;
    while(inc>=0 and exc>=0){
        sum+=A[inc];
        inc--;
        sum-=A[exc];
        exc--;
        maxsum=max(maxsum,sum);
    }
    return maxsum;

}
