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
Node* searchinbst(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data>key){
        return searchinbst(root->left,key);
    }
    return searchinbst(root->right,key);
}

int main(){

Node* root=new Node(4);
root->left=new Node(2);
root->right=new Node(5);
root->left->left=new Node(1);
root->left->right=new Node(3);
root->right->right=new Node(6);
if(searchinbst(root,5)==NULL){
    cout<<"key does not exist";
}
else{
    cout<<"key exist";
}
return 0;
}