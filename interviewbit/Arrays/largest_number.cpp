int func(string a, string b)
{
    string ab=a.append(b);
    string ba=b.append(a);
    return ab.compare(ba) > 0?1:0;
}

string Solution::largestNumber(const vector<int> &a) {
    string str="";
    vector<string>s;
    int c=0;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[i]==0){c++;}
        s.push_back(to_string(a[i]));

    }
    if(c==a.size()){return "0";}
    
        sort(s.begin(),s.end(),func);
    for(int i=0;i<s.size();i++)
    {
        str+=s[i];
    }
    return str;

}
