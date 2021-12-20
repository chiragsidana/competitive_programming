#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *right,*left;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
struct info{
    int s;
    int max;
    int min;
    int ans;
    bool isbst;
};
info largestbstinbt(Node* root){
    if(root==NULL){
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left==NULL and root->right==NULL){
        return{1,root->data,root->data,1,true};
    }
    info leftinfo=largestbstinbt(root->left);
    info rightinfo=largestbstinbt(root->right);
    info curr;
    curr.s=(1+leftinfo.s+rightinfo.s);
    if(leftinfo.isbst and rightinfo.isbst and leftinfo.max<root->data and rightinfo.min>root->data){
        curr.min=min(leftinfo.min,min(rightinfo.min,root->data));
        curr.max=max(rightinfo.max,max(leftinfo.max,root->data));
        curr.ans=curr.s;
        curr.isbst=true;
        return curr;
    }
    curr.ans=max(leftinfo.ans,rightinfo.ans);
    curr.isbst=false;
    return curr;
}
int main(){
Node* root=new Node(15);
root->left=new Node(20);
root->right=new Node(30);
root->left->left=new Node(5);
cout<<"largest bst in bt:"<<largestbstinbt(root).ans<<endl;

return 0;
}