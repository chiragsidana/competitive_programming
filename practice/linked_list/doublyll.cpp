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
void deletion(node* &head,int pos){
    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
    temp->next->prev=temp->prev;
    }
    delete temp;
}
void deleteatHead(node* &head){
    node*todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;
}
int length(node* head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
node* kappend(node* &head,int k){
    node*newhead;
    node*newtail;
    node*tail=head;
    int l=length(head);
    k=k%l;  //in case if agar k l se bda hua
    int count=1;
    while(tail->next!=NULL){
        if(count==(l-k)){
            newtail=tail;
        }
        if(count==l-k+1){
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
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
        ptr2=head2;
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
int main(){
    node* head=NULL;
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
   /* display(head);
    cout<<endl;
    insertatHead(head,5);
    display(head);
    cout<<endl;
    deletion(head,1);
    display(head); */
    insertatTail(head,5);
     insertatTail(head,6);
     display(head);
     cout<<endl;
     node*newhead=kappend(head,3);
     display(newhead);
    return 0;
}