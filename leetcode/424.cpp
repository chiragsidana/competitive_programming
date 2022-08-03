class Solution {
public:
    int characterReplacement(string s, int k) {
        int start=0,end=0;
        int ans=0;
        int max_in_window=0;
        unordered_map<char,int>mp;
        for(end=0;end<s.size();end++){
            mp[s[end]]++;
            max_in_window=max(max_in_window,mp[s[end]]);
            if(end-start+1-max_in_window>k){
                mp[s[start]]--;
                start++;
            }
            ans=max(ans,end-start+1);
        }
        return ans;
    }
};
