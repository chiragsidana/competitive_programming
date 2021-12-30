#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &a,int n,int i){
    int maxidx=i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<n and a[l]>a[maxidx]){
        maxidx=l;
    }
    if(r<n and a[r]>a[maxidx]){
        maxidx=r;
    }

    if(maxidx!=i){
        swap(a[i],a[maxidx]);
        heapify(a,n,maxidx);
    }
}

void heapsort(vector<int> &a){
    int n=a.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(a,n,i);
    }
    for(int i=n-1;i>0;i--){
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}

int main(){
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
heapsort(a);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;
}