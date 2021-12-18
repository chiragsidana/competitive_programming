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

bool isbst(Node* root,Node* min=NULL,Node* max=NULL){
    if(root==NULL){
        return true;
    }
    if(min!=NULL and root->data <=min->data){
        return false;
    }
    if(max!=NULL and root->data>=max->data){
        return false;
    }
    bool leftvalid=isbst(root->left,min,root);
    bool rightvalid=isbst(root->right,root,max);
    return leftvalid and rightvalid;
}
int main(){

Node* root1=new Node(2);
root1->left=new Node(1);
root1->right=new Node(3);
if(isbst(root1,NULL,NULL)){
    cout<<"valid BST"<<endl;
}else{
    cout<<"invalid bst"<<endl;
}
return 0;
}