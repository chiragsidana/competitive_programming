#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
struct Node* left;
struct Node* right;

Node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};

void preorder(struct Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(struct Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int search(int inorder[],int start,int end,int val){
    for(int i=start;i<=end;i++){
        if(inorder[i]==val){
            return i;
        }
    }
    return -1;
}
Node* buildtree(int postorder[],int inorder[],int start,int end){
    static int idx=4;
    if(start>end){
        return NULL;
    }
    int val=postorder[idx];
    idx--;
    Node* curr=new Node(val);
    if(start==end){
        return curr;
    }

    int pos=search(inorder,start,end,val);
    
    curr->right=buildtree(postorder,inorder,pos+1,end);
    curr->left=buildtree(postorder,inorder,start,pos-1);

    return curr;
}

void inorderprint(struct Node* root){
    if(root==NULL){
        return;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}
int main(){
int postorder[]={4,2,5,3,1};
int inorder[]={4,2,1,5,3};

//build tree
Node* root =buildtree(postorder,inorder,0,4);
inorderprint(root);
return 0;
}