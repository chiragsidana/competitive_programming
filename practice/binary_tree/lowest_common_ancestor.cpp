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
bool getpath(Node* root,int key,vector<int>&path){
    if(root==NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data==key){
        return true;
    }
    if((getpath(root->left,key,path)) or (getpath(root->right,key,path))){
        return true;
    }
    path.pop_back();
    return false;
}

int LCA(Node* root,int n1,int n2){
    vector<int> path1,path2;
    if(!(getpath(root,n1,path1)) or  !(getpath(root,n2,path2))){
        return -1;
    }
    int pc;
    for(pc=0; pc<path1.size() and path2.size();pc++){
        if(path1[pc]!=path2[pc]){
            break;
        }
    }
    return path1[pc-1];
}

Node* LCA2(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 or root->data==n2){
        return root;
    }
    Node* leftLCA=LCA2(root->left,n1,n2);
    Node* rightLCA=LCA2(root->right,n1,n2);
    if(leftLCA and rightLCA){
        return root;
    }
    if(leftLCA!=NULL){
        return leftLCA;
    }
    return rightLCA;
}
int main(){
struct Node* root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);

root->left->left=new Node(4);
root->right->left=new Node(5); 

root->right->right=new Node(6);
root->right->left->left=new Node(7);

int n1=7;
int n2=6;
Node* lca=LCA2(root,n1,n2);
if(lca==NULL){
    cout<<"LCA does not exist"<<endl;
}
else{
    cout<<"LCA: "<<lca->data<<endl;
}

return 0;
}