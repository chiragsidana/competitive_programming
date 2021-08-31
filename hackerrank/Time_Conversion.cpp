#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
// if(((s[8]=='P') && (s[0]=='1') && (s[1]=='2')) || (s[8]=='A') && s[0]<=1 && s[1]!=2){
// cout<<s.substr(0,8);
// }
int hours = stoi(s.substr(0,2));
int minutes = stoi(s.substr(3,2));
int seconds = stoi(s.substr(6,2));


if((s.substr(0,2)!="12") && (s[8]=='P')){
    hours+=12;

}
else if((s.substr(0,2)=="12") && (s[8]=='A')){
hours=0;
}

string ans = "";
if(hours < 10){
    ans+="0" + to_string(hours);
}else{
    ans+= to_string(hours);
}

ans+= ":";
if(minutes < 10){
    ans+="0" + to_string(minutes);
}else{
    ans+= to_string(minutes);
}
ans+=":";
if(seconds < 10){
    ans+="0" + to_string(seconds);
}else{
    ans+= to_string(seconds);
}

return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}