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
void removeDuplicates(Node*head){
    Node*tem,*tem2,*dlt;
    tem = head;
    while (tem != NULL && tem->next != NULL){
        tem2 = tem;
        while (tem2->next != NULL)
        {
            if (tem->val == tem2->next->val)
            {
                dlt = tem2->next;
                tem2->next = tem2->next->next;
                delete(dlt);
            }
            else tem2 = tem2->next;
        }
        tem = tem->next;
    }
}
void printLinklist(Node*head){
    Node* tem= head;
    while (tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl<<endl;
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
    removeDuplicates(head);
    printLinklist(head);
    return 0;
}