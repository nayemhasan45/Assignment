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
int size(Node*head){
    int cnt=0;
    while (head!=NULL)
    {
        cnt++;
        head=head->next;
    }
    return cnt;
}
void insertNode(Node*&head,int v,int pos){
    Node*newNode=new Node(v);
    Node*tem=head;
    if(pos==0){
        if(head==NULL)
        {
            head=newNode;
        }else
        {
            newNode->next=head;
            head=newNode;
        }
    }else if(pos==1){
        if (head==NULL)
        {
            head=newNode;
        }else
        {
            while (tem->next!=0)
            {
                tem=tem->next;
            }
            tem->next=newNode;
        }
    }else if(pos==2){
        if (v<size(head))
        {
            if (v==0)
            {
                Node*deleteNode=head;
                head=head->next;
                delete deleteNode;
            }else{
                for (int i = 1; i <= v-1; i++)
                {
                    tem=tem->next;
                }
                Node*deleteNode=tem->next;
                tem->next=tem->next->next;
                delete deleteNode;
            }
        }
        
    }
}
void printNode(Node*head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main (){
    int t;
    cin>>t;
    Node*head=NULL;
    while (t--)
    {
        int pos,v;
        cin>>pos>>v;
        insertNode(head,v,pos);
        printNode(head);
    }
    return 0;
}