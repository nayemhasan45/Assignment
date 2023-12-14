#include <bits/stdc++.h>
using namespace std;
//Structure for a node in the linked list.
struct node
{
    int data;
    struct node *next;
};
//Function to remove duplicates.
void removeduplicates(node* head)
{
    //Pointer to traverse the linked list.
    node* curr=head;
    //pointer to store the next to the next pointer of the current 
    //node.
    node* nextofcurr;
    //For empty linked list.
    if(curr==nullptr)
    {
        return;
    }
    //Traversing through the linked list.
    while(curr->next!=nullptr)
    {
        //When the next node is a duplicate of the current node.
        if(curr->data==curr->next->data)
        {
            //Store the next of the next node.
            nextofcurr=curr->next->next;
            //Delete the next node
            free(curr->next);
            //Assign the next node to the iterator.
            curr->next=nextofcurr;
        }
        //When the next node is not a duplicate of the current
        //node.
        else
        {
            curr=curr->next;
        }
    }
}
//Function to push nodes into the list.
void push(struct node** headr, int new_val)
{
    //Creatng a new node.
    struct node* new_node= new node();
    //Putting the value in the node.
    new_node->data= new_val;
    //Linking the node to the list.
    new_node->next=(*headr);
    //Shifting the head pointer to the new node.
    *headr= new_node;
}
//Driver function.
int main()
{
    //Creating an empty list.
    struct node* head=nullptr;
    //Enter no  of nodes in the node.
    int size;
    cout<<"Enter the number of nodes in the list- ";
    cin>>size;
    //Pushing the nodes in it.
    cout<<"Enter the nodes in the list- ";
    for(int i=0;i<size;i++)
    {
        int a;
        cin>>a;
        push(&head,a);
    }
    //To remove duplicates from the sorted linked list.
    removeduplicates(head);
    //Printing the linked list.    
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}