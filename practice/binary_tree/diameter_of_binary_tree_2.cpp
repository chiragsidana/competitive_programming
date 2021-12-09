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

int caldiameter(Node* root,int *height){
    if(root==NULL){
         *height=0;
         return 0;
    }
    int lh=0,rh=0;
    int ldiameter=caldiameter(root->left,&lh);
    int rdiameter=caldiameter(root->right,&rh);
    int currdiameter=lh+rh+1;
    *height=max(lh,rh)+1;
    return max(currdiameter,max(ldiameter,rdiameter));

    
}

int main(){
struct Node* root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);

root->left->left=new Node(4);
root->left->right=new Node(5); 

root->right->left=new Node(6);
root->right->right=new Node(7);

int height=0;
cout<<caldiameter(root,&height);


return 0;
}