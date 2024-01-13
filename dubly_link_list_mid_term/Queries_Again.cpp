#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node*next;
        Node*prev;
        Node(int val){
                this->val=val;
                this->next=NULL;
                this->prev=NULL;
            }
};
void printNode(Node*head){
    Node*tem=head;
    while (tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
}
void printNodeReverse(Node*tail){
    Node*tem=tail;
    while (tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->prev;
    }
    cout<<endl;
}
void insertAtHead(Node*&head,Node*&tail,int v){
    Node*newNode=new Node(v);
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
    }else
    {
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}
void insertAtTail(Node*&tail,Node*&head,int v){
    Node*newNode=new Node(v);
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
    }else
    {
        newNode->prev=tail;
        tail->next=newNode;
        tail=tail->next;
    }  
}
int size(Node*head){
    int size=0;
    while (head!=NULL)
    {
        size++;
        head=head->next;
    }
    return size;
}
void insertAtAnyPos(Node*head,Node*&tail,int pos,int v){
    Node*newNode=new Node(v);
    Node*tem=head;
    for (int i = 1; i <= pos-1; i++)
    {
        tem=tem->next;
    }
    newNode->next=tem->next;
    tem->next=newNode;
    newNode->prev=tem;
    newNode->next->prev=newNode;
}

int main (){
    int q;
    cin>>q;
    Node*head=NULL;
    Node*tail=NULL;
    while (q--)
    {
        int pos,v;
        cin>>pos>>v;
        if(pos==0){
            insertAtHead(head,tail,v);
            cout<<"L -> ";
            printNode(head);
            cout<<endl<<"R -> ";
            printNodeReverse(tail);
        }else if(pos==size(head)){
            insertAtTail(tail,head,v);
            cout<<"L -> ";
            printNode(head);
            cout<<endl<<"R -> ";
            printNodeReverse(tail);
        }else if(pos<size(head)){
            insertAtAnyPos(head,tail,pos,v);
            cout<<"L -> ";
            printNode(head);
            cout<<endl<<"R -> ";
            printNodeReverse(tail);
        }else{
            cout<<"Invalid"<<endl;
        }
    }
    return 0;
}