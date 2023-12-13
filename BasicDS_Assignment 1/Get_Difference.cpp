#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node*next;
        Node(int val){
                this->val=val;
                this->next=NULL;
            }
};
void insertNode(Node*&head,Node*&tail,int v){
    Node*newNode=new Node(v);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }else
    {
        tail->next=newNode;
        tail=newNode;
    }
}
void printNode(Node*head){
    Node*tem=head;
    int max=INT_MIN;
    int min=INT_MAX;
    while (tem!=NULL)
    {
        if (min>tem->val)
        {
            min=tem->val;
        }
        if(max<tem->val){
            max=tem->val;
        }
        tem=tem->next;
    }
    // cout<<min<<" "<<max;
    cout<<max-min;
}
int main (){
    Node*head=NULL;
    Node*tail=NULL;
    while (true)
    {
        int v;
        cin>>v;
        if (v==-1)
        {
            break;
        }else
        {
            insertNode(head,tail,v);
        }
    }
    printNode(head);
    return 0;
}