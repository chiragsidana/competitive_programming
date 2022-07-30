class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int mp2[26]={0};
        for(string s:words2){
            int mp[26]={0};
            for(int i=0;i<s.size();i++)
                mp[s[i]-'a']++;
            for(int i=0;i<26;i++)
                mp2[i]=max(mp[i],mp2[i]);
            
        }
        vector<string> ans;
        for(string s:words1){
            int mp1[26]={0};
            for(int i=0;i<s.size();i++)
                mp1[s[i]-'a']++;
            bool t=true;
            for(int i=0;i<26;i++)
                if(mp2[i]>mp1[i]) t=false;
            if(t)ans.push_back(s);
        }
        return ans;
        
    }
};
