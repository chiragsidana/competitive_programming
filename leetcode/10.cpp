class Solution {
public:
    int dp[21][31];
string t;
int solve(int i, int j, string &s, string p){
	//If we have reached to the end of both the strings then return true.
    if(i == s.size() && j==p.size()){
        return 1;
    } 
	//If we have reached the end of the pattern string but text string is not at the end.
	//then that means that we have exhausted the pattern string. So return false in this case.
    if(j==p.size()) return 0;
	
	// if we reached to the end of the text string but characters in the pattern string are still remaining.
	//For example : s = "aab",  p= "aabb*a*.*c*", i = 3, j = 3.
	//here i = 3, it means that we have exhausted the text string. but we have j at 3 which means that 
	//we have some characters remaining in the pattern string. 
	//so we will check if (j+1)th character is '*' or not.
	//if (j+1)th character is '*' then we can take jump of 2 in the pattern string as we need to reach to
	//the end without consuming any character of the pattern string. and b* can be treated as "" an empty string.
	//similarly we will do this till the end.
	
    if(i == s.size()){
        if(j+1<p.size() && p[j+1] == '*')return dp[i][j] = solve(i,j+2,s,p);
        return 0;
    }
    if(dp[i][j] != -1) return dp[i][j];
    int ans = 0;
    
	//if we are not at the end of either of the two string. then we will check whether (j+1)th character 
	//of pattern string is '*' or not. If it is '*' then we will have two choices
	//choice 1 : treat x* as "";
	//choice 2 : treat x* as "xx*"
	
    if(j+1 < p.size() && p[j+1] == '*'){
		//choice 1:
        ans = ans | solve(i,j+2,s,p);
		
		//choice 2:
        if(s[i] == p[j] || p[j] == '.') ans = ans | solve(i+1,j,s,p);
    }else{
	
		// if (j+1)th character is not '*'. then we will compare current characters of both the strings.
        if(s[i] == p[j] || p[j] == '.'){
            ans = ans | solve(i+1,j+1,s,p);
        }
    }
    
	//finally return the answer while storing in the dp matrix.
    return dp[i][j] = ans;
    
    
}
bool isMatch(string s, string p) {
    memset(dp, -1 ,sizeof(dp));
    t = p;
    int res = solve(0, 0, s, p);
    return res == 0 ? false : true;
}
};
