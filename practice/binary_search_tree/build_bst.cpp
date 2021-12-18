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
Node* constructbst(int preorder[],int* preorderidx,int key,int min,int max,int n){
    if(*preorderidx>=n){
        return NULL;
    }
    Node* root=NULL;
    if(key>min and key<max){
        root=new Node(key);
        *preorderidx+=1;
        if(*preorderidx < n){
            root->left=constructbst(preorder,preorderidx,preorder[*preorderidx],min,key,n);

        }
        if(*preorderidx<n){
             root->right=constructbst(preorder,preorderidx,preorder[*preorderidx],key,max,n);
        }
    }
    return root;
}
void printpreorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}
int main(){
int preorder[]={10,2,1,13,11};
int n=5;
int preorderidx=0;
Node* root=constructbst(preorder,&preorderidx,preorder[0],INT_MIN,INT_MAX,n);
printpreorder(root);

return 0;
}