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

vector<Node*> constructtrees(int start,int end){
    vector<Node*> trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start;i<=end;i++){
        vector<Node*> leftsubtrees=constructtrees(start,i-1);
        vector<Node*> rightsubtrees=constructtrees(i+1,end);

        for(int j=0;j<leftsubtrees.size();j++){
            Node* left=leftsubtrees[j];
            for(int k=0;k<rightsubtrees.size();k++){
                Node* right=rightsubtrees[k];
                Node* node=new Node(i);
                node->left=left;
                node->right=right;
                trees.push_back(node);
            }
        }
    }
    return trees;
}
void preorder(Node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
vector<Node*> totaltrees=constructtrees(1,3);
for(int i=0;i<totaltrees.size();i++){
    cout<<(i+1)<<":";
    preorder(totaltrees[i]);
    cout<<endl;

}

return 0;
}