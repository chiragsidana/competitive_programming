class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m1;
        map<char,int> m2;
        for(int i=0;i<26;i++){
            m1.insert(pair<char,int>('i+95',0));
            m2.insert(pair<char,int>('i+95',0));
                
        }
        for(int i=0;i<s.length();i++){
            m1[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            m2[t[i]]++;
        }
        if(m1==m2) return true;
        else return false;
    }
};
