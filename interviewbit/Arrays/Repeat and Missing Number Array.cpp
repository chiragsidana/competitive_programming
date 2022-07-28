vector<int> Solution::repeatedNumber(const vector<int> &ab) {
    int n=ab.size();
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        arr[i]=ab[i];
    }
    // map<int,int> mp;
    // for(int i=1;i<=n;i++){
    //     mp[i]=0;
    // }
    // for(int i=0;i<n;i++){
    //     mp[arr[i]]++;
    // }
    // int a=0,b=0;
    // for(auto it:mp){
    //     if(it.second==2)b=it.first;
    //     if(it.second==0)a=it.first;
    // }
    // return {b,a};
    int a,b;
    for(int i=0;i<n;i++){
        if(arr[abs(arr[i])-1]<0) a=abs(arr[i]);
        else{
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            b=i+1;
            break;
        }
    }
    return {a,b};
    
}

