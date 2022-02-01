int Solution::solve(int A, vector<int> &B) {
    long long sum=0;
    for(int i=0;i<A;i++){
        sum+=B[i];
    }
    if(sum%3!=0){
        return 0;
    }
    int tempsum=0;
    vector<int> temp(A);
    for(int i=A-1;i>=0;i--){
        tempsum+=B[i];
        if(tempsum==sum/3){
            temp[i]=1;
        }
    }
    tempsum=0;
    int count=0;
    for(int i=0;i<A;i++){
        tempsum+=B[i];
        if(tempsum==sum/3){
            for(int j=i+2;j<A;j++){
                if(temp[j]==1){
                    count+=1;
                }
            }
        }
    }
    return count;
}
