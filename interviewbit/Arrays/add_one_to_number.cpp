vector<int> Solution::plusOne(vector<int> &A) {
     vector<int>res;
    int carry=1;
    for(int i=A.size()-1;i>=0;i--){
        if(A[i]==9 and carry==1){
            res.push_back(0);
        }
        else{
            res.push_back(A[i]+carry);
            carry=0;
        }
    }
    if(carry==1) res.push_back(1);
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        if(res[i]==0) {res.erase(res.begin()); i--;}
        else break;
    }
    return res;
    
}
