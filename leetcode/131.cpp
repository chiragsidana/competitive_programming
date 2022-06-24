class Solution {
public:
    bool isPalindrome(string sh, int start, int end){
        while(start <= end){
            if(sh[start++] != sh[end--]){
                return false;
            }
        }
        return true;
    }
    void helperFunc(int index, vector<string> &ds, vector<vector<string>> &ans, string s){
        if(index == s.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=index; i<s.size(); i++){
            if(isPalindrome(s, index, i)){
                ds.push_back(s.substr(index, i-index+1));
                helperFunc(i+1, ds, ans, s);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> ds;
        vector<vector<string>> ans;
        helperFunc(0, ds, ans, s);
        return ans;
    }
};
