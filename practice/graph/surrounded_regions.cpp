#include <bits/stdc++.h>
//#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define vpi vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
using namespace std;
void change(vector<vector<char>>&A, int x,int y){
    A[x][y]='*';
    int dx[]={0,0,-1,1};
    int dy[]={1,-1,0,0};
    rep(i,0,4){
        int cx=x+dx[i];
        int cy=y+dy[i];
        if(cx>=0 and cx<A.size() and cy>=0 and cy<A[0].size() and A[cx][cy]=='0'){
            change(A,cx,cy);
        }
    }
}
int main()
{
    int n,m;cin>>n>>m;
    vector<vector<char>> A(n,vector<char>(m));
    rep(i,0,n){
        rep(j,0,m){
            cin>>A[i][j];
        }
    }
    rep(i,0,n){
        rep(j,0,m){
            if(i==0 or i==n-1 or j==0 or j==m-1){
                if(A[i][j]=='O')
                change(A,i,j);
            }
        }
    }
    rep(i,0,n){
        rep(j,0,m){
            if(A[i][j]=='O'){
                A[i][j]='X';
            }
        }
    }
    rep(i,0,n){
        rep(j,0,m){
            if(A[i][j]=='*'){
                A[i][j]='O';
            }
        }
    }
    rep(i,0,n){
        rep(j,0,m){
            cout<<A[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}