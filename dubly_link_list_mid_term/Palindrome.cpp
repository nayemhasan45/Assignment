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
void printNode(Node*head,Node*tail){
    bool flag=true;
    while (head!=tail&&head->next!=tail)
    {
        if(head->val!=tail->val) flag=false;
        head=head->next;
        tail=tail->prev;
    }
    if(head->val!=tail->val) flag=false;
    if(flag) cout<<"YES";
    else cout<<"NO";
}
int main (){
    Node*head=NULL;
    Node*tail=NULL;
    while (true)
    {
        int v;
        cin>>v;
        if(v==-1) break;
        else{
            insertAtHead(head,tail,v);
        }
    }
    printNode(head,tail);
    return 0;
}