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
int size(Node*head){
    int cnt=0;
    while (head!=NULL)
    {
        cnt++;
        head=head->next;
    }
    return cnt;
}
void printNode(Node*head,int pos){
    Node*tem=head;
    int cnt =0;
    while (tem!=NULL)
    {
        if(tem->val==pos){
            break;
        }
        cnt++;
        tem=tem->next;
    }
    int maxSize=size(head);
    if(cnt<maxSize){
        cout<<cnt<<endl;
    }else{
        cout<<-1<<endl;
    }
}
int main (){
    int t;
    cin>>t;
    while (t--)
    {
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
        int x;
        cin>>x;
        printNode(head,x);
    }
    
    return 0;
}