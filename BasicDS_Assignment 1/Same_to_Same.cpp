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
void printNode(Node*head,Node*head2){
    Node*tem=head;
    Node*tem2=head2;
    int cnt=0,cnt2=0;
    while (tem!=NULL)
    {
        cnt++;
        tem=tem->next;
    }
    while (tem2!=NULL)
    {
        cnt2++;
        tem2=tem2->next;
    }
    bool flag=false;
    if (cnt!=cnt2)
    {
        flag=false;
    }else
    {
        while (head!=NULL)
        {
            if (head->val!=head2->val)
            {
                flag=false;
                break;
            }else
            {
                flag=true;
            }
            head=head->next;
            head2=head2->next;
        }
    }
    if (flag==true)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
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
    Node*head2=NULL;
    Node*tail2=NULL;
    while (true)
    {
        int v;
        cin>>v;
        if (v==-1)
        {
            break;
        }else
        {
            insertNode(head2,tail2,v);
        }
    }
    printNode(head,head2);
    return 0;
}