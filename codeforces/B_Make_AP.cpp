// #include <bits/stdc++.h>
// #define int long long
// #define endl "\n"
// #define PI 3.141592653589793238
// #define MOD 1000000007
// #define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
// #define vi vector<int>
// #define vb vector<bool>
// #define vc vector<char>
// #define pii pair<int,int>
// #define vii vector<pii>
// #define rep(i,a,b) for(int i=a;i<b;i++)
// #define ff first
// #define ss second
// using namespace std;
// void solve()
// {
//    int a,b,c;
//    cin>>a>>b>>c;
//    if((b-a)==(c-b)){
//        cout<<"YES"<<endl;
//        return;
//    } 
  
//    if(b<=a and b<=c){
//         if((a+c)%2 !=0){
//        cout<<"NO"<<endl;
//        return;
//    }
//        if(((a+c)/2) %b==0){
//            cout<<"YES"<<endl;
//            return;
//        }
//    }
//    if((b>=a and b>=c) or (b>=a and b<=c) or (b<=a and b>=c)){
//        int mid=2*b;
//        if((mid-c) % a==0 and ((mid-c)!=0)){
//            cout<<"YES"<<endl;
//            return;
//        }
//        if((mid-a) %c==0 and ((mid-a)!=0)){
//            cout<<"YES"<<endl;
//            return;
//        }
//    }
//    cout<<"NO"<<endl;
// }
// signed main()
// {
//     FastIO;
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }

#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
using namespace std;
int fora(int a,int b,int c){
    int difa=c-b;
    if(b-difa==c-2*difa){
        int Aa=b-difa;
        int m=Aa/a;
        if(Aa==m*a){
            return m;
        }
    }
    return -1;
}
int forb(int a, int b, int c){
    int difb = c-a; 
    int d = (c-a)/2;
    if(difb%2==0){
        int Bb = a + d;
        int m = Bb/b;
        if(Bb == b*m){
            return m;
        }
    }
    return -1;
}
int forc(int a, int b, int c){
    int difc = b-a;
    if(a == (b-difc)){
        int Cc = a+2*difc;
        int m = Cc/c;
        if(Cc == c*m){
            return m;
        }
    }
    return -1;
}
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(fora(a,b,c)>0){
        cout<<"YES"<<endl;
        return;
    }
    if(forb(a,b,c)>0){
        cout<<"YES"<<endl;
        return;
    }
    if(forc(a,b,c)>0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}
signed main()
{
    FastIO;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}