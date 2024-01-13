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
}
int main (){
    Node*head=NULL;
    Node*tail=NULL;
    while (true)
    {
        string val;
        cin>>val;
        if(val=="end") break;
        else{
            insertAtTail(tail,head,val);
        }
    }
    int q;
    cin>>q;
    Node*curr=head;
    while (q--)
    {
        string v,val;
        cin>>v;
        Node*tem=head;
        if(v=="visit"){
            cin>>val;
            bool flag=true;
            // curr=head;
            while (tem!=NULL)
            {
                if(tem->val==val){
                    flag=true;
                    break;
                }else{
                    flag=false;
                }
                tem=tem->next;
            }
            if(flag) {
                cout<<val<<endl;
                curr=tem;
            }
            else cout<<"Not Available"<<endl;
        }else if(v=="prev"){
            if(curr->prev!=NULL){
                cout<<curr->prev->val<<endl;
                curr=curr->prev;
            }else{
                cout<<"Not Available"<<endl;
            }
        }else if(v=="next"){
             if(curr->next!=NULL){
                cout<<curr->next->val<<endl;
                curr=curr->next;
            }else{
                cout<<"Not Available"<<endl;
            }
        }
    }
    
    return 0;
}