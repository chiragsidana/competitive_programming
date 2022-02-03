vector<int> Solution::solve(vector<int> &A) {
    priority_queue<int,vector<int>,greater<int>> pqm;
    for(int i=0;i<A.size();i++){
        pqm.push(A[i]*A[i]);
    }
    vector<int> ans;
    for(int i=0;i<A.size();i++){
        ans.push_back(pqm.top());
        pqm.pop();
    }
    return ans;
}

