class Solution {
public:
    bool isPalindrome(string s) {
        string c="";
        for(int i=0;i<s.length();i++){
            if(s[i]>=97 and s[i]<=122){
                c+=s[i];
            }
            if(s[i]>=65 and s[i]<=90){
                c+=(s[i]+32);
            }
            if(s[i]>='0' and s[i]<='9'){
                c+=s[i];
            }
        }
        if(c=="")return true;
        for(int i=0;i<c.length()/2;i++){
            if(c[i]!=c[c.length()-1-i]) return false;
        }
        return true;
    }
};
