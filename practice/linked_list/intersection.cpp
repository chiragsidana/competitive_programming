#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
int length(node* head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
int intersection(node* &head1,node* &head2){
    int l1=length(head1);
    int l2=length(head2);
    int d=0;
    node* ptr1;
    node* ptr2;
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }

    while(d){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}
int intersect(node* head1,node*head2,int pos){
    node*temp1=head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node*temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
void insertatHead(node* &head,int val){
node* n=new node(val);
n->next=head;
if(head!=NULL){
head->prev=n;
}
head=n;
}
void insertatTail(node* &head,int val){
    if(head==NULL){
        insertatHead(head,val);
            return;
        
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
    //n ka next already point krrha hai NULL par bcz of constructor
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }

}
int main(){
    node* head1=NULL;
    node* head2=NULL;
    insertatTail(head1,1);
    insertatTail(head1,2);
    insertatTail(head1,3);
    insertatTail(head1,4);
    insertatTail(head1,5);
    insertatTail(head1,6);
    insertatTail(head2,9);
    insertatTail(head2,10);
    intersect(head1,head2,3);
    display(head1);
    cout<<endl;
    display(head2);
    cout<<endl;
    cout<<intersection(head1,head2)<<endl;
    return 0;
}