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
bool isidentical(Node* root1,Node* root2){
    if(root1==NULL and root2==NULL){
        return true;

    }
  else if(root1==NULL or root2==NULL){
        return false;

    }
    else{
        bool cond1=root1->data==root2->data;
        bool cond2=isidentical(root1->left,root2->left);
        bool cond3=isidentical(root1->right,root2->right);
        if(cond1 and cond2 and cond3){
            return true;
        }
        else return false;
    }

}
int main(){
Node* root=new Node(2);
root->left=new Node(1);
root->right=new Node(3);

Node* root2=new Node(5);
root2->left=new Node(7);
root2->right=new Node(53);
  if(isidentical(root,root2)){
      cout<<"identical"<<endl;
  }
  else cout<<"not"<<endl;

return 0;
}