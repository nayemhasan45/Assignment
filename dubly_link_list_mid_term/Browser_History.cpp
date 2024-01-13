#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        string val;
        Node*next;
        Node*prev;
        Node(string val){
                this->val=val;
                this->next=NULL;
                this->prev=NULL;
            }
};
void insertAtTail(Node*&tail,Node*&head,string v){
    Node*newNode=new Node(v);
    Node*tem=head;
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
void printNode(Node*head){
    Node*tem=head;
    while (tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
int main (){
    Node*head=NULL;
    Node*tail=NULL;
    while (true)
    {
        string v;
        cin>>v;
        if(v=="end") break;
        else{
            insertAtTail(head,tail,v);
        }
    }
    // int q;
    // cin>>q;
    // while (q--)
    // {
    //     string v,add;
    //     cin>>v;
    // }
    printNode(head);
    // cout<<endl<<head->val;
    return 0;
}