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
int calcheight(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=calcheight(root->left);
    int rheight=calcheight(root->right);
    return max(lheight,rheight)+1;
}
int caldiameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=calcheight(root->left);
    int rheight=calcheight(root->right);
    int currdiameter=lheight+rheight+1;
    int ldiameter=caldiameter(root->left);
    int rdiameter=caldiameter(root->right);

    return max(currdiameter,max(rdiameter,ldiameter));
}

int main(){
struct Node* root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);

root->left->left=new Node(4);
root->left->right=new Node(5); 

root->right->left=new Node(6);
root->right->right=new Node(7);

cout<<caldiameter(root)<<endl;


return 0;
}